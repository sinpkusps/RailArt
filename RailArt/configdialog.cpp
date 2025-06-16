#include "configdialog.h"
#include "ui_configdialog.h"
#include <QMessageBox>

ConfigDialog::ConfigDialog(QWidget *parent) : QDialog(parent),
                                              ui(new Ui::ConfigDialog)
{
    ui->setupUi(this);
    ui->comboBoxDBDriver->addItem("QMYSQL");
    ui->comboBoxDBDriver->addItem("QSQLITE");
    ui->lineEditAppName->setText(runtime.getConfig().app_name);
    ui->lineEditStyle->setText(runtime.getConfig().ui_style);
    ui->comboBoxDBDriver->setCurrentText(runtime.getConfig().db_driver);
    ui->lineEditIP->setText(runtime.getConfig().host_ip);
    ui->lineEditPort->setText(QString::number(runtime.getConfig().host_port));
    ui->lineEditDBName->setText(runtime.getConfig().db_name);
    ui->lineEditDBUserID->setText(runtime.getConfig().db_user_id);
    ui->lineEditDBUserPassword->setText(runtime.getConfig().db_user_password);
}

ConfigDialog::~ConfigDialog()
{
    delete ui;
}

void ConfigDialog::on_pushButton_clicked()
{
    QString app_name = ui->lineEditAppName->text().trimmed();
    if (app_name.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请输入应用名称");
        return;
    }

    QString style = ui->lineEditStyle->text().trimmed();
    if (style.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请输入界面风格");
        return;
    }

    QString dbdriver = ui->comboBoxDBDriver->currentText().trimmed();
    if (dbdriver.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请输入数据库驱动");
        return;
    }

    QString ip = ui->lineEditIP->text().trimmed();
    if (ip.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请输入服务器地址");
        return;
    }

    QString port = ui->lineEditPort->text().trimmed();
    if (port.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请输入服务器端口");
        return;
    }

    QString dbname = ui->lineEditDBName->text().trimmed();
    if (dbname.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请输入数据库名称");
        return;
    }

    QString db_user_id = ui->lineEditDBUserID->text().trimmed();
    if (db_user_id.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请输入数据库账号");
        return;
    }

    QString db_user_password = ui->lineEditDBUserPassword->text().trimmed();
    if (db_user_password.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请输入数据库密码");
        return;
    }

    runtime.getConfig().app_name = app_name;
    runtime.getConfig().ui_style = style;
    runtime.getConfig().db_driver = dbdriver;
    runtime.getConfig().host_ip = ip;
    runtime.getConfig().host_port = port.toInt();
    runtime.getConfig().db_name = dbname;
    runtime.getConfig().db_user_id = db_user_id;
    runtime.getConfig().db_user_password = db_user_password;
    runtime.getConfig().save();
    accept();
}

void ConfigDialog::on_pushButtonInitDatabase_clicked()
{
    QString dbdriver = ui->comboBoxDBDriver->currentText().trimmed();
    if (dbdriver.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请输入数据库驱动");
        return;
    }
    runtime.getConfig().db_driver = dbdriver;
    runtime.getConfig().save();
    runtime.getDBManager().resetDatabase();
}
