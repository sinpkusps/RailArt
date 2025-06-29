#ifndef NETCONFIGDIALOG_H
#define NETCONFIGDIALOG_H

#include "runtime.h"
#include <QDialog>

namespace Ui
{
    class ConfigDialog;
}

// 配置信息对话框管理类
class ConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ConfigDialog(QWidget *parent = nullptr);
    ~ConfigDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButtonInitDatabase_clicked();

private:
    Ui::ConfigDialog *ui;
};

#endif // NETCONFIGDIALOG_H
