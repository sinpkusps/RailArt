#include "rechargedialog.h"
#include "ui_rechargedialog.h"
#include <QMessageBox>

RechargeDialog::RechargeDialog(const QString &id, QWidget *parent) : QDialog(parent),
                                                  ui(new Ui::RechargeDialog),
                                                  m_id(id)
{
    ui->setupUi(this);
    ui->doubleSpinBox->setRange(1, 10000);
}

RechargeDialog::~RechargeDialog()
{
    delete ui;
}

void RechargeDialog::on_pushButton_clicked()
{
    if (runtime.rechargeUser(m_id, ui->doubleSpinBox->value()))
    {
        QMessageBox::information(this, "提示", "充值成功");
    }
    else
    {
        QMessageBox::information(this, "提示", "充值失败");
    }
    accept();
}
