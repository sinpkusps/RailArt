#ifndef RECHARGEDIALOG_H
#define RECHARGEDIALOG_H

#include "runtime.h"
#include <QDialog>

namespace Ui
{
    class RechargeDialog;
}

// 充值对话框管理类
class RechargeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RechargeDialog(const QString &id, QWidget *parent = nullptr);
    ~RechargeDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::RechargeDialog *ui;
    QString m_id;
};

#endif // RECHARGEDIALOG_H
