/********************************************************************************
** Form generated from reading UI file 'goodsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOODSDIALOG_H
#define UI_GOODSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GoodsDialog
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tabGoods;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *lineEditStartCity;
    QLineEdit *lineEditName;
    QLabel *label_8;
    QLineEdit *lineEditEndCity;
    QGroupBox *groupBox;
    QLabel *labelImg;
    QPushButton *pushButtonImage;
    QLabel *label_7;
    QLabel *label_3;
    QDateTimeEdit *dateTimeEditStart;
    QLineEdit *lineEditOwnerID;
    QPushButton *pushButtonCommit;
    QDoubleSpinBox *doubleSpinBoxPrice;
    QLabel *label_5;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *spinBoxCount;
    QLabel *label_4;
    QLabel *label_9;
    QLineEdit *lineEditID;
    QDateTimeEdit *dateTimeEditEnd;
    QLabel *label_2;
    QWidget *tabForum;
    QGridLayout *gridLayout_3;
    QTextEdit *textEditMessage;
    QLineEdit *lineEditMessage;
    QPushButton *pushButtonMessage;

    void setupUi(QDialog *GoodsDialog)
    {
        if (GoodsDialog->objectName().isEmpty())
            GoodsDialog->setObjectName("GoodsDialog");
        GoodsDialog->resize(535, 451);
        GoodsDialog->setStyleSheet(QString::fromUtf8("#GoodsDialog\n"
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
        gridLayout = new QGridLayout(GoodsDialog);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(GoodsDialog);
        tabWidget->setObjectName("tabWidget");
        tabGoods = new QWidget();
        tabGoods->setObjectName("tabGoods");
        gridLayout_2 = new QGridLayout(tabGoods);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(tabGoods);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 30));
        label->setMaximumSize(QSize(80, 16777215));

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        lineEditStartCity = new QLineEdit(tabGoods);
        lineEditStartCity->setObjectName("lineEditStartCity");
        lineEditStartCity->setMinimumSize(QSize(160, 30));

        gridLayout_2->addWidget(lineEditStartCity, 3, 2, 1, 2);

        lineEditName = new QLineEdit(tabGoods);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setMinimumSize(QSize(160, 30));

        gridLayout_2->addWidget(lineEditName, 1, 2, 1, 2);

        label_8 = new QLabel(tabGoods);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(label_8, 3, 1, 1, 1);

        lineEditEndCity = new QLineEdit(tabGoods);
        lineEditEndCity->setObjectName("lineEditEndCity");
        lineEditEndCity->setMinimumSize(QSize(160, 30));

        gridLayout_2->addWidget(lineEditEndCity, 4, 2, 1, 2);

        groupBox = new QGroupBox(tabGoods);
        groupBox->setObjectName("groupBox");
        groupBox->setMinimumSize(QSize(220, 0));
        labelImg = new QLabel(groupBox);
        labelImg->setObjectName("labelImg");
        labelImg->setGeometry(QRect(10, 22, 200, 300));
        labelImg->setMinimumSize(QSize(200, 300));
        labelImg->setMaximumSize(QSize(400, 600));
        QFont font;
        font.setBold(false);
        font.setKerning(true);
        labelImg->setFont(font);
        labelImg->setFrameShape(QFrame::Shape::Box);
        labelImg->setFrameShadow(QFrame::Shadow::Raised);
        pushButtonImage = new QPushButton(groupBox);
        pushButtonImage->setObjectName("pushButtonImage");
        pushButtonImage->setGeometry(QRect(10, 328, 80, 40));
        pushButtonImage->setMinimumSize(QSize(80, 40));
        pushButtonImage->setMaximumSize(QSize(80, 40));

        gridLayout_2->addWidget(groupBox, 0, 0, 10, 1);

        label_7 = new QLabel(tabGoods);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(label_7, 7, 1, 1, 1);

        label_3 = new QLabel(tabGoods);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(label_3, 1, 1, 1, 1);

        dateTimeEditStart = new QDateTimeEdit(tabGoods);
        dateTimeEditStart->setObjectName("dateTimeEditStart");

        gridLayout_2->addWidget(dateTimeEditStart, 5, 2, 1, 2);

        lineEditOwnerID = new QLineEdit(tabGoods);
        lineEditOwnerID->setObjectName("lineEditOwnerID");
        lineEditOwnerID->setMinimumSize(QSize(160, 30));

        gridLayout_2->addWidget(lineEditOwnerID, 2, 2, 1, 2);

        pushButtonCommit = new QPushButton(tabGoods);
        pushButtonCommit->setObjectName("pushButtonCommit");
        pushButtonCommit->setMinimumSize(QSize(80, 40));
        pushButtonCommit->setMaximumSize(QSize(80, 40));

        gridLayout_2->addWidget(pushButtonCommit, 9, 3, 1, 1);

        doubleSpinBoxPrice = new QDoubleSpinBox(tabGoods);
        doubleSpinBoxPrice->setObjectName("doubleSpinBoxPrice");

        gridLayout_2->addWidget(doubleSpinBoxPrice, 7, 2, 1, 1);

        label_5 = new QLabel(tabGoods);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(label_5, 8, 1, 1, 1);

        label_6 = new QLabel(tabGoods);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(label_6, 5, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(147, 37, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 9, 1, 1, 2);

        spinBoxCount = new QSpinBox(tabGoods);
        spinBoxCount->setObjectName("spinBoxCount");

        gridLayout_2->addWidget(spinBoxCount, 8, 2, 1, 1);

        label_4 = new QLabel(tabGoods);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(label_4, 2, 1, 1, 1);

        label_9 = new QLabel(tabGoods);
        label_9->setObjectName("label_9");
        label_9->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(label_9, 4, 1, 1, 1);

        lineEditID = new QLineEdit(tabGoods);
        lineEditID->setObjectName("lineEditID");
        lineEditID->setMinimumSize(QSize(160, 30));

        gridLayout_2->addWidget(lineEditID, 0, 2, 1, 2);

        dateTimeEditEnd = new QDateTimeEdit(tabGoods);
        dateTimeEditEnd->setObjectName("dateTimeEditEnd");

        gridLayout_2->addWidget(dateTimeEditEnd, 6, 2, 1, 2);

        label_2 = new QLabel(tabGoods);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 6, 1, 1, 1);

        tabWidget->addTab(tabGoods, QString());
        lineEditID->raise();
        label->raise();
        lineEditStartCity->raise();
        lineEditName->raise();
        label_8->raise();
        lineEditEndCity->raise();
        groupBox->raise();
        label_7->raise();
        label_3->raise();
        dateTimeEditStart->raise();
        lineEditOwnerID->raise();
        pushButtonCommit->raise();
        doubleSpinBoxPrice->raise();
        label_5->raise();
        label_6->raise();
        spinBoxCount->raise();
        label_4->raise();
        label_9->raise();
        dateTimeEditEnd->raise();
        label_2->raise();
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

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        QWidget::setTabOrder(pushButtonImage, lineEditID);
        QWidget::setTabOrder(lineEditID, lineEditName);
        QWidget::setTabOrder(lineEditName, lineEditOwnerID);
        QWidget::setTabOrder(lineEditOwnerID, lineEditStartCity);
        QWidget::setTabOrder(lineEditStartCity, lineEditEndCity);
        QWidget::setTabOrder(lineEditEndCity, dateTimeEditStart);
        QWidget::setTabOrder(dateTimeEditStart, dateTimeEditEnd);
        QWidget::setTabOrder(dateTimeEditEnd, doubleSpinBoxPrice);
        QWidget::setTabOrder(doubleSpinBoxPrice, spinBoxCount);
        QWidget::setTabOrder(spinBoxCount, pushButtonCommit);
        QWidget::setTabOrder(pushButtonCommit, textEditMessage);
        QWidget::setTabOrder(textEditMessage, lineEditMessage);
        QWidget::setTabOrder(lineEditMessage, pushButtonMessage);
        QWidget::setTabOrder(pushButtonMessage, tabWidget);

        retranslateUi(GoodsDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GoodsDialog);
    } // setupUi

    void retranslateUi(QDialog *GoodsDialog)
    {
        GoodsDialog->setWindowTitle(QCoreApplication::translate("GoodsDialog", "\350\275\246\346\254\241\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("GoodsDialog", "\350\275\246\346\254\241\345\272\217\345\210\227\345\217\267", nullptr));
        label_8->setText(QCoreApplication::translate("GoodsDialog", "\350\265\267\347\202\271\345\237\216\345\270\202", nullptr));
        lineEditEndCity->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("GoodsDialog", "\345\233\276\347\211\207", nullptr));
        labelImg->setText(QString());
        pushButtonImage->setText(QCoreApplication::translate("GoodsDialog", "\344\270\212\344\274\240\345\233\276\347\211\207", nullptr));
        label_7->setText(QCoreApplication::translate("GoodsDialog", "\347\245\250\344\273\267", nullptr));
        label_3->setText(QCoreApplication::translate("GoodsDialog", "\350\275\246\346\254\241\345\220\215\347\247\260", nullptr));
        pushButtonCommit->setText(QCoreApplication::translate("GoodsDialog", "\347\241\256\345\256\232", nullptr));
        label_5->setText(QCoreApplication::translate("GoodsDialog", "\346\200\273\347\245\250\346\225\260", nullptr));
        label_6->setText(QCoreApplication::translate("GoodsDialog", "\345\217\221\350\275\246\346\227\266\351\227\264", nullptr));
        label_4->setText(QCoreApplication::translate("GoodsDialog", "\345\217\221\345\270\203\350\200\205\350\264\246\345\217\267", nullptr));
        label_9->setText(QCoreApplication::translate("GoodsDialog", "\347\273\210\347\202\271\345\237\216\345\270\202", nullptr));
        label_2->setText(QCoreApplication::translate("GoodsDialog", "\345\210\260\350\276\276\346\227\266\351\227\264", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabGoods), QCoreApplication::translate("GoodsDialog", "\350\275\246\346\254\241\344\277\241\346\201\257", nullptr));
        pushButtonMessage->setText(QCoreApplication::translate("GoodsDialog", "\345\217\221\345\270\203", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabForum), QCoreApplication::translate("GoodsDialog", "\350\257\204\350\256\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GoodsDialog: public Ui_GoodsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOODSDIALOG_H
