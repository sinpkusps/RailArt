#ifndef ADMINDIALOG_H
#define ADMINDIALOG_H

#include "runtime.h"
#include <QDialog>

namespace Ui
{
    class AdminDialog;
}

// 管理员信息设置对话框管理类
class AdminDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminDialog(const QString &id, QWidget *parent = nullptr);
    ~AdminDialog();

private slots:
    void on_pushButton_clicked();

private:
    // 下载数据
    void download();
    // 上传数据
    void upload();

private:
    Ui::AdminDialog *ui;
    QString m_id;
};

#endif // ADMINDIALOG_H
