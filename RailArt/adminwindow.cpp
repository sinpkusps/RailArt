#include "adminwindow.h"
#include "ui_adminwindow.h"
#include "admindialog.h"
#include "userdialog.h"
#include "searchdialog.h"
#include "goodsdialog.h"
#include "invitationdialog.h"
#include <QSqlRecord>
#include <QSqlError>
#include <QMessageBox>
#include <QLabel>
#include <QDebug>

AdminWindow::AdminWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::AdminWindow), m_modeluser(nullptr), m_modelgoods(nullptr), m_modelrecordation(nullptr), m_modelstatistics(nullptr)
{
    ui->setupUi(this);
    setWindowTitle(runtime.getConfig().app_name);
    initStatusBar();
    initTableView();
    refreshTableViewUser();
}

AdminWindow::~AdminWindow()
{
    delete ui;
}

void AdminWindow::initTableView()
{
    // 设定选定整合模式
    ui->tableViewUser->setSelectionBehavior(QAbstractItemView::SelectRows);
    // 设定只能选取单行模式
    ui->tableViewUser->setSelectionMode(QAbstractItemView::SingleSelection);
    // 禁止单元格编辑
    ui->tableViewUser->setEditTriggers(QAbstractItemView::NoEditTriggers);
    // 设置颜色交替
    // 下面同理
    ui->tableViewUser->setAlternatingRowColors(true);
    m_modeluser = new QSqlQueryModel(this);
    ui->tableViewUser->setModel(m_modeluser);

    ui->tableViewGoods->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableViewGoods->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableViewGoods->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableViewGoods->setAlternatingRowColors(true);
    m_modelgoods = new QSqlQueryModel(this);
    ui->tableViewGoods->setModel(m_modelgoods);

    ui->tableViewRecordation->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableViewRecordation->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableViewRecordation->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableViewRecordation->setAlternatingRowColors(true);
    m_modelrecordation = new QSqlQueryModel(this);
    ui->tableViewRecordation->setModel(m_modelrecordation);

    ui->tableViewInvitation->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableViewInvitation->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableViewInvitation->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableViewInvitation->setAlternatingRowColors(true);
    m_modelinvitation = new QSqlQueryModel(this);
    ui->tableViewInvitation->setModel(m_modelinvitation);

    ui->tableViewStatistics->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableViewStatistics->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableViewStatistics->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableViewStatistics->setAlternatingRowColors(true);
    m_modelstatistics = new QSqlQueryModel(this);
    ui->tableViewStatistics->setModel(m_modelstatistics);
}

void AdminWindow::initStatusBar()
{
    QLabel *info = new QLabel(this);
    info->setText(QString("管理员 | %1").arg(runtime.getContext()->id));
    statusBar()->insertPermanentWidget(0, info);
}

void AdminWindow::refreshTableViewUser()
{
    runtime.getUserList(m_modeluser);
    ui->tableViewUser->setColumnWidth(6, 160);
}

void AdminWindow::refreshTableViewGoods()
{
    runtime.getGoodsList(m_modelgoods);
    ui->tableViewGoods->setColumnWidth(4, 160);
    ui->tableViewGoods->setColumnWidth(5, 160);
}

void AdminWindow::refreshTableViewRecordation()
{
    runtime.getRecordationList(m_modelrecordation);
    ui->tableViewRecordation->setColumnWidth(5, 160);
    ui->tableViewRecordation->setColumnWidth(6, 160);
}

void AdminWindow::refreshTableViewInvitation()
{
    runtime.getInvitationList(m_modelinvitation);
    ui->tableViewInvitation->setColumnWidth(4, 160);
}

void AdminWindow::refreshTableViewStatistics()
{
    runtime.getStatisticsList(m_modelstatistics);
    ui->tableViewStatistics->setColumnWidth(2, 160);
}

void AdminWindow::on_actionAccount_triggered()
{
    AdminDialog dlg(runtime.getContext()->id, this);
    dlg.exec();
}

void AdminWindow::on_actionQuit_triggered()
{
    close();
}

void AdminWindow::on_tabWidget_currentChanged(int index)
{
    switch (index)
    {
    case 0:
        refreshTableViewUser();
        break;
    case 1:
        refreshTableViewGoods();
        break;
    case 2:
        refreshTableViewRecordation();
        break;
    case 3:
        refreshTableViewStatistics();
        break;
    case 4:
        refreshTableViewInvitation();
        break;
    }
}

