#include "logindialog.h"
#include "adminwindow.h"
#include "userwindow.h"
#include "runtime.h"
#include <QApplication>
#include <QFile>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    AdminWindow *admin = nullptr;
    UserWindow *user = nullptr;
    QApplication app(argc, argv);
    runtime.init();
    while (true)
    {
        QFile qss(runtime.getConfig().ui_style);
        if (!qss.open(QFile::ReadOnly))
        {
            QMessageBox::critical(nullptr, "错误提示", "未能成功加载qss");
        }
        app.setStyleSheet(qss.readAll());
        LoginDialog login;
        if (login.exec() != QDialog::Accepted)
            break;
        switch (runtime.getContext()->role)
        {
        case ROLE::ADMIN:
            admin = new AdminWindow();
            admin->show();
            break;
        case ROLE::USER:
            user = new UserWindow();
            user->show();
            break;
        }
        app.exec();
        if (admin)
        {
            delete admin;
            admin = nullptr;
        }
        if (user)
        {
            delete user;
            user = nullptr;
        }
    }
    return 0;
}
