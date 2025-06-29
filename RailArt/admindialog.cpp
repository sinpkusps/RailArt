#include "admindialog.h"
#include "ui_admindialog.h"
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>

AdminDialog::AdminDialog(const QString &id, QWidget *parent) : QDialog(parent),
                                                               ui(new Ui::AdminDialog),
                                                               m_id(id)
{
    ui->setupUi(this);
    ui->lineEditID->setReadOnly(true);
    ui->pushButton->setDefault(true);
    ui->lineEditID->setText(id);
    download();
}

AdminDialog::~AdminDialog()
{
    delete ui;
}

void AdminDialog::on_pushButton_clicked()
{
    upload();
}

void AdminDialog::download()
{
    if (!m_id.isEmpty())
    {
        QString sql = QString("SELECT * FROM admin WHERE id = '%1'")
                          .arg(m_id);
        QSqlQuery query = runtime.getDBManager().query();
        if (query.exec(sql))
        {
            if (query.next())
            {
                ui->lineEditID->setText(query.value(0).toString());
                ui->lineEditPassword->setText(query.value(1).toString());
            }
            else
            {
                QMessageBox::warning(this, "提示", "未找到客户信息！");
            }
        }
        else
        {
            QMessageBox::warning(this, "提示", query.lastError().text());
        }
    }
}

void AdminDialog::upload()
{
    QString password = ui->lineEditPassword->text().trimmed();

    if (password.isEmpty())
    {
        QMessageBox::warning(this, "错误提示", "请填写密码！");
        return;
    }
    m_id = ui->lineEditID->text().trimmed();
    QString sql = QString(
                      "UPDATE admin SET "
                      "password = '%2' "
                      "WHERE id = '%1'")
                      .arg(m_id)
                      .arg(password);

    QSqlQuery query = runtime.getDBManager().query();
    if (query.exec(sql))
    {
        QMessageBox::information(this, "提示", "更新成功");
        accept();
    }
    else
    {
        qDebug() << query.lastError().text();
        QMessageBox::warning(this, "提示", "更新失败");
    }
}
