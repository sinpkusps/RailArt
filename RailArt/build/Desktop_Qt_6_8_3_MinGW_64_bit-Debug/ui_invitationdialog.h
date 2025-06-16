/********************************************************************************
** Form generated from reading UI file 'invitationdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVITATIONDIALOG_H
#define UI_INVITATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InvitationDialog
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tabInvitation;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QTextEdit *textEditSummary;
    QLabel *label_4;
    QLabel *label_2;
    QComboBox *comboBoxStatus;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_6;
    QLabel *label;
    QPushButton *pushButtonCommit;
    QLabel *label_5;
    QLineEdit *lineEditID;
    QLineEdit *lineEditName;
    QLineEdit *lineEditOwnerID;
    QWidget *tabForum;
    QGridLayout *gridLayout_3;
    QTextEdit *textEditMessage;
    QLineEdit *lineEditMessage;
    QPushButton *pushButtonMessage;

    void setupUi(QDialog *InvitationDialog)
    {
        if (InvitationDialog->objectName().isEmpty())
            InvitationDialog->setObjectName("InvitationDialog");
        InvitationDialog->resize(421, 546);
        InvitationDialog->setStyleSheet(QString::fromUtf8("#InvitationDialog\n"
"{\n"
"  border-image:url(\"://bg.jpg\");\n"
"}\n"
"\n"
"#labelImg\n"
"{\n"
"  background-color: rgba(0, 0, 0, 40%);\n"
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
        gridLayout = new QGridLayout(InvitationDialog);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(InvitationDialog);
        tabWidget->setObjectName("tabWidget");
        tabInvitation = new QWidget();
        tabInvitation->setObjectName("tabInvitation");
        gridLayout_2 = new QGridLayout(tabInvitation);
        gridLayout_2->setObjectName("gridLayout_2");
        label_3 = new QLabel(tabInvitation);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        textEditSummary = new QTextEdit(tabInvitation);
        textEditSummary->setObjectName("textEditSummary");

        gridLayout_2->addWidget(textEditSummary, 7, 1, 1, 4);

        label_4 = new QLabel(tabInvitation);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        label_2 = new QLabel(tabInvitation);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(label_2, 7, 0, 1, 1);

        comboBoxStatus = new QComboBox(tabInvitation);
        comboBoxStatus->setObjectName("comboBoxStatus");

        gridLayout_2->addWidget(comboBoxStatus, 3, 3, 1, 1);

        dateTimeEdit = new QDateTimeEdit(tabInvitation);
        dateTimeEdit->setObjectName("dateTimeEdit");

        gridLayout_2->addWidget(dateTimeEdit, 3, 1, 1, 1);

        label_6 = new QLabel(tabInvitation);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(label_6, 3, 0, 1, 1);

        label = new QLabel(tabInvitation);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 30));
        label->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        pushButtonCommit = new QPushButton(tabInvitation);
        pushButtonCommit->setObjectName("pushButtonCommit");
        pushButtonCommit->setMinimumSize(QSize(80, 40));
        pushButtonCommit->setMaximumSize(QSize(80, 40));

        gridLayout_2->addWidget(pushButtonCommit, 8, 4, 1, 1);

        label_5 = new QLabel(tabInvitation);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 3, 2, 1, 1);

        lineEditID = new QLineEdit(tabInvitation);
        lineEditID->setObjectName("lineEditID");
        lineEditID->setMinimumSize(QSize(250, 30));

        gridLayout_2->addWidget(lineEditID, 0, 1, 1, 4);

        lineEditName = new QLineEdit(tabInvitation);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setMinimumSize(QSize(160, 30));

        gridLayout_2->addWidget(lineEditName, 1, 1, 1, 4);

        lineEditOwnerID = new QLineEdit(tabInvitation);
        lineEditOwnerID->setObjectName("lineEditOwnerID");
        lineEditOwnerID->setMinimumSize(QSize(160, 30));

        gridLayout_2->addWidget(lineEditOwnerID, 2, 1, 1, 4);

        tabWidget->addTab(tabInvitation, QString());
        tabForum = new QWidget();
        tabForum->setObjectName("tabForum");
        gridLayout_3 = new QGridLayout(tabForum);
        gridLayout_3->setObjectName("gridLayout_3");
        textEditMessage = new QTextEdit(tabForum);
        textEditMessage->setObjectName("textEditMessage");

        gridLayout_3->addWidget(textEditMessage, 0, 0, 1, 2);

        lineEditMessage = new QLineEdit(tabForum);
        lineEditMessage->setObjectName("lineEditMessage");

        gridLayout_3->addWidget(lineEditMessage, 1, 0, 1, 1);

        pushButtonMessage = new QPushButton(tabForum);
        pushButtonMessage->setObjectName("pushButtonMessage");
        pushButtonMessage->setMinimumSize(QSize(80, 40));

        gridLayout_3->addWidget(pushButtonMessage, 1, 1, 1, 1);

        tabWidget->addTab(tabForum, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        QWidget::setTabOrder(lineEditID, lineEditName);
        QWidget::setTabOrder(lineEditName, lineEditOwnerID);
        QWidget::setTabOrder(lineEditOwnerID, dateTimeEdit);
        QWidget::setTabOrder(dateTimeEdit, comboBoxStatus);
        QWidget::setTabOrder(comboBoxStatus, textEditSummary);
        QWidget::setTabOrder(textEditSummary, pushButtonCommit);
        QWidget::setTabOrder(pushButtonCommit, textEditMessage);
        QWidget::setTabOrder(textEditMessage, tabWidget);
        QWidget::setTabOrder(tabWidget, pushButtonMessage);
        QWidget::setTabOrder(pushButtonMessage, lineEditMessage);

        retranslateUi(InvitationDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(InvitationDialog);
    } // setupUi

    void retranslateUi(QDialog *InvitationDialog)
    {
        InvitationDialog->setWindowTitle(QCoreApplication::translate("InvitationDialog", "\345\217\215\351\246\210\344\277\241\346\201\257", nullptr));
        label_3->setText(QCoreApplication::translate("InvitationDialog", "\346\240\207\351\242\230", nullptr));
        label_4->setText(QCoreApplication::translate("InvitationDialog", "\345\217\221\345\270\203\350\200\205\350\264\246\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("InvitationDialog", "\345\206\205\345\256\271", nullptr));
        label_6->setText(QCoreApplication::translate("InvitationDialog", " \346\227\245\346\234\237", nullptr));
        label->setText(QCoreApplication::translate("InvitationDialog", "\345\217\215\351\246\210\347\231\273\350\256\260\345\217\267", nullptr));
        pushButtonCommit->setText(QCoreApplication::translate("InvitationDialog", "\347\241\256\345\256\232", nullptr));
        label_5->setText(QCoreApplication::translate("InvitationDialog", "\347\212\266\346\200\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabInvitation), QCoreApplication::translate("InvitationDialog", "\345\217\215\351\246\210\344\277\241\346\201\257", nullptr));
        pushButtonMessage->setText(QCoreApplication::translate("InvitationDialog", "\345\217\221\345\270\203", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabForum), QCoreApplication::translate("InvitationDialog", "\350\257\204\350\256\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InvitationDialog: public Ui_InvitationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVITATIONDIALOG_H
