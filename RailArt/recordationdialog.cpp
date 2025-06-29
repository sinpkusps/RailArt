#include "recordationdialog.h"
#include "ui_recordationdialog.h"
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QSqlError>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDateTime>

RecordationDialog::RecordationDialog(const QString &id, QWidget *parent) : QDialog(parent),
                                                                           ui(new Ui::RecordationDialog),
                                                                           m_id(id)
{
    ui->setupUi(this);
    initTableView();
    download();
}

RecordationDialog::~RecordationDialog()
{
    delete ui;
}

void RecordationDialog::initTableView()
{
    // 设定选定整合模式
    ui->tableViewItem->setSelectionBehavior(QAbstractItemView::SelectRows);
    // 设定只能选取单行模式
    ui->tableViewItem->setSelectionMode(QAbstractItemView::SingleSelection);
    // 禁止单元格编辑
    ui->tableViewItem->setEditTriggers(QAbstractItemView::NoEditTriggers);
    // 设置颜色交替
    ui->tableViewItem->setAlternatingRowColors(true);
    m_modelitem = new QSqlQueryModel(this);
    ui->tableViewItem->setModel(m_modelitem);
}

void RecordationDialog::download()
{
    QSqlQuery query = runtime.getDBManager().query();
    if (query.exec(Runtime::selectRecordationSQL(m_id)))
    {
        if (query.next())
        {
            ui->lineEditID->setText(query.value(0).toString());
            ui->lineEditUserID->setText(query.value(1).toString());
            ui->lineEditUserName->setText(query.value(2).toString());
            ui->lineEditMoney->setText(query.value(3).toString());
            ui->lineEditStatus->setText(query.value(4).toString());
            ui->lineEditStartTime->setText(query.value(5).toString());
            ui->lineEditEndTime->setText(query.value(6).toString());
            runtime.getItemList(m_modelitem, m_id);
            ui->tableViewItem->setColumnWidth(5, 160);
        }
        else
        {
            QMessageBox::warning(this, "提示", "未找到信息！");
        }
    }
    else
    {
        QMessageBox::warning(this, "提示", query.lastError().text());
    }
}

void RecordationDialog::on_recshoucang_clicked()
{
    // 获取当前选中的行
    int row = ui->tableViewItem->currentIndex().row();
    if (row < 0) {
        QMessageBox::warning(this, "提示", "请先选择要收藏的行程");
        return;
    }

    // 获取用户ID
    QString userId = ui->lineEditUserID->text();
    if (userId.isEmpty()) {
        QMessageBox::warning(this, "提示", "无法获取用户信息");
        return;
    }

    // 创建收藏文件
    QString filename = QString("%1_favorites.txt").arg(userId);
    QFile file(filename);
    
    if (!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
        QMessageBox::warning(this, "提示", "无法创建收藏文件");
        return;
    }

    QTextStream out(&file);
    out.setEncoding(QStringConverter::Utf8);

    // 获取选中行的所有信息
    QSqlRecord record = m_modelitem->record(row);
    QString trainNumber = record.value("车次序列号").toString();
    QString trainName = record.value("车次名称").toString();
    QString fromCity = record.value("起点城市").toString();
    QString toCity = record.value("终点城市").toString();
    QString departureTime = record.value("发车时间").toString();
    QString arrivalTime = record.value("到达时间").toString();
    QString price = record.value("票价").toString();
    QString quantity = record.value("数量").toString();
    QString amount = record.value("金额").toString();

    // 写入收藏信息
    out << QString("收藏时间: %1\n").arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
    out << QString("车次序列号: %1\n").arg(trainNumber);
    out << QString("车次名称: %1\n").arg(trainName);
    out << QString("起点城市: %1\n").arg(fromCity);
    out << QString("终点城市: %1\n").arg(toCity);
    out << QString("发车时间: %1\n").arg(departureTime);
    out << QString("到达时间: %1\n").arg(arrivalTime);
    out << QString("票价: %1\n").arg(price);
    out << QString("数量: %1\n").arg(quantity);
    out << QString("金额: %1\n").arg(amount);
    out << "----------------------------------------\n";

    file.close();
    QMessageBox::information(this, "提示", "收藏成功！");
}
