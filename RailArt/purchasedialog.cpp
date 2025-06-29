#include "purchasedialog.h"
#include "ui_purchasedialog.h"
#include <QMessageBox>
#include <QSqlError>

PurchaseDialog::PurchaseDialog(const QString &id, QWidget *parent) : QDialog(parent),
                                                                     ui(new Ui::PurchaseDialog),
                                                                     m_id(id)
{
    ui->setupUi(this);
    ui->spinBoxResidue->setRange(0, 10000);
    download();
}

PurchaseDialog::~PurchaseDialog()
{
    delete ui;
}

void PurchaseDialog::download()
{
    QSqlQuery query = runtime.getDBManager().query();
    if (query.exec(Runtime::selectGoodsSQL(m_id)))
    {
        if (query.next())
        {
            ui->lineEditID->setText(query.value(0).toString());
            ui->lineEditName->setText(query.value(1).toString());
            ui->lineEditStartCity->setText(query.value(3).toString());
            ui->lineEditEndCity->setText(query.value(4).toString());
            ui->lineEditPrice->setText(query.value(6).toString());
            int residue = query.value(7).toInt() - query.value(8).toInt();
            ui->spinBoxResidue->setValue(residue);
            ui->spinBoxQuantity->setMaximum(residue);
            if (residue <= 0)
            {
                ui->pushButton->setEnabled(false);
            }
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

void PurchaseDialog::on_pushButton_clicked()
{
    int residue = ui->spinBoxResidue->value();
    int quantity = ui->spinBoxQuantity->value();
    if (quantity > 0 && quantity <= residue)
    {
        QString message;
        runtime.cartGoods(runtime.getContext()->id, m_id, quantity, message);
        QMessageBox::warning(this, "提示", message);
        accept();
    }
    else
    {
        QMessageBox::warning(this, "提示", "请输入购票数量");
    }
}
