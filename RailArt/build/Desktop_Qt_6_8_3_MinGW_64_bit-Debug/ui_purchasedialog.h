/********************************************************************************
** Form generated from reading UI file 'purchasedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURCHASEDIALOG_H
#define UI_PURCHASEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_PurchaseDialog
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QSpinBox *spinBoxQuantity;
    QLabel *label;
    QSpinBox *spinBoxResidue;
    QLabel *label_4;
    QLineEdit *lineEditPrice;
    QLineEdit *lineEditStartCity;
    QLineEdit *lineEditID;
    QLabel *label_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEditName;
    QPushButton *pushButton;
    QLabel *label_3;
    QLineEdit *lineEditEndCity;
    QLabel *label_6;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *PurchaseDialog)
    {
        if (PurchaseDialog->objectName().isEmpty())
            PurchaseDialog->setObjectName("PurchaseDialog");
        PurchaseDialog->resize(240, 280);
        gridLayout_2 = new QGridLayout(PurchaseDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(6, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        spinBoxQuantity = new QSpinBox(PurchaseDialog);
        spinBoxQuantity->setObjectName("spinBoxQuantity");

        gridLayout->addWidget(spinBoxQuantity, 6, 1, 1, 1);

        label = new QLabel(PurchaseDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoxResidue = new QSpinBox(PurchaseDialog);
        spinBoxResidue->setObjectName("spinBoxResidue");
        spinBoxResidue->setReadOnly(true);

        gridLayout->addWidget(spinBoxResidue, 5, 1, 1, 1);

        label_4 = new QLabel(PurchaseDialog);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        lineEditPrice = new QLineEdit(PurchaseDialog);
        lineEditPrice->setObjectName("lineEditPrice");
        lineEditPrice->setReadOnly(true);

        gridLayout->addWidget(lineEditPrice, 4, 1, 1, 2);

        lineEditStartCity = new QLineEdit(PurchaseDialog);
        lineEditStartCity->setObjectName("lineEditStartCity");
        lineEditStartCity->setReadOnly(true);

        gridLayout->addWidget(lineEditStartCity, 2, 1, 1, 1);

        lineEditID = new QLineEdit(PurchaseDialog);
        lineEditID->setObjectName("lineEditID");
        lineEditID->setReadOnly(true);

        gridLayout->addWidget(lineEditID, 0, 1, 1, 2);

        label_5 = new QLabel(PurchaseDialog);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        label_2 = new QLabel(PurchaseDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 7, 0, 1, 1);

        lineEditName = new QLineEdit(PurchaseDialog);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setReadOnly(true);

        gridLayout->addWidget(lineEditName, 1, 1, 1, 2);

        pushButton = new QPushButton(PurchaseDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(80, 40));

        gridLayout->addWidget(pushButton, 7, 1, 1, 2);

        label_3 = new QLabel(PurchaseDialog);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        lineEditEndCity = new QLineEdit(PurchaseDialog);
        lineEditEndCity->setObjectName("lineEditEndCity");
        lineEditEndCity->setReadOnly(true);

        gridLayout->addWidget(lineEditEndCity, 3, 1, 1, 1);

        label_6 = new QLabel(PurchaseDialog);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_7 = new QLabel(PurchaseDialog);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 3, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(7, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 1, 1, 1);

        QWidget::setTabOrder(lineEditID, lineEditName);
        QWidget::setTabOrder(lineEditName, lineEditStartCity);
        QWidget::setTabOrder(lineEditStartCity, lineEditEndCity);
        QWidget::setTabOrder(lineEditEndCity, lineEditPrice);
        QWidget::setTabOrder(lineEditPrice, spinBoxResidue);
        QWidget::setTabOrder(spinBoxResidue, spinBoxQuantity);
        QWidget::setTabOrder(spinBoxQuantity, pushButton);

        retranslateUi(PurchaseDialog);

        QMetaObject::connectSlotsByName(PurchaseDialog);
    } // setupUi

    void retranslateUi(QDialog *PurchaseDialog)
    {
        PurchaseDialog->setWindowTitle(QCoreApplication::translate("PurchaseDialog", "\350\264\255\347\245\250", nullptr));
        label->setText(QCoreApplication::translate("PurchaseDialog", "\350\275\246\346\254\241\347\274\226\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("PurchaseDialog", "\350\264\255\347\245\250\346\225\260\351\207\217", nullptr));
        label_5->setText(QCoreApplication::translate("PurchaseDialog", "\344\275\231\347\245\250\346\225\260\351\207\217", nullptr));
        label_2->setText(QCoreApplication::translate("PurchaseDialog", "\350\275\246\346\254\241\345\220\215\347\247\260", nullptr));
        pushButton->setText(QCoreApplication::translate("PurchaseDialog", "\345\212\240\345\205\245\345\276\205\346\224\257\344\273\230\350\256\242\345\215\225", nullptr));
        label_3->setText(QCoreApplication::translate("PurchaseDialog", "\350\275\246\346\254\241\347\245\250\344\273\267", nullptr));
        label_6->setText(QCoreApplication::translate("PurchaseDialog", "\350\265\267\347\202\271\345\237\216\345\270\202", nullptr));
        label_7->setText(QCoreApplication::translate("PurchaseDialog", "\347\273\210\347\202\271\345\237\216\345\270\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PurchaseDialog: public Ui_PurchaseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASEDIALOG_H
