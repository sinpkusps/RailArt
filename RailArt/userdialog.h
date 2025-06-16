#ifndef USERDIALOG_H
#define USERDIALOG_H

#include "runtime.h"
#include <QDialog>

namespace Ui
{
    class UserDialog;
}

enum class USER_DIALOG
{
    CREATE,
    MODIFY,
    READONLY
};

// 用户信息对话框管理类
class UserDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UserDialog(const QString &id, USER_DIALOG mode, QWidget *parent = nullptr);
    ~UserDialog();

private slots:
    void on_pushButtonRecharge_clicked();
    void on_pushButton_clicked();

private:
    // 下载数据
    void download();
    // 上传数据
    void upload();

private:
    Ui::UserDialog *ui;
    QString m_id;
    USER_DIALOG m_mode;
};

#endif // USERDIALOG_H
