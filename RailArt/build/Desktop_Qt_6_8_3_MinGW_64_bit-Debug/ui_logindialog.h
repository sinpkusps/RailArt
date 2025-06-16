/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QComboBox *comboBoxRole;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *lineEditPassword;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *lineEditID;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonRegister;
    QPushButton *pushButtonLogin;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonNet;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->resize(508, 317);
        LoginDialog->setStyleSheet(QString::fromUtf8("#LoginDialog\n"
"{\n"
"  border-image:url(\"://bg.jpg\");\n"
"}\n"
"\n"
"QLineEdit\n"
"{  \n"
"   background-color: rgba(255, 255, 224, 50%);\n"
"}\n"
"\n"
"QComboBox\n"
"{  \n"
"   background-color: rgba(255, 255, 224, 50%);\n"
"}"));
        gridLayout_3 = new QGridLayout(LoginDialog);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalSpacer_3 = new QSpacerItem(52, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        comboBoxRole = new QComboBox(LoginDialog);
        comboBoxRole->setObjectName("comboBoxRole");
        comboBoxRole->setMinimumSize(QSize(200, 30));

        gridLayout->addWidget(comboBoxRole, 1, 1, 1, 1);

        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(40, 30));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(40, 30));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        lineEditPassword = new QLineEdit(LoginDialog);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setMinimumSize(QSize(200, 30));
        lineEditPassword->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(lineEditPassword, 3, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        label = new QLabel(LoginDialog);
        label->setObjectName("label");
        label->setMinimumSize(QSize(40, 30));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        lineEditID = new QLineEdit(LoginDialog);
        lineEditID->setObjectName("lineEditID");
        lineEditID->setMinimumSize(QSize(200, 30));

        gridLayout->addWidget(lineEditID, 2, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 4);

        horizontalSpacer_2 = new QSpacerItem(58, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        pushButtonRegister = new QPushButton(LoginDialog);
        pushButtonRegister->setObjectName("pushButtonRegister");
        pushButtonRegister->setMinimumSize(QSize(80, 40));

        gridLayout_2->addWidget(pushButtonRegister, 1, 2, 1, 1);

        pushButtonLogin = new QPushButton(LoginDialog);
        pushButtonLogin->setObjectName("pushButtonLogin");
        pushButtonLogin->setMinimumSize(QSize(80, 40));

        gridLayout_2->addWidget(pushButtonLogin, 1, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 39, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 39, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(67, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        pushButtonNet = new QPushButton(LoginDialog);
        pushButtonNet->setObjectName("pushButtonNet");
        pushButtonNet->setMaximumSize(QSize(70, 20));

        gridLayout_3->addWidget(pushButtonNet, 0, 2, 1, 1);

        QWidget::setTabOrder(comboBoxRole, lineEditID);
        QWidget::setTabOrder(lineEditID, lineEditPassword);
        QWidget::setTabOrder(lineEditPassword, pushButtonRegister);
        QWidget::setTabOrder(pushButtonRegister, pushButtonLogin);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        label_3->setText(QCoreApplication::translate("LoginDialog", "\350\272\253\344\273\275", nullptr));
        label_2->setText(QCoreApplication::translate("LoginDialog", "\345\257\206\347\240\201", nullptr));
        label->setText(QCoreApplication::translate("LoginDialog", "\350\264\246\345\217\267", nullptr));
        pushButtonRegister->setText(QCoreApplication::translate("LoginDialog", "\346\263\250\345\206\214", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        pushButtonNet->setText(QCoreApplication::translate("LoginDialog", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
