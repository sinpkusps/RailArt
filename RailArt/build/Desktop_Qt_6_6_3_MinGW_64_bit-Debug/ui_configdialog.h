/********************************************************************************
** Form generated from reading UI file 'configdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGDIALOG_H
#define UI_CONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ConfigDialog
{
public:
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *lineEditAppName;
    QLabel *label_7;
    QLineEdit *lineEditStyle;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonInitDatabase;
    QLineEdit *lineEditDBName;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEditDBUserID;
    QLabel *label_8;
    QLabel *label_5;
    QLineEdit *lineEditDBUserPassword;
    QLabel *label;
    QLineEdit *lineEditIP;
    QLabel *label_2;
    QLineEdit *lineEditPort;
    QLabel *label_6;
    QLabel *label_4;
    QComboBox *comboBoxDBDriver;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *ConfigDialog)
    {
        if (ConfigDialog->objectName().isEmpty())
            ConfigDialog->setObjectName("ConfigDialog");
        ConfigDialog->resize(292, 468);
        gridLayout_4 = new QGridLayout(ConfigDialog);
        gridLayout_4->setObjectName("gridLayout_4");
        verticalSpacer = new QSpacerItem(20, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(4, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        groupBox = new QGroupBox(ConfigDialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        lineEditAppName = new QLineEdit(groupBox);
        lineEditAppName->setObjectName("lineEditAppName");
        lineEditAppName->setMinimumSize(QSize(160, 30));

        gridLayout->addWidget(lineEditAppName, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        lineEditStyle = new QLineEdit(groupBox);
        lineEditStyle->setObjectName("lineEditStyle");
        lineEditStyle->setMinimumSize(QSize(160, 30));

        gridLayout->addWidget(lineEditStyle, 1, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 2);

        groupBox_2 = new QGroupBox(ConfigDialog);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        pushButtonInitDatabase = new QPushButton(groupBox_2);
        pushButtonInitDatabase->setObjectName("pushButtonInitDatabase");
        pushButtonInitDatabase->setMinimumSize(QSize(80, 30));

        gridLayout_2->addWidget(pushButtonInitDatabase, 0, 2, 1, 1);

        lineEditDBName = new QLineEdit(groupBox_2);
        lineEditDBName->setObjectName("lineEditDBName");
        lineEditDBName->setMinimumSize(QSize(160, 30));

        gridLayout_2->addWidget(lineEditDBName, 5, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(118, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 2);

        lineEditDBUserID = new QLineEdit(groupBox_2);
        lineEditDBUserID->setObjectName("lineEditDBUserID");
        lineEditDBUserID->setMinimumSize(QSize(160, 30));

        gridLayout_2->addWidget(lineEditDBUserID, 6, 1, 1, 2);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 5, 0, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 6, 0, 1, 1);

        lineEditDBUserPassword = new QLineEdit(groupBox_2);
        lineEditDBUserPassword->setObjectName("lineEditDBUserPassword");
        lineEditDBUserPassword->setMinimumSize(QSize(160, 30));
        lineEditDBUserPassword->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(lineEditDBUserPassword, 7, 1, 1, 2);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 3, 0, 1, 1);

        lineEditIP = new QLineEdit(groupBox_2);
        lineEditIP->setObjectName("lineEditIP");
        lineEditIP->setMinimumSize(QSize(160, 30));

        gridLayout_2->addWidget(lineEditIP, 3, 1, 1, 2);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 4, 0, 1, 1);

        lineEditPort = new QLineEdit(groupBox_2);
        lineEditPort->setObjectName("lineEditPort");
        lineEditPort->setMinimumSize(QSize(160, 30));

        gridLayout_2->addWidget(lineEditPort, 4, 1, 1, 2);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 7, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        comboBoxDBDriver = new QComboBox(groupBox_2);
        comboBoxDBDriver->setObjectName("comboBoxDBDriver");
        comboBoxDBDriver->setMinimumSize(QSize(0, 30));
        comboBoxDBDriver->setEditable(true);

        gridLayout_2->addWidget(comboBoxDBDriver, 1, 1, 1, 2);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(148, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        pushButton = new QPushButton(ConfigDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(80, 30));

        gridLayout_3->addWidget(pushButton, 2, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(4, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 2, 1, 1, 1);

        QWidget::setTabOrder(lineEditAppName, lineEditStyle);
        QWidget::setTabOrder(lineEditStyle, pushButtonInitDatabase);
        QWidget::setTabOrder(pushButtonInitDatabase, comboBoxDBDriver);
        QWidget::setTabOrder(comboBoxDBDriver, lineEditIP);
        QWidget::setTabOrder(lineEditIP, lineEditPort);
        QWidget::setTabOrder(lineEditPort, lineEditDBName);
        QWidget::setTabOrder(lineEditDBName, lineEditDBUserID);
        QWidget::setTabOrder(lineEditDBUserID, lineEditDBUserPassword);
        QWidget::setTabOrder(lineEditDBUserPassword, pushButton);

        retranslateUi(ConfigDialog);

        QMetaObject::connectSlotsByName(ConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigDialog)
    {
        ConfigDialog->setWindowTitle(QCoreApplication::translate("ConfigDialog", "\350\256\276\347\275\256", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ConfigDialog", "\345\272\224\347\224\250\347\250\213\345\272\217\350\256\276\347\275\256", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigDialog", "\345\272\224\347\224\250\345\220\215\347\247\260", nullptr));
        label_7->setText(QCoreApplication::translate("ConfigDialog", "\347\225\214\351\235\242\351\243\216\346\240\274", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ConfigDialog", "\346\225\260\346\215\256\345\272\223\350\256\276\347\275\256", nullptr));
        pushButtonInitDatabase->setText(QCoreApplication::translate("ConfigDialog", "\345\210\235\345\247\213\345\214\226\346\225\260\346\215\256\345\272\223", nullptr));
        label_8->setText(QCoreApplication::translate("ConfigDialog", "\346\225\260\346\215\256\345\272\223\345\220\215\347\247\260", nullptr));
        label_5->setText(QCoreApplication::translate("ConfigDialog", "\346\225\260\346\215\256\345\272\223\350\264\246\345\217\267", nullptr));
        label->setText(QCoreApplication::translate("ConfigDialog", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200", nullptr));
        label_2->setText(QCoreApplication::translate("ConfigDialog", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243", nullptr));
        label_6->setText(QCoreApplication::translate("ConfigDialog", "\346\225\260\346\215\256\345\272\223\345\257\206\347\240\201", nullptr));
        label_4->setText(QCoreApplication::translate("ConfigDialog", "\346\225\260\346\215\256\345\272\223\351\251\261\345\212\250", nullptr));
        pushButton->setText(QCoreApplication::translate("ConfigDialog", "\346\233\264\346\226\260\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigDialog: public Ui_ConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGDIALOG_H
