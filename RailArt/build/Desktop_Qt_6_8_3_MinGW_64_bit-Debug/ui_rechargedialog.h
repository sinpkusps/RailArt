/********************************************************************************
** Form generated from reading UI file 'rechargedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECHARGEDIALOG_H
#define UI_RECHARGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_RechargeDialog
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *labelQR;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *RechargeDialog)
    {
        if (RechargeDialog->objectName().isEmpty())
            RechargeDialog->setObjectName("RechargeDialog");
        RechargeDialog->resize(242, 316);
        gridLayout_2 = new QGridLayout(RechargeDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(2, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        labelQR = new QLabel(RechargeDialog);
        labelQR->setObjectName("labelQR");
        labelQR->setMinimumSize(QSize(200, 200));
        labelQR->setStyleSheet(QString::fromUtf8("border-image:url(:/resources/QR.jpg) 0 0 0 0 stretch stretch;"));

        gridLayout->addWidget(labelQR, 0, 0, 1, 3);

        label = new QLabel(RechargeDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(RechargeDialog);
        doubleSpinBox->setObjectName("doubleSpinBox");

        gridLayout->addWidget(doubleSpinBox, 1, 1, 1, 2);

        pushButton = new QPushButton(RechargeDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(80, 40));

        gridLayout->addWidget(pushButton, 2, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(2, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 3, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 2, 1, 1);

        QWidget::setTabOrder(doubleSpinBox, pushButton);

        retranslateUi(RechargeDialog);

        QMetaObject::connectSlotsByName(RechargeDialog);
    } // setupUi

    void retranslateUi(QDialog *RechargeDialog)
    {
        RechargeDialog->setWindowTitle(QCoreApplication::translate("RechargeDialog", "\345\205\205\345\200\274", nullptr));
        labelQR->setText(QString());
        label->setText(QCoreApplication::translate("RechargeDialog", "\345\205\205\345\200\274\351\207\221\351\242\235", nullptr));
        pushButton->setText(QCoreApplication::translate("RechargeDialog", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RechargeDialog: public Ui_RechargeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECHARGEDIALOG_H
