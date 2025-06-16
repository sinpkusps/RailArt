/********************************************************************************
** Form generated from reading UI file 'admindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDIALOG_H
#define UI_ADMINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AdminDialog
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditID;
    QLabel *label_2;
    QLineEdit *lineEditPassword;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *AdminDialog)
    {
        if (AdminDialog->objectName().isEmpty())
            AdminDialog->setObjectName("AdminDialog");
        AdminDialog->resize(182, 144);
        gridLayout_2 = new QGridLayout(AdminDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(AdminDialog);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditID = new QLineEdit(AdminDialog);
        lineEditID->setObjectName("lineEditID");
        lineEditID->setMinimumSize(QSize(120, 30));

        gridLayout->addWidget(lineEditID, 0, 1, 1, 2);

        label_2 = new QLabel(AdminDialog);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEditPassword = new QLineEdit(AdminDialog);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setMinimumSize(QSize(120, 30));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditPassword, 1, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 2);

        pushButton = new QPushButton(AdminDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(80, 40));

        gridLayout->addWidget(pushButton, 2, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 1, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 1, 1, 1);


        retranslateUi(AdminDialog);

        QMetaObject::connectSlotsByName(AdminDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminDialog)
    {
        AdminDialog->setWindowTitle(QCoreApplication::translate("AdminDialog", "\347\256\241\347\220\206\345\221\230\350\264\246\346\210\267", nullptr));
        label->setText(QCoreApplication::translate("AdminDialog", "\350\264\246\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("AdminDialog", "\345\257\206\347\240\201", nullptr));
        lineEditPassword->setText(QString());
        pushButton->setText(QCoreApplication::translate("AdminDialog", "\346\233\264\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminDialog: public Ui_AdminDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDIALOG_H
