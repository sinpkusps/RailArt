#include "userwindow.h"
#include "ui_userwindow.h"
#include "userdialog.h"
#include "searchdialog.h"
#include "goodsdialog.h"
#include "purchasedialog.h"
#include "recordationdialog.h"
#include "invitationdialog.h"
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QSqlError>
#include <QMessageBox>
#include <QLabel>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QRandomGenerator>

UserWindow::UserWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::UserWindow)
{
    ui->setupUi(this);
    setWindowTitle(runtime.getConfig().app_name);
    initTableView();
    initStatusBar();
    refreshTableViewGoods();
    if (!runtime.isMerchant())
    {
        ui->tabWidget->removeTab(4);
    }
    ui->pushButtonGoodsReturn->hide();
}

UserWindow::~UserWindow()
{
    delete ui;
}

void UserWindow::on_actionAccount_triggered()
{
    UserDialog dlg(runtime.getContext()->id, USER_DIALOG::MODIFY, this);
    dlg.exec();
}

void UserWindow::on_actionQuit_triggered()
{
    close();
}

void UserWindow::initTableView()
{
    // 设定选定整合模式
    ui->tableViewGoods->setSelectionBehavior(QAbstractItemView::SelectRows);
    // 设定只能选取单行模式
    ui->tableViewGoods->setSelectionMode(QAbstractItemView::SingleSelection);
    // 禁止单元格编辑
    ui->tableViewGoods->setEditTriggers(QAbstractItemView::NoEditTriggers);
    // 设置颜色交替
    ui->tableViewGoods->setAlternatingRowColors(true);
    m_modelgoods = new QSqlQueryModel(this);
    ui->tableViewGoods->setModel(m_modelgoods);

    // 设定选定整合模式
    ui->tableViewCart->setSelectionBehavior(QAbstractItemView::SelectRows);
    // 设定只能选取单行模式
    ui->tableViewCart->setSelectionMode(QAbstractItemView::SingleSelection);
    // 禁止单元格编辑
    ui->tableViewCart->setEditTriggers(QAbstractItemView::NoEditTriggers);
    // 设置颜色交替
    ui->tableViewCart->setAlternatingRowColors(true);
    m_modelcart = new QSqlQueryModel(this);
    ui->tableViewCart->setModel(m_modelcart);

    // 设定选定整合模式
    ui->tableViewRecordation->setSelectionBehavior(QAbstractItemView::SelectRows);
    // 设定只能选取单行模式
    ui->tableViewRecordation->setSelectionMode(QAbstractItemView::SingleSelection);
    // 禁止单元格编辑
    ui->tableViewRecordation->setEditTriggers(QAbstractItemView::NoEditTriggers);
    // 设置颜色交替
    // 下面同理
    ui->tableViewRecordation->setAlternatingRowColors(true);
    m_modelrecordation = new QSqlQueryModel(this);
    ui->tableViewRecordation->setModel(m_modelrecordation);

    ui->tableViewInvitation->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableViewInvitation->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableViewInvitation->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableViewInvitation->setAlternatingRowColors(true);
    m_modelinvitation = new QSqlQueryModel(this);
    ui->tableViewInvitation->setModel(m_modelinvitation);

    ui->tableViewMyGoods->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableViewMyGoods->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableViewMyGoods->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableViewMyGoods->setAlternatingRowColors(true);
    m_modelmygoods = new QSqlQueryModel(this);
    ui->tableViewMyGoods->setModel(m_modelmygoods);

    ui->tableViewShoucang->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableViewShoucang->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableViewShoucang->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableViewShoucang->setAlternatingRowColors(true);
    m_modelshoucang = new QStandardItemModel(this);
    m_modelshoucang->setHorizontalHeaderLabels(QStringList() << "收藏时间" << "车次序列号" << "车次名称" 
        << "起点城市" << "终点城市" << "发车时间" << "到达时间" << "票价" << "数量" << "金额");
    ui->tableViewShoucang->setModel(m_modelshoucang);
}

void UserWindow::initStatusBar()
{
    QLabel *info = new QLabel(this);
    info->setText(QString("用户 | %1").arg(runtime.getContext()->id));
    statusBar()->insertPermanentWidget(0, info);
}

void UserWindow::refreshTableViewGoods()
{
    runtime.getGoodsList(m_modelgoods);
    ui->tableViewGoods->setColumnWidth(4, 160);
    ui->tableViewGoods->setColumnWidth(5, 160);
}