void AdminWindow::on_tableViewUser_doubleClicked(const QModelIndex &index)
{
    QSqlRecord record = m_modeluser->record(index.row());
    QString id = record.value(0).toString();
    UserDialog dlg(id, USER_DIALOG::MODIFY, this);
    if (dlg.exec() == QDialog::Accepted)
    {
        refreshTableViewUser();
    }
}

void AdminWindow::on_pushButtonUserAdd_clicked()
{
    UserDialog dlg("", USER_DIALOG::CREATE, this);
    if (dlg.exec() == QDialog::Accepted)
    {
        refreshTableViewUser();
    }
}

void AdminWindow::on_pushButtonUserRemove_clicked()
{
    int row = ui->tableViewUser->currentIndex().row();
    if (row >= 0)
    {
        if (QMessageBox::question(this, "提示", "是否确认删除该用户？") == QMessageBox::Yes)
        {
            QAbstractItemModel *model = ui->tableViewUser->model();
            QModelIndex index = model->index(row, 0);
            QString id = model->data(index).toString();

            QString sql = QString("DELETE FROM user WHERE id = '%1'")
                              .arg(id);

            QSqlQuery query = runtime.getDBManager().query();
            if (query.exec(sql))
            {
                refreshTableViewUser();
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

void AdminWindow::on_pushButtonUserSearch_clicked()
{
    SearchDialog dlg(this);
    dlg.addOption("账号", "id");
    dlg.addOption("姓名", "name");
    dlg.addOption("性别", "sex");
    dlg.addOption("生日", "birthday");
    dlg.addOption("电话", "phone");
    dlg.addOption("身份证号码", "idcard");
    dlg.make();
    if (dlg.exec() == QDialog::Accepted)
    {
        QString filter;
        if (dlg.getName() == "birthday")
        {
            filter = dlg.formatTime();
        }
        else
        {
            filter = dlg.formatLike();
        }
        runtime.searchUserList(m_modeluser, filter);
    }
}

void AdminWindow::on_pushButtonUserRefresh_clicked()
{
    refreshTableViewUser();
}

void AdminWindow::on_tableViewGoods_doubleClicked(const QModelIndex &index)
{
    QSqlRecord record = m_modelgoods->record(index.row());
    QString id = record.value(0).toString();
    GoodsDialog dlg(id, GOODS_DIALOG::MODIFY, this);
    if (dlg.exec() == QDialog::Accepted)
    {
        refreshTableViewGoods();
    }
}

void AdminWindow::on_pushButtonGoodsAdd_clicked()
{
    GoodsDialog dlg("", GOODS_DIALOG::CREATE, this);
    if (dlg.exec() == QDialog::Accepted)
    {
        refreshTableViewGoods();
    }
}

void AdminWindow::on_pushButtonGoodsRemove_clicked()
{
    int row = ui->tableViewGoods->currentIndex().row();
    if (row >= 0)
    {
        if (QMessageBox::question(this, "提示", "是否确认删除该车次？") == QMessageBox::Yes)
        {
            QAbstractItemModel *model = ui->tableViewGoods->model();
            QModelIndex index = model->index(row, 0);
            QString id = model->data(index).toString();

            QString sql = QString("DELETE FROM goods WHERE id = '%1'")
                              .arg(id);

            QSqlQuery query = runtime.getDBManager().query();
            if (query.exec(sql))
            {
                refreshTableViewGoods();
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

void AdminWindow::on_pushButtonGoodsSearch_clicked()
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

void AdminWindow::on_pushButtonGoodsRefresh_clicked()
{
    refreshTableViewGoods();
}

void AdminWindow::on_pushButtonRecordationSearch_clicked()
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
        runtime.searchRecordationList(m_modelrecordation, filter);
    }
}

void AdminWindow::on_pushButtonRecordationRefresh_clicked()
{
    refreshTableViewRecordation();
}

void AdminWindow::on_pushButtonStatisticsSearch_clicked()
{
    SearchDialog dlg(this);
    dlg.addOption("车次序列号", "id");
    dlg.addOption("车次名称", "name");
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
        runtime.searchStatisticsList(m_modelstatistics, filter);
    }
}

void AdminWindow::on_pushButtonStatisticsRefresh_clicked()
{
    refreshTableViewStatistics();
}

void AdminWindow::on_tableViewInvitation_doubleClicked(const QModelIndex &index)
{
    QSqlRecord record = m_modelinvitation->record(index.row());
    QString id = record.value(0).toString();
    InvitationDialog dlg(id, INVITATION_DIALOG::MODIFY, this);
    if (dlg.exec() == QDialog::Accepted)
    {
        refreshTableViewInvitation();
    }
}

void AdminWindow::on_pushButtonInvitationRefresh_clicked()
{
    refreshTableViewInvitation();
}
