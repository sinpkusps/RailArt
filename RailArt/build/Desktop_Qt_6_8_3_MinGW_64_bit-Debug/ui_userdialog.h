/********************************************************************************
** Form generated from reading UI file 'userdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDIALOG_H
#define UI_USERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_UserDialog
{
public:
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEditPassword;
    QLineEdit *lineEditID;
    QLabel *labelName;
    QLabel *labelID;
    QLineEdit *lineEditName;
    QLabel *labelPassword;
    QComboBox *comboBoxStatus;
    QLabel *label;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_4;
    QPushButton *pushButtonRecharge;
    QComboBox *comboBoxSex;
    QPushButton *pushButton;
    QDateEdit *dateEditBirthday;
    QLabel *label_8;
    QLabel *label_4;
    QLineEdit *lineEditPhone;
    QComboBox *comboBoxOccupation;
    QLabel *label_5;
    QLabel *labelBalance;
    QLabel *label_9;
    QLineEdit *lineEditBalance;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *UserDialog)
    {
        if (UserDialog->objectName().isEmpty())
            UserDialog->setObjectName("UserDialog");
        UserDialog->resize(399, 533);
        gridLayout_6 = new QGridLayout(UserDialog);
        gridLayout_6->setObjectName("gridLayout_6");
        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_6->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        groupBox = new QGroupBox(UserDialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        lineEditPassword = new QLineEdit(groupBox);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setMinimumSize(QSize(160, 30));
        lineEditPassword->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout_3->addWidget(lineEditPassword, 2, 1, 1, 1);

        lineEditID = new QLineEdit(groupBox);
        lineEditID->setObjectName("lineEditID");
        lineEditID->setMinimumSize(QSize(160, 30));

        gridLayout_3->addWidget(lineEditID, 0, 1, 1, 1);

        labelName = new QLabel(groupBox);
        labelName->setObjectName("labelName");
        labelName->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(labelName, 1, 0, 1, 1);

        labelID = new QLabel(groupBox);
        labelID->setObjectName("labelID");
        labelID->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(labelID, 0, 0, 1, 1);

        lineEditName = new QLineEdit(groupBox);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setMinimumSize(QSize(160, 30));

        gridLayout_3->addWidget(lineEditName, 1, 1, 1, 1);

        labelPassword = new QLabel(groupBox);
        labelPassword->setObjectName("labelPassword");
        labelPassword->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(labelPassword, 2, 0, 1, 1);

        comboBoxStatus = new QComboBox(groupBox);
        comboBoxStatus->setObjectName("comboBoxStatus");

        gridLayout_3->addWidget(comboBoxStatus, 3, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout_3->addWidget(label, 3, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(UserDialog);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        pushButtonRecharge = new QPushButton(groupBox_2);
        pushButtonRecharge->setObjectName("pushButtonRecharge");

        gridLayout_4->addWidget(pushButtonRecharge, 4, 3, 1, 2);

        comboBoxSex = new QComboBox(groupBox_2);
        comboBoxSex->setObjectName("comboBoxSex");

        gridLayout_4->addWidget(comboBoxSex, 1, 2, 1, 1);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(60, 40));

        gridLayout_4->addWidget(pushButton, 5, 2, 1, 3);

        dateEditBirthday = new QDateEdit(groupBox_2);
        dateEditBirthday->setObjectName("dateEditBirthday");

        gridLayout_4->addWidget(dateEditBirthday, 0, 2, 1, 3);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(0, 30));

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(0, 30));

        gridLayout_4->addWidget(label_4, 2, 0, 1, 1);

        lineEditPhone = new QLineEdit(groupBox_2);
        lineEditPhone->setObjectName("lineEditPhone");
        lineEditPhone->setMinimumSize(QSize(160, 30));

        gridLayout_4->addWidget(lineEditPhone, 2, 2, 1, 3);

        comboBoxOccupation = new QComboBox(groupBox_2);
        comboBoxOccupation->setObjectName("comboBoxOccupation");

        gridLayout_4->addWidget(comboBoxOccupation, 3, 1, 1, 2);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(0, 30));

        gridLayout_4->addWidget(label_5, 3, 0, 1, 1);

        labelBalance = new QLabel(groupBox_2);
        labelBalance->setObjectName("labelBalance");
        labelBalance->setMinimumSize(QSize(0, 30));

        gridLayout_4->addWidget(labelBalance, 4, 0, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName("label_9");
        label_9->setMinimumSize(QSize(0, 30));

        gridLayout_4->addWidget(label_9, 1, 0, 1, 1);

        lineEditBalance = new QLineEdit(groupBox_2);
        lineEditBalance->setObjectName("lineEditBalance");
        lineEditBalance->setMinimumSize(QSize(0, 30));

        gridLayout_4->addWidget(lineEditBalance, 4, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 5, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(1, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 2, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 2, 1, 1, 1);

        QWidget::setTabOrder(lineEditID, lineEditName);
        QWidget::setTabOrder(lineEditName, lineEditPassword);
        QWidget::setTabOrder(lineEditPassword, comboBoxStatus);
        QWidget::setTabOrder(comboBoxStatus, dateEditBirthday);
        QWidget::setTabOrder(dateEditBirthday, comboBoxSex);
        QWidget::setTabOrder(comboBoxSex, lineEditPhone);
        QWidget::setTabOrder(lineEditPhone, comboBoxOccupation);
        QWidget::setTabOrder(comboBoxOccupation, lineEditBalance);
        QWidget::setTabOrder(lineEditBalance, pushButtonRecharge);
        QWidget::setTabOrder(pushButtonRecharge, pushButton);

        retranslateUi(UserDialog);

        QMetaObject::connectSlotsByName(UserDialog);
    } // setupUi

    void retranslateUi(QDialog *UserDialog)
    {
        UserDialog->setWindowTitle(QCoreApplication::translate("UserDialog", "\350\264\246\346\210\267\344\277\241\346\201\257", nullptr));
        groupBox->setTitle(QCoreApplication::translate("UserDialog", "\345\237\272\346\234\254\344\277\241\346\201\257", nullptr));
        labelName->setText(QCoreApplication::translate("UserDialog", "\345\247\223\345\220\215", nullptr));
        labelID->setText(QCoreApplication::translate("UserDialog", "\350\264\246\345\217\267", nullptr));
        labelPassword->setText(QCoreApplication::translate("UserDialog", "\345\257\206\347\240\201", nullptr));
        label->setText(QCoreApplication::translate("UserDialog", "\347\212\266\346\200\201", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("UserDialog", "\345\205\266\344\273\226\344\277\241\346\201\257", nullptr));
        pushButtonRecharge->setText(QCoreApplication::translate("UserDialog", "\345\205\205\345\200\274", nullptr));
        pushButton->setText(QCoreApplication::translate("UserDialog", "\346\263\250\345\206\214", nullptr));
        label_8->setText(QCoreApplication::translate("UserDialog", "\347\224\237\346\227\245", nullptr));
        label_4->setText(QCoreApplication::translate("UserDialog", "\347\224\265\350\257\235", nullptr));
        label_5->setText(QCoreApplication::translate("UserDialog", "\350\272\253\344\273\275", nullptr));
        labelBalance->setText(QCoreApplication::translate("UserDialog", "\344\275\231\351\242\235", nullptr));
        label_9->setText(QCoreApplication::translate("UserDialog", "\346\200\247\345\210\253", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserDialog: public Ui_UserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDIALOG_H