void UserWindow::refreshTableViewCart()
{
    runtime.getCartList(m_modelcart, runtime.getContext()->id);
}

void UserWindow::refreshTableViewRecordation()
{
    runtime.getRecordationList(m_modelrecordation, runtime.getContext()->id);
    ui->tableViewRecordation->setColumnWidth(5, 160);
    ui->tableViewRecordation->setColumnWidth(6, 160);
}

void UserWindow::refreshTableViewInvitation()
{
    runtime.getInvitationList(m_modelinvitation);
    ui->tableViewInvitation->setColumnWidth(4, 160);
}

void UserWindow::refreshTableViewMyGoods()
{
    runtime.getGoodsList(m_modelmygoods, runtime.getContext()->id);
    ui->tableViewMyGoods->setColumnWidth(4, 160);
}

void UserWindow::refreshTableViewShoucang()
{
    m_modelshoucang->removeRows(0, m_modelshoucang->rowCount());
    
    // 获取当前用户ID
    QString userId = runtime.getContext()->id;
    QString filename = QString("%1_favorites.txt").arg(userId);
    
    qDebug() << "Trying to open file:" << filename;
    
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file:" << file.errorString();
        return;
    }

    QTextStream in(&file);
    in.setEncoding(QStringConverter::Utf8);

    QString line;
    QStringList currentRecord;
    int row = 0;

    while (!in.atEnd()) {
        line = in.readLine().trimmed();
        qDebug() << "Reading line:" << line;
        
        if (line.startsWith("收藏时间:")) {
            if (!currentRecord.isEmpty()) {
                // 添加上一组记录
                m_modelshoucang->insertRow(row);
                for (int col = 0; col < currentRecord.size(); ++col) {
                    m_modelshoucang->setItem(row, col, new QStandardItem(currentRecord[col]));
                }
                row++;
                currentRecord.clear();
            }
            currentRecord << line.mid(5); // 去掉"收藏时间:"
        }
        else if (line.startsWith("车次序列号:")) {
            currentRecord << line.mid(6);
        }
        else if (line.startsWith("车次名称:")) {
            currentRecord << line.mid(5);
        }
        else if (line.startsWith("起点城市:")) {
            currentRecord << line.mid(5);
        }
        else if (line.startsWith("终点城市:")) {
            currentRecord << line.mid(5);
        }
        else if (line.startsWith("发车时间:")) {
            currentRecord << line.mid(5);
        }
        else if (line.startsWith("到达时间:")) {
            currentRecord << line.mid(5);
        }
        else if (line.startsWith("票价:")) {
            currentRecord << line.mid(3);
        }
        else if (line.startsWith("数量:")) {
            currentRecord << line.mid(3);
        }
        else if (line.startsWith("金额:")) {
            currentRecord << line.mid(3);
        }
    }

    // 添加最后一组记录
    if (!currentRecord.isEmpty()) {
        m_modelshoucang->insertRow(row);
        for (int col = 0; col < currentRecord.size(); ++col) {
            m_modelshoucang->setItem(row, col, new QStandardItem(currentRecord[col]));
        }
    }

    file.close();

    // 调整列宽
    for (int i = 0; i < m_modelshoucang->columnCount(); ++i) {
        ui->tableViewShoucang->resizeColumnToContents(i);
    }

    qDebug() << "Total rows loaded:" << m_modelshoucang->rowCount();
}

void UserWindow::on_tabWidget_currentChanged(int index)
{
    switch (index)
    {
    case 0:
        refreshTableViewGoods();
        break;
    case 1:
        refreshTableViewCart();
        break;
    case 2:
        refreshTableViewRecordation();
        break;
    case 3:
        refreshTableViewInvitation();
        break;
    case 4:
        refreshTableViewMyGoods();
        break;
    case 5:
        refreshTableViewShoucang();
        break;
    }
}

void UserWindow::on_tableViewGoods_doubleClicked(const QModelIndex &index)
{
    QSqlRecord record = m_modelgoods->record(index.row());
    QString id = record.value(0).toString();
    GoodsDialog dlg(id, GOODS_DIALOG::READONLY, this);
    if (dlg.exec() == QDialog::Accepted)
    {
        refreshTableViewGoods();
    }
}

