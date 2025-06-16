#include "userdialog.h"
#include "ui_userdialog.h"
#include "rechargedialog.h"
#include <QMessageBox>
#include <QDate>
#include <QSqlError>
#include <QDebug>

UserDialog::UserDialog(const QString &id, USER_DIALOG mode, QWidget *parent) : QDialog(parent),
                                                                               ui(new Ui::UserDialog),
                                                                               m_id(id),
                                                                               m_mode(mode)
{
    ui->setupUi(this);
    ui->pushButton->setFocus();
    ui->pushButton->setDefault(true);

    QStringList statuslist;
    statuslist << "正常"
               << "锁定";
    ui->comboBoxStatus->addItems(statuslist);

    QStringList sexlist;
    sexlist << "男"
            << "女";
    ui->comboBoxSex->addItems(sexlist);

    QStringList occupationlist;
    occupationlist << "乘客";
    ui->comboBoxOccupation->addItems(occupationlist);

    // 开启日期下拉框选项
    ui->dateEditBirthday->setCalendarPopup(true);
    ui->dateEditBirthday->setDate(QDate::currentDate());
    ui->lineEditBalance->setReadOnly(true);
    switch (mode)
    {
    case USER_DIALOG::CREATE:
        ui->pushButton->setText("注册");
        ui->pushButtonRecharge->setVisible(false);
        ui->lineEditBalance->setVisible(false);
        ui->labelBalance->setVisible(false);
        break;
    case USER_DIALOG::MODIFY:
        download();
        if (runtime.getContext()->role == ROLE::USER)
        {
            ui->comboBoxStatus->setEnabled(false);
            ui->comboBoxOccupation->setEnabled(false);
        }
        ui->lineEditID->setReadOnly(true);
        ui->pushButton->setText("更新");
        break;
    case USER_DIALOG::READONLY:
        download();
        ui->lineEditID->setReadOnly(true);
        ui->lineEditName->setReadOnly(true);
        ui->lineEditPhone->setReadOnly(true);
        ui->comboBoxOccupation->setEnabled(false);
        ui->comboBoxSex->setEnabled(false);
        ui->comboBoxStatus->setEnabled(false);
        ui->dateEditBirthday->setEnabled(false);
        ui->lineEditPassword->setVisible(false);
        ui->labelPassword->setVisible(false);
        ui->pushButton->setVisible(false);
        break;
    }
}

UserDialog::~UserDialog()
{
    delete ui;
}

void UserDialog::on_pushButtonRecharge_clicked()
{
    RechargeDialog dlg(m_id, this);
    if (dlg.exec() == QDialog::Accepted)
    {
        download();
    }
}

void UserDialog::on_pushButton_clicked()
{
    upload();
}

void UserDialog::download()
{
    if (!m_id.isEmpty())
    {
        QSqlQuery query = runtime.getDBManager().query();
        if (query.exec(Runtime::selectUserSQL(m_id)))
        {
            if (query.next())
            {
                ui->lineEditID->setText(query.value(0).toString());
                ui->lineEditPassword->setText(query.value(1).toString());
                ui->comboBoxStatus->setCurrentText(query.value(2).toString());
                ui->lineEditName->setText(query.value(3).toString());
                ui->dateEditBirthday->setDate(query.value(4).toDate());
                ui->lineEditPhone->setText(query.value(5).toString());
                ui->comboBoxSex->setCurrentText(query.value(7).toString());
                ui->comboBoxOccupation->setCurrentText(query.value(8).toString());
                ui->lineEditBalance->setText(query.value(9).toString());
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

void UserDialog::upload()
{
    QString password = ui->lineEditPassword->text().trimmed();
    QString status = ui->comboBoxStatus->currentText();
    QString name = ui->lineEditName->text().trimmed();
    QString birthday = ui->dateEditBirthday->date().toString("yyyy-MM-dd");
    QString phone = ui->lineEditPhone->text().trimmed();
    QString sex = ui->comboBoxSex->currentText();
    QString occupation = ui->comboBoxOccupation->currentText().trimmed();

    if (password.isEmpty())
    {
        QMessageBox::warning(this, "错误提示", "请填写密码！");
        return;
    }

    if (name.isEmpty())
    {
        QMessageBox::warning(this, "错误提示", "请填写姓名！");
        return;
    }

    if (phone.isEmpty())
    {
        QMessageBox::warning(this, "错误提示", "请填写电话！");
        return;
    }



    if (m_mode == USER_DIALOG::CREATE)
    {
        m_id = ui->lineEditID->text().trimmed();
        QSqlQuery query = runtime.getDBManager().query();
        if (query.exec(Runtime::insertUserSQL(m_id, password, status, name, birthday, phone, "idcard", sex, occupation)))
        {
            QMessageBox::information(this, "提示", "注册成功");
            accept();
        }
        else
        {
            qDebug() << query.lastError().text();
            QMessageBox::warning(this, "提示", "注册失败");
        }
    }
    else
    {
        m_id = ui->lineEditID->text().trimmed();
        QSqlQuery query = runtime.getDBManager().query();
        if (query.exec(Runtime::updateUserSQL(m_id, password, status, name, birthday, phone, "23012310001102113", sex, occupation)))
        {
            QMessageBox::information(this, "提示", "更新成功");
            accept();
        }
        else
        {
            QMessageBox::warning(this, "提示", "更新失败");
        }
    }
}
