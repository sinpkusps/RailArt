#include "invitationdialog.h"
#include "ui_invitationdialog.h"
#include <QSqlError>
#include <QMessageBox>
#include <QFileDialog>
#include <QBuffer>
#include <QImage>
#include <QPixmap>
#include <QtDebug>

InvitationDialog::InvitationDialog(const QString &id, INVITATION_DIALOG mode, QWidget *parent) : QDialog(parent),
                                                                                                 m_id(id),
                                                                                                 ui(new Ui::InvitationDialog),
                                                                                                 m_mode(mode)
{
    ui->setupUi(this);
    ui->dateTimeEdit->setCalendarPopup(true);
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    ui->dateTimeEdit->setEnabled(false);
    ui->textEditMessage->setReadOnly(true);

    QStringList statuslist;
    statuslist << "未处理"
               << "已处理";
    ui->comboBoxStatus->addItems(statuslist);

    if (runtime.getContext()->role == ROLE::USER)
    {
        ui->comboBoxStatus->setEnabled(false);
    }

    switch (mode)
    {
    case INVITATION_DIALOG::CREATE:
        ui->lineEditID->setReadOnly(true);
        ui->lineEditOwnerID->setReadOnly(true);
        ui->pushButtonCommit->setText("上报");
        ui->lineEditOwnerID->setText(runtime.getContext()->id);
        ui->tabWidget->removeTab(1);
        break;
    case INVITATION_DIALOG::MODIFY:
        download();
        ui->lineEditID->setReadOnly(true);
        ui->lineEditOwnerID->setReadOnly(true);
        ui->pushButtonCommit->setText("更新");
        break;
    case INVITATION_DIALOG::READONLY:
        download();
        ui->lineEditID->setReadOnly(true);
        ui->lineEditName->setReadOnly(true);
        ui->lineEditOwnerID->setReadOnly(true);
        ui->textEditSummary->setReadOnly(true);
        ui->pushButtonCommit->setVisible(false);
        ui->comboBoxStatus->setEnabled(false);
        break;
    }
}

InvitationDialog::~InvitationDialog()
{
    delete ui;
}

void InvitationDialog::on_pushButtonCommit_clicked()
{
    upload();
}

void InvitationDialog::download()
{
    QSqlQuery query = runtime.getDBManager().query();
    if (query.exec(Runtime::selectInvitationSQL(m_id)))
    {
        if (query.next())
        {
            ui->lineEditID->setText(query.value(0).toString());
            ui->lineEditName->setText(query.value(1).toString());
            ui->lineEditOwnerID->setText(query.value(2).toString());
            ui->textEditSummary->setPlainText(query.value(3).toString());
            ui->dateTimeEdit->setDateTime(QDateTime::fromString(query.value(4).toString(), "yyyy-MM-dd^hh:mm:ss"));
            ui->comboBoxStatus->setCurrentText(query.value(5).toString());
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

void InvitationDialog::upload()
{
    QString name = ui->lineEditName->text().trimmed();
    if (name.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请填写标题");
        return;
    }

    QString owner_id = ui->lineEditOwnerID->text().trimmed();
    if (owner_id.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请填写发布者账号");
        return;
    }

    QString summary = ui->textEditSummary->toPlainText().trimmed();
    if (summary.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请填写反馈内容");
        return;
    }

    QString date = ui->dateTimeEdit->dateTime().toString("yyyy-MM-dd^hh:mm:ss");

    if (m_mode == INVITATION_DIALOG::CREATE)
    {
        QSqlQuery query = runtime.getDBManager().query();
        query.prepare(Runtime::insertInvitationSQL(runtime.generateID("invitation", 4, "I"), name, owner_id, summary, date, ui->comboBoxStatus->currentText()));
        if (query.exec())
        {
            QMessageBox::information(this, "提示", "提交成功");
            accept();
        }
        else
        {
            qDebug() << query.lastError().text();
            QMessageBox::warning(this, "提示", "提交失败");
        }
    }
    else
    {
        QSqlQuery query = runtime.getDBManager().query();
        if (query.exec(Runtime::updateInvitationSQL(m_id, name, owner_id, summary, date, ui->comboBoxStatus->currentText())))
        {
            QMessageBox::information(this, "提示", "提交成功");
            accept();
        }
        else
        {
            qDebug() << query.lastError().text();
            QMessageBox::warning(this, "提示", "提交失败");
        }
    }
}

void InvitationDialog::updateMessageList()
{
    ui->textEditMessage->clear();
    QSqlQuery query = runtime.getDBManager().query();
    if (query.exec(Runtime::selectForumSQL(m_id)))
    {
        while (query.next())
        {
            QString html = QString("<p style='color:gray;'><b>%2</b>(<u>%1</u>)<i>%4</i></p><p>%3</p><br>")
                               .arg(query.value(0).toString())
                               .arg(query.value(1).toString())
                               .arg(query.value(2).toString())
                               .arg(query.value(3).toString());
            ui->textEditMessage->insertHtml(html);
        }
    }
    else
    {
        qDebug() << query.lastError().text();
        QMessageBox::warning(this, "提示", "获取信息失败");
    }
}

void InvitationDialog::on_pushButtonMessage_clicked()
{
    QString message = ui->lineEditMessage->text().trimmed();
    if (message.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请输入内容");
        return;
    }

    if (runtime.sendMessage(runtime.getContext()->id, m_id, message))
    {
        QMessageBox::information(this, "提示", "发布成功");
        ui->lineEditMessage->clear();
        updateMessageList();
    }
    else
    {
        QMessageBox::information(this, "提示", "发布失败");
    }
}

void InvitationDialog::on_tabWidget_currentChanged(int index)
{
    switch (index)
    {
    case 0:
        break;
    case 1:
        updateMessageList();
        break;
    }
}