void UserWindow::on_pushButtonGoodsCart_clicked()
{
    int row = ui->tableViewGoods->currentIndex().row();
    if (row >= 0)
    {
        QAbstractItemModel *model = ui->tableViewGoods->model();
        QModelIndex idindex = model->index(row, 0);
        QString id = model->data(idindex).toString();
        PurchaseDialog dlg(id);
        if (dlg.exec() == QDialog::Accepted)
        {
            refreshTableViewGoods();
        }
    }
    else
    {
        QMessageBox::warning(this, "提示", "请选中要购票的车次信息");
    }
}

void UserWindow::on_pushButtonGoodsReturn_clicked()
{
    int row = ui->tableViewRecordation->currentIndex().row();
    if (row >= 0)
    {
        if (QMessageBox::question(this, "提示", "是否确认退票该车次？") == QMessageBox::Yes)
        {
            QAbstractItemModel *model = ui->tableViewRecordation->model();
            QModelIndex index = model->index(row, 0);
            QString id = model->data(index).toString();

            if (runtime.returnGoods(runtime.getContext()->id, id))
            {
                QMessageBox::warning(this, "提示", "退票成功");
                refreshTableViewRecordation();
            }
            else
            {
                QMessageBox::warning(this, "提示", "退票失败");
            }
        }
    }
    else
    {
        QMessageBox::warning(this, "提示", "请选中要退票的车次信息");
    }
}

void UserWindow::on_pushButtonGoodsSearch_clicked()
{
    SearchDialog dlg(this);
    dlg.addOption("车次名称", "name");
    dlg.addOption("起点城市", "start_city");
    dlg.addOption("终点城市", "end_city");
    dlg.addOption("发车时间", "start_date");
    dlg.addOption("到达时间", "end_date");
    dlg.make();
    if (dlg.exec() == QDialog::Accepted)
    {
        QString filter;
        if (dlg.getName() == "time")
        {
            filter = dlg.formatTime();
        }
        else
        {
            filter = dlg.formatLike();
        }
        runtime.searchGoodsList(m_modelgoods, filter);
    }
}

void UserWindow::on_pushButtonGoodsRefresh_clicked()
{
    refreshTableViewGoods();
}

void UserWindow::on_tableViewRecordation_doubleClicked(const QModelIndex &index)
{
    QSqlRecord record = m_modelrecordation->record(index.row());
    QString id = record.value(0).toString();
    RecordationDialog dlg(id, this);
    if (dlg.exec() == QDialog::Accepted)
    {
        refreshTableViewRecordation();
    }
}

void UserWindow::on_pushButtonRecordationSearch_clicked()
{
    SearchDialog dlg(this);
    dlg.addOption("流水号", "recordation.id");
    dlg.addOption("账号", "user.id");
    dlg.addOption("姓名", "user.name");
    dlg.addOption("车次序列号", "goods.id");
    dlg.addOption("车次名称", "goods.name");
    dlg.addOption("状态", "recordation.status");
    dlg.make();
    if (dlg.exec() == QDialog::Accepted)
    {
        QString filter;
        if (dlg.getName() == "time")
        {
            filter = dlg.formatTime();
        }
        else
        {
            filter = dlg.formatLike();
        }
        runtime.searchRecordationList(m_modelrecordation, filter, runtime.getContext()->id);
    }
}

void UserWindow::on_pushButtonRecordationRefresh_clicked()
{
    refreshTableViewRecordation();
}

void UserWindow::on_tableViewMyGoods_doubleClicked(const QModelIndex &index)
{
    QSqlRecord record = m_modelmygoods->record(index.row());
    QString id = record.value(0).toString();
    GoodsDialog dlg(id, GOODS_DIALOG::MODIFY, this);
    if (dlg.exec() == QDialog::Accepted)
    {
        refreshTableViewMyGoods();
    }
}

void UserWindow::on_pushButtonMyGoodsAdd_clicked()
{
    GoodsDialog dlg("", GOODS_DIALOG::CREATE, this);
    if (dlg.exec() == QDialog::Accepted)
    {
        refreshTableViewMyGoods();
    }
}

void UserWindow::on_pushButtonMyGoodsRemove_clicked()
{
    int row = ui->tableViewMyGoods->currentIndex().row();
    if (row >= 0)
    {
        if (QMessageBox::question(this, "提示", "是否确认删除该车次？") == QMessageBox::Yes)
        {
            QAbstractItemModel *model = ui->tableViewMyGoods->model();
            QModelIndex index = model->index(row, 0);
            QString id = model->data(index).toString();

            QString sql = QString("DELETE FROM goods WHERE id = '%1'")
                              .arg(id);

            QSqlQuery query = runtime.getDBManager().query();
            if (query.exec(sql))
            {
                refreshTableViewMyGoods();
                QMessageBox::information(this, "提示", "删除成功");
            }
            else
            {
                qDebug() << query.lastError().text();
                QMessageBox::warning(this, "提示", "删除失败");
            }
        }
    }
    else
    {
        QMessageBox::warning(this, "提示", "请选中要删除的信息");
    }
}

