/********************************************************************************
** Form generated from reading UI file 'recordationdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDATIONDIALOG_H
#define UI_RECORDATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_RecordationDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditID;
    QLabel *label_5;
    QLineEdit *lineEditStatus;
    QLabel *label_4;
    QLineEdit *lineEditMoney;
    QLabel *label_3;
    QLineEdit *lineEditUserName;
    QLabel *label_2;
    QLineEdit *lineEditUserID;
    QLabel *label_6;
    QLineEdit *lineEditStartTime;
    QLabel *label_7;
    QLineEdit *lineEditEndTime;
    QPushButton *recshoucang;
    QSpacerItem *horizontalSpacer;
    QTableView *tableViewItem;

    void setupUi(QDialog *RecordationDialog)
    {
        if (RecordationDialog->objectName().isEmpty())
            RecordationDialog->setObjectName("RecordationDialog");
        RecordationDialog->resize(1022, 620);
        gridLayout_2 = new QGridLayout(RecordationDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(RecordationDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 2, 1);

        lineEditID = new QLineEdit(RecordationDialog);
        lineEditID->setObjectName("lineEditID");
        lineEditID->setReadOnly(true);

        gridLayout->addWidget(lineEditID, 0, 1, 2, 1);

        label_5 = new QLabel(RecordationDialog);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        lineEditStatus = new QLineEdit(RecordationDialog);
        lineEditStatus->setObjectName("lineEditStatus");
        lineEditStatus->setReadOnly(true);

        gridLayout->addWidget(lineEditStatus, 0, 3, 1, 2);

        label_4 = new QLabel(RecordationDialog);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 5, 1, 1);

        lineEditMoney = new QLineEdit(RecordationDialog);
        lineEditMoney->setObjectName("lineEditMoney");
        lineEditMoney->setReadOnly(true);

        gridLayout->addWidget(lineEditMoney, 0, 6, 1, 1);

        label_3 = new QLabel(RecordationDialog);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 2, 2, 1);

        lineEditUserName = new QLineEdit(RecordationDialog);
        lineEditUserName->setObjectName("lineEditUserName");
        lineEditUserName->setReadOnly(true);

        gridLayout->addWidget(lineEditUserName, 1, 3, 2, 2);

        label_2 = new QLabel(RecordationDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lineEditUserID = new QLineEdit(RecordationDialog);
        lineEditUserID->setObjectName("lineEditUserID");
        lineEditUserID->setReadOnly(true);

        gridLayout->addWidget(lineEditUserID, 2, 1, 1, 1);

        label_6 = new QLabel(RecordationDialog);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        lineEditStartTime = new QLineEdit(RecordationDialog);
        lineEditStartTime->setObjectName("lineEditStartTime");
        lineEditStartTime->setReadOnly(true);

        gridLayout->addWidget(lineEditStartTime, 3, 1, 1, 1);

        label_7 = new QLabel(RecordationDialog);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 3, 2, 1, 2);

        lineEditEndTime = new QLineEdit(RecordationDialog);
        lineEditEndTime->setObjectName("lineEditEndTime");
        lineEditEndTime->setReadOnly(true);

        gridLayout->addWidget(lineEditEndTime, 3, 4, 1, 2);

        recshoucang = new QPushButton(RecordationDialog);
        recshoucang->setObjectName("recshoucang");

        gridLayout->addWidget(recshoucang, 3, 6, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(424, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        tableViewItem = new QTableView(RecordationDialog);
        tableViewItem->setObjectName("tableViewItem");
        tableViewItem->setMinimumSize(QSize(1000, 300));

        gridLayout_2->addWidget(tableViewItem, 1, 0, 1, 2);

        QWidget::setTabOrder(lineEditID, lineEditStatus);
        QWidget::setTabOrder(lineEditStatus, lineEditMoney);
        QWidget::setTabOrder(lineEditMoney, lineEditUserID);
        QWidget::setTabOrder(lineEditUserID, lineEditUserName);
        QWidget::setTabOrder(lineEditUserName, lineEditStartTime);
        QWidget::setTabOrder(lineEditStartTime, tableViewItem);

        retranslateUi(RecordationDialog);

        QMetaObject::connectSlotsByName(RecordationDialog);
    } // setupUi

    void retranslateUi(QDialog *RecordationDialog)
    {
        RecordationDialog->setWindowTitle(QCoreApplication::translate("RecordationDialog", "\350\256\242\345\215\225\350\257\246\346\203\205", nullptr));
        label->setText(QCoreApplication::translate("RecordationDialog", "\346\265\201\346\260\264\345\217\267", nullptr));
        label_5->setText(QCoreApplication::translate("RecordationDialog", "\347\212\266\346\200\201", nullptr));
        label_4->setText(QCoreApplication::translate("RecordationDialog", "\346\266\210\350\264\271\351\207\221\351\242\235", nullptr));
        label_3->setText(QCoreApplication::translate("RecordationDialog", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("RecordationDialog", "\350\264\246\345\217\267", nullptr));
        label_6->setText(QCoreApplication::translate("RecordationDialog", "\350\264\255\347\245\250\346\227\266\351\227\264", nullptr));
        label_7->setText(QCoreApplication::translate("RecordationDialog", "\351\200\200\347\245\250\346\227\266\351\227\264", nullptr));
        recshoucang->setText(QCoreApplication::translate("RecordationDialog", "\346\224\266\350\227\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecordationDialog: public Ui_RecordationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDATIONDIALOG_H
