#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include "runtime.h"
#include <QDialog>

namespace Ui
{
    class LoginDialog;
}

// 登录对话框管理类
class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

private slots:
    // 注册按钮被点击
    void on_pushButtonRegister_clicked();
    // 登录按钮被点击
    void on_pushButtonLogin_clicked();
    // 设置按钮被点击
    void on_pushButtonNet_clicked();

private:
    void loginUser(const QString &table, const QString &id, const QString &password);
    void loginAdmin(const QString &table, const QString &id, const QString &password);

private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