void UserWindow::on_pushButtonMyGoodsSearch_clicked()
{
    SearchDialog dlg(this);
    dlg.addOption("车次序列号", "id");
    dlg.addOption("车次名称", "name");
    dlg.addOption("起点城市", "start_city");
    dlg.addOption("终点城市", "end_city");
    dlg.addOption("发车时间", "start_date");
    dlg.addOption("到达时间", "end_date");
    dlg.make();
    if (dlg.exec() == QDialog::Accepted)
    {
        QString filter;
        if (dlg.getName() == "time")
        {
            filter = dlg.formatTime();
        }
        else
        {
            filter = dlg.formatLike();
        }
        filter += QString(" AND owner_id='%1' ").arg(runtime.getContext()->id);
        runtime.searchGoodsList(m_modelmygoods, filter);
    }
}

void UserWindow::on_pushButtonMyGoodsRefresh_clicked()
{
    refreshTableViewMyGoods();
}

void UserWindow::on_pushButtonCartPay_clicked()
{
    QString message;
    if (runtime.payCart(runtime.getContext()->id, message))
    {
        refreshTableViewCart();
    }
    QMessageBox::warning(this, "提示", message);
}

void UserWindow::on_pushButtonCartRemove_clicked()
{
    int row = ui->tableViewCart->currentIndex().row();
    if (row >= 0)
    {
        if (QMessageBox::question(this, "提示", "是否确认从待支付订单移除车次订单？") == QMessageBox::Yes)
        {
            QAbstractItemModel *model = ui->tableViewCart->model();
            QModelIndex index = model->index(row, 0);
            QString id = model->data(index).toString();

            QString sql = QString("DELETE FROM item WHERE id = '%1'")
                              .arg(id);

            QSqlQuery query = runtime.getDBManager().query();
            if (query.exec(sql))
            {
                refreshTableViewCart();
                QMessageBox::information(this, "提示", "移除成功");
            }
            else
            {
                qDebug() << query.lastError().text();
                QMessageBox::warning(this, "提示", "移除失败");
            }
        }
    }
    else
    {
        QMessageBox::warning(this, "提示", "请选中要移除的信息");
    }
}

void UserWindow::on_pushButtonCartRefresh_clicked()
{
    refreshTableViewCart();
}

void UserWindow::on_tableViewCart_doubleClicked(const QModelIndex &index)
{
}

void UserWindow::on_tableViewInvitation_doubleClicked(const QModelIndex &index)
{
    QSqlRecord record = m_modelinvitation->record(index.row());
    QString id = record.value(0).toString();
    InvitationDialog dlg(id, INVITATION_DIALOG::MODIFY, this);
    if (dlg.exec() == QDialog::Accepted)
    {
        refreshTableViewInvitation();
    }
}

void UserWindow::on_pushButtonInvitationAdd_clicked()
{
    InvitationDialog dlg("", INVITATION_DIALOG::CREATE, this);
    if (dlg.exec() == QDialog::Accepted)
    {
        refreshTableViewInvitation();
    }
}

void UserWindow::on_pushButtonInvitationRefresh_clicked()
{
    refreshTableViewInvitation();
}

void UserWindow::on_pushButtonShoucangRefresh_clicked()
{
    refreshTableViewShoucang();
}


void UserWindow::on_pushButto_update_clicked()
{
    // qDebug() << "Update button clicked";
    // 清空表格
    m_modelshoucang->removeRows(0, m_modelshoucang->rowCount());

    // 重新加载收藏信息
    refreshTableViewShoucang();

    // 强制更新视图
    ui->tableViewShoucang->viewport()->update();
}

void UserWindow::TicketGenerator_closed() {
    ticketGenerator = nullptr;
}


void UserWindow::on_pushButto_create_clicked()
{
    if(ticketGenerator) {
        ticketGenerator->show();
        ticketGenerator->raise();
    }

    ticketGenerator = new TicketGenerator(nullptr);
    ticketGenerator->setAttribute(Qt::WA_DeleteOnClose);

    connect(ticketGenerator, &TicketGenerator::destroyed,
            this, &UserWindow::TicketGenerator_closed);

    ticketGenerator->show();
}
