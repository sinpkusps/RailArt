#include "logindialog.h"
#include "ui_logindialog.h"

#include "userdialog.h"
#include <QSqlError>
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) : QDialog(parent),
                                            ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    setWindowTitle(runtime.getConfig().app_name + " - 登录");
    // 设置登录按键为回车键按下的默认按键
    ui->pushButtonLogin->setFocus();
    ui->pushButtonLogin->setDefault(true);
    QStringList list;
    list << "用户"
         << "管理员";
    ui->comboBoxRole->addItems(list);
    const Context *context = runtime.getContext();
    if (context)
    {
        switch (context->role)
        {
        case ROLE::USER:
            ui->comboBoxRole->setCurrentIndex(0);
            break;
        case ROLE::ADMIN:
            ui->comboBoxRole->setCurrentIndex(1);
            break;
        }
    }
    else
    {
        ui->comboBoxRole->setCurrentIndex(0);
    }
    ui->pushButtonNet->hide();
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_pushButtonRegister_clicked()
{
    if (runtime.startDBManager())
    {
        UserDialog dlg("", USER_DIALOG::CREATE, this);
        dlg.exec();
    }
}

void LoginDialog::on_pushButtonLogin_clicked()
{
    QString id = ui->lineEditID->text().trimmed();
    if (id.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请输入账号");
        return;
    }

    QString password = ui->lineEditPassword->text().trimmed();
    if (password.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请输入密码");
        return;
    }

    if (runtime.startDBManager())
    {
        switch (ui->comboBoxRole->currentIndex())
        {
        case 0:
            loginUser("user", id, password);
            break;
        case 1:
            loginAdmin("admin", id, password);
            break;
        }
    }
}

void LoginDialog::on_pushButtonNet_clicked()
{

}

void LoginDialog::loginUser(const QString &table, const QString &id, const QString &password)
{
    QSqlQuery query = runtime.getDBManager().query();
    QString sql = QString("SELECT id, name, status FROM %1 WHERE id = '%2' AND password = '%3'")
                      .arg(table)
                      .arg(id)
                      .arg(password);

    if (query.exec(sql))
    {
        if (query.next())
        {
            if (query.value(2).toString() == "正常")
            {
                runtime.setContext(id, query.value(1).toString(), ROLE::USER);
                accept();
            }
            else
            {
                QMessageBox::warning(this, "验证失败", "该账号状态不允许登录，请联系管理员处理。");
            }
        }
        else
        {
            QMessageBox::warning(this, "验证失败", "账号或密码错误");
        }
    }
    else
    {
        QMessageBox::warning(this, "提示", query.lastError().text());
    }
}

void LoginDialog::loginAdmin(const QString &table, const QString &id, const QString &password)
{
    QSqlQuery query = runtime.getDBManager().query();
    QString sql = QString("SELECT id FROM %1 WHERE id = '%2' AND password = '%3'")
                      .arg(table)
                      .arg(id)
                      .arg(password);

    if (query.exec(sql))
    {
        if (query.next())
        {
            runtime.setContext(id, "", ROLE::ADMIN);
            accept();
        }
        else
        {
            QMessageBox::warning(this, "验证失败", "账号或密码错误");
        }
    }
    else
    {
        QMessageBox::warning(this, "提示", query.lastError().text());
    }
}
