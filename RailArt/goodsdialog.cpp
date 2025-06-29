#include "goodsdialog.h"
#include "ui_goodsdialog.h"
#include <QSqlError>
#include <QMessageBox>
#include <QFileDialog>
#include <QBuffer>
#include <QImage>
#include <QPixmap>
#include <QtDebug>

GoodsDialog::GoodsDialog(const QString &id, GOODS_DIALOG mode, QWidget *parent) : QDialog(parent),
                                                                                  m_id(id),
                                                                                  ui(new Ui::GoodsDialog),
                                                                                  m_mode(mode)
{
    ui->setupUi(this);
    ui->dateTimeEditStart->setCalendarPopup(true);
    ui->dateTimeEditStart->setDateTime(QDateTime::currentDateTime());
    ui->dateTimeEditEnd->setCalendarPopup(true);
    ui->dateTimeEditEnd->setDateTime(QDateTime::currentDateTime());
    ui->spinBoxCount->setRange(1, 1000);
    ui->doubleSpinBoxPrice->setRange(0, 10000);
    ui->textEditMessage->setReadOnly(true);

    switch (mode)
    {
    case GOODS_DIALOG::CREATE:
        ui->lineEditID->setReadOnly(true);
        ui->lineEditOwnerID->setReadOnly(true);
        ui->pushButtonCommit->setText("添加");
        ui->lineEditOwnerID->setText(runtime.getContext()->id);
        ui->tabWidget->removeTab(1);
        break;
    case GOODS_DIALOG::MODIFY:
        download();
        ui->lineEditID->setReadOnly(true);
        ui->pushButtonCommit->setText("更新");
        break;
    case GOODS_DIALOG::READONLY:
        download();
        ui->lineEditID->setReadOnly(true);
        ui->lineEditName->setReadOnly(true);
        ui->lineEditOwnerID->setReadOnly(true);
        ui->lineEditStartCity->setReadOnly(true);
        ui->lineEditEndCity->setReadOnly(true);
        ui->dateTimeEditStart->setReadOnly(true);
        ui->dateTimeEditEnd->setReadOnly(true);
        ui->doubleSpinBoxPrice->setReadOnly(true);
        ui->spinBoxCount->setReadOnly(true);
        ui->pushButtonCommit->setVisible(false);
        ui->pushButtonImage->setVisible(false);
        break;
    }
}

GoodsDialog::~GoodsDialog()
{
    delete ui;
}

void GoodsDialog::on_pushButtonCommit_clicked()
{
    upload();
}

void GoodsDialog::on_pushButtonImage_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("打开图片"), "./", tr("Image Files (*.png *.jpg *.bmp)"));
    if (!fileName.isEmpty())
    {
        QImage image;
        image.load(fileName);
        QImage result = image.scaled(ui->labelImg->width(), ui->labelImg->height(),
                                     Qt::KeepAspectRatio, Qt::SmoothTransformation);
        ui->labelImg->setPixmap(QPixmap::fromImage(result));
        m_imagefile = fileName;
    }
}

void GoodsDialog::download()
{
    QSqlQuery query = runtime.getDBManager().query();
    if (query.exec(Runtime::selectGoodsSQL(m_id)))
    {
        if (query.next())
        {
            ui->lineEditID->setText(query.value(0).toString());
            ui->lineEditName->setText(query.value(1).toString());
            ui->lineEditOwnerID->setText(query.value(2).toString());
            ui->lineEditStartCity->setText(query.value(3).toString());
            ui->lineEditEndCity->setText(query.value(4).toString());
            ui->dateTimeEditStart->setDateTime(QDateTime::fromString(query.value(5).toString(), "yyyy-MM-dd hh:mm:ss"));
            ui->dateTimeEditEnd->setDateTime(QDateTime::fromString(query.value(6).toString(), "yyyy-MM-dd hh:mm:ss"));
            ui->doubleSpinBoxPrice->setValue(query.value(7).toDouble());
            ui->spinBoxCount->setValue(query.value(8).toInt());
            QPixmap pixmap;
            pixmap.loadFromData(query.value(10).toByteArray(), "PNG");
            ui->labelImg->setPixmap(pixmap);
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

void GoodsDialog::upload()
{
    QString name = ui->lineEditName->text().trimmed();
    if (name.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请填写车次名称");
        return;
    }

    QString owner_id = ui->lineEditOwnerID->text().trimmed();
    if (owner_id.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请填写发布者账号");
        return;
    }

    QString start_city = ui->lineEditStartCity->text().trimmed();
    if (start_city.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请填写起点城市");
        return;
    }

    QString end_city = ui->lineEditEndCity->text().trimmed();
    if (end_city.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请填写终点城市");
        return;
    }

    if (ui->doubleSpinBoxPrice->value() == 0)
    {
        QMessageBox::warning(this, "提示", "请填写车次票价");
        return;
    }

    QString start_date = ui->dateTimeEditStart->dateTime().toString("yyyy-MM-dd hh:mm:ss");
    QString end_date = ui->dateTimeEditEnd->dateTime().toString("yyyy-MM-dd hh:mm:ss");

    if (m_mode == GOODS_DIALOG::CREATE)
    {

        QImage image;
        image.load(m_imagefile);
        image = image.scaled(ui->labelImg->width(), ui->labelImg->height(),
                             Qt::KeepAspectRatio, Qt::SmoothTransformation);

        QPixmap pixmap = QPixmap::fromImage(image);
        QByteArray bytes;
        QBuffer buffer(&bytes);
        buffer.open(QIODevice::WriteOnly);
        pixmap.save(&buffer, "PNG");
        QVariant imageData(bytes);

        QSqlQuery query = runtime.getDBManager().query();
        query.prepare(Runtime::insertGoodsSQL(runtime.generateID("goods", 4, "G"), name, owner_id, start_city, end_city, start_date, end_date, ui->doubleSpinBoxPrice->value(), ui->spinBoxCount->value()));
        query.addBindValue(imageData);
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
        if (!m_imagefile.isEmpty())
        {
            QImage image;
            image.load(m_imagefile);
            QImage result = image.scaled(ui->labelImg->width(), ui->labelImg->height(),
                                         Qt::KeepAspectRatio, Qt::SmoothTransformation);

            QPixmap pixmap = QPixmap::fromImage(result);
            QByteArray bytes;
            QBuffer buffer(&bytes);
            buffer.open(QIODevice::WriteOnly);
            pixmap.save(&buffer, "PNG");
            QVariant imageData(bytes);

            QString sql = QString("UPDATE goods SET img = ? WHERE id = '%1'")
                              .arg(m_id);

            QSqlQuery query = runtime.getDBManager().query();

            query.prepare(sql);
            query.addBindValue(imageData);
            if (!query.exec())
            {
                QMessageBox::warning(this, "提示", "图标更新失败！");
            }
        }

        QSqlQuery query = runtime.getDBManager().query();
        if (query.exec(Runtime::updateGoodsSQL(m_id, name, owner_id, start_city, end_city, start_date, end_date, ui->doubleSpinBoxPrice->value(), ui->spinBoxCount->value())))
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

void GoodsDialog::updateMessageList()
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

void GoodsDialog::on_pushButtonMessage_clicked()
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

void GoodsDialog::on_tabWidget_currentChanged(int index)
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
