#ifndef PURCHASEDIALOG_H
#define PURCHASEDIALOG_H

#include <QDialog>
#include "runtime.h"

namespace Ui
{
    class PurchaseDialog;
}

// 购票车次对话框管理类
class PurchaseDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PurchaseDialog(const QString &id, QWidget *parent = nullptr);
    ~PurchaseDialog();

private slots:
    void on_pushButton_clicked();

private:
    // 下载数据
    void download();

private:
    QString m_id;

private:
    Ui::PurchaseDialog *ui;
};

#endif // PURCHASEDIALOG_H
