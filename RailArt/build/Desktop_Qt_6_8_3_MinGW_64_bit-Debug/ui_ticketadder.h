/********************************************************************************
** Form generated from reading UI file 'ticketadder.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKETADDER_H
#define UI_TICKETADDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TicketAdder
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *checihao;
    QLineEdit *TrainNum;
    QLabel *chufazhan;
    QLineEdit *Departure;
    QLabel *daodazhan;
    QLineEdit *Arrival;
    QLabel *facheshijian;
    QDateTimeEdit *setoutTime;
    QLabel *daodashijian;
    QDateTimeEdit *ArrivalTime;
    QLabel *price;
    QLineEdit *Price;
    QLabel *memo;
    QLineEdit *memoText;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TicketAdder)
    {
        if (TicketAdder->objectName().isEmpty())
            TicketAdder->setObjectName("TicketAdder");
        TicketAdder->resize(757, 529);
        TicketAdder->setStyleSheet(QString::fromUtf8("QDialog#TicketAdder {\n"
"border-image: url(:/resources/wk.jpg) 0 0 0 0 stretch stretch;}"));
        formLayoutWidget = new QWidget(TicketAdder);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(70, 70, 561, 412));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        checihao = new QLabel(formLayoutWidget);
        checihao->setObjectName("checihao");
        checihao->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    min-height: 28px;\n"
"    max-height: 28px;\n"
"    min-width: 60px;\n"
"    max-width: 60px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
" \n"
"\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    margin-bottom: 2px;\n"
"    qproperty-alignment: AlignCenter; /* \346\226\207\345\255\227\345\261\205\344\270\255 */\n"
"\n"
"\n"
"}"));

        formLayout->setWidget(0, QFormLayout::LabelRole, checihao);

        TrainNum = new QLineEdit(formLayoutWidget);
        TrainNum->setObjectName("TrainNum");
        TrainNum->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #555;\n"
"    border-radius: 15px;  /* \345\234\206\346\237\261\344\270\244\347\253\257\345\234\206\350\247\222 */\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"    color: #333;\n"
"    selection-background-color: #90CAF9;\n"
"    min-height: 30px;\n"
"}\n"
"#TrainNum {\n"
"       background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                stop:0 #4ECDC4, stop:1 #66D9D2);\n"
"    border-color: #3AAFA5;\n"
"}"));

        formLayout->setWidget(0, QFormLayout::FieldRole, TrainNum);

        chufazhan = new QLabel(formLayoutWidget);
        chufazhan->setObjectName("chufazhan");
        chufazhan->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    min-height: 28px;\n"
"    max-height: 28px;\n"
"    min-width: 60px;\n"
"    max-width: 60px;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
" \n"
"\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    margin-bottom: 2px;\n"
"    qproperty-alignment: AlignCenter; /* \346\226\207\345\255\227\345\261\205\344\270\255 */\n"
"\n"
"\n"
"}"));

        formLayout->setWidget(1, QFormLayout::LabelRole, chufazhan);

        Departure = new QLineEdit(formLayoutWidget);
        Departure->setObjectName("Departure");
        Departure->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #555;\n"
"    border-radius: 15px;  /* \345\234\206\346\237\261\344\270\244\347\253\257\345\234\206\350\247\222 */\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"    color: #333;\n"
"    selection-background-color: #90CAF9;\n"
"    min-height: 30px;\n"
"}\n"
"#Departure {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                stop:0 #FF6B6B, stop:1 #FF8787);\n"
"    border-color: #CC5555;\n"
"}\n"
""));

        formLayout->setWidget(1, QFormLayout::FieldRole, Departure);

        daodazhan = new QLabel(formLayoutWidget);
        daodazhan->setObjectName("daodazhan");
        daodazhan->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    min-height: 28px;\n"
"    max-height: 28px;\n"
"    min-width: 60px;\n"
"    max-width: 60px;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
" \n"
"\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    margin-bottom: 2px;\n"
"    qproperty-alignment: AlignCenter; /* \346\226\207\345\255\227\345\261\205\344\270\255 */\n"
"\n"
"\n"
"}"));

        formLayout->setWidget(2, QFormLayout::LabelRole, daodazhan);

        Arrival = new QLineEdit(formLayoutWidget);
        Arrival->setObjectName("Arrival");
        Arrival->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #555;\n"
"    border-radius: 15px;  /* \345\234\206\346\237\261\344\270\244\347\253\257\345\234\206\350\247\222 */\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"    color: #333;\n"
"    selection-background-color: #90CAF9;\n"
"    min-height: 30px;\n"
"}\n"
"#Arrival {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                stop:0 #45B7D1, stop:1 #5FC3DD);\n"
"    border-color: #3498B5;\n"
"}"));

        formLayout->setWidget(2, QFormLayout::FieldRole, Arrival);

        facheshijian = new QLabel(formLayoutWidget);
        facheshijian->setObjectName("facheshijian");
        facheshijian->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    min-height: 28px;\n"
"    max-height: 28px;\n"
"    min-width: 60px;\n"
"    max-width: 60px;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
" \n"
"\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    margin-bottom: 2px;\n"
"    qproperty-alignment: AlignCenter; /* \346\226\207\345\255\227\345\261\205\344\270\255 */\n"
"\n"
"\n"
"}"));

        formLayout->setWidget(3, QFormLayout::LabelRole, facheshijian);

        setoutTime = new QDateTimeEdit(formLayoutWidget);
        setoutTime->setObjectName("setoutTime");
        setoutTime->setStyleSheet(QString::fromUtf8("QDateTimeEdit {\n"
"    border: 2px solid #555;\n"
"    border-radius: 15px;  /* \345\234\206\346\237\261\344\270\244\347\253\257\345\234\206\350\247\222 */\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"    color: #333;\n"
"    selection-background-color: #90CAF9;\n"
"    min-height: 30px;\n"
"}\n"
"#setoutTime {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                stop:0 #C7B3D2, stop:1 #D5C4DD);\n"
"    border-color: #A895B3;\n"
"}"));

        formLayout->setWidget(3, QFormLayout::FieldRole, setoutTime);

        daodashijian = new QLabel(formLayoutWidget);
        daodashijian->setObjectName("daodashijian");
        daodashijian->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    min-height: 28px;\n"
"    max-height: 28px;\n"
"    min-width: 60px;\n"
"    max-width: 60px;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
" \n"
"\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    margin-bottom: 2px;\n"
"    qproperty-alignment: AlignCenter; /* \346\226\207\345\255\227\345\261\205\344\270\255 */\n"
"\n"
"\n"
"}"));

        formLayout->setWidget(4, QFormLayout::LabelRole, daodashijian);

        ArrivalTime = new QDateTimeEdit(formLayoutWidget);
        ArrivalTime->setObjectName("ArrivalTime");
        ArrivalTime->setStyleSheet(QString::fromUtf8("QDateTimeEdit {\n"
"    border: 2px solid #555;\n"
"    border-radius: 15px;  /* \345\234\206\346\237\261\344\270\244\347\253\257\345\234\206\350\247\222 */\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"    color: #333;\n"
"    selection-background-color: #90CAF9;\n"
"    min-height: 30px;\n"
"}\n"
"#ArrivalTime {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                stop:0 #C7B3D2, stop:1 #D5C4DD);\n"
"    border-color: #A895B3;\n"
"}"));

        formLayout->setWidget(4, QFormLayout::FieldRole, ArrivalTime);

        price = new QLabel(formLayoutWidget);
        price->setObjectName("price");
        price->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    min-height: 28px;\n"
"    max-height: 28px;\n"
"    min-width: 60px;\n"
"    max-width: 60px;\n"
"    font-size: 28px;\n"
"    font-weight: bold;\n"
" \n"
"\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    margin-bottom: 2px;\n"
"    qproperty-alignment: AlignCenter; /* \346\226\207\345\255\227\345\261\205\344\270\255 */\n"
"\n"
"\n"
"}"));

        formLayout->setWidget(5, QFormLayout::LabelRole, price);

        Price = new QLineEdit(formLayoutWidget);
        Price->setObjectName("Price");
        Price->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #555;\n"
"    border-radius: 15px;  /* \345\234\206\346\237\261\344\270\244\347\253\257\345\234\206\350\247\222 */\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"    color: #333;\n"
"    selection-background-color: #90CAF9;\n"
"    min-height: 30px;\n"
"}\n"
"#Price {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                stop:0 #96CEB4, stop:1 #A8DAC5);\n"
"    border-color: #7BBFA1;\n"
"}"));

        formLayout->setWidget(5, QFormLayout::FieldRole, Price);

        memo = new QLabel(formLayoutWidget);
        memo->setObjectName("memo");
        memo->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    min-height: 28px;\n"
"    max-height: 28px;\n"
"    min-width: 60px;\n"
"    max-width: 60px;\n"
"    font-size: 28px;\n"
"    font-weight: bold;\n"
" \n"
"\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    margin-bottom: 2px;\n"
"    qproperty-alignment: AlignCenter; /* \346\226\207\345\255\227\345\261\205\344\270\255 */\n"
"\n"
"\n"
"}"));

        formLayout->setWidget(6, QFormLayout::LabelRole, memo);

        memoText = new QLineEdit(formLayoutWidget);
        memoText->setObjectName("memoText");
        memoText->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #555;\n"
"    border-radius: 15px;  /* \345\234\206\346\237\261\344\270\244\347\253\257\345\234\206\350\247\222 */\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"    color: #333;\n"
"    selection-background-color: #90CAF9;\n"
"    min-height: 30px;\n"
"}\n"
"#memoText {\n"
"  background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                stop:0 #FFD27F, stop:1 #FFDF9E);\n"
"    border-color: #CCAA66;\n"
"}"));

        formLayout->setWidget(6, QFormLayout::FieldRole, memoText);

        buttonBox = new QDialogButtonBox(formLayoutWidget);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-image: url(:/resources/a3.jpg) 0 0 0 0 stretch stretch;\n"
"	font: 25pt \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 0, 127);\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"border-image: url(:/resources/a3.jpg) 0 0 0 0 stretch stretch;\n"
"color: rgb(131, 133, 170);\n"
"	font: 25pt \"Microsoft YaHei UI\";\n"
"	\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"border-image: url(:/resources/a3.jpg) 0 0 0 0 stretch stretch;\n"
"	font: 25pt \"Microsoft YaHei UI\";\n"
"color: rgb(131, 133, 170);\n"
"\n"
"}"));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        formLayout->setWidget(7, QFormLayout::FieldRole, buttonBox);


        retranslateUi(TicketAdder);

        QMetaObject::connectSlotsByName(TicketAdder);
    } // setupUi

    void retranslateUi(QDialog *TicketAdder)
    {
        TicketAdder->setWindowTitle(QCoreApplication::translate("TicketAdder", "Dialog", nullptr));
        checihao->setText(QCoreApplication::translate("TicketAdder", "\350\275\246\346\254\241\345\217\267", nullptr));
        chufazhan->setText(QCoreApplication::translate("TicketAdder", "\345\207\272\345\217\221\347\253\231", nullptr));
        daodazhan->setText(QCoreApplication::translate("TicketAdder", "\345\210\260\350\276\276\347\253\231", nullptr));
        facheshijian->setText(QCoreApplication::translate("TicketAdder", "\345\217\221\350\275\246\346\227\266\351\227\264", nullptr));
        daodashijian->setText(QCoreApplication::translate("TicketAdder", "\345\210\260\350\276\276\346\227\266\351\227\264", nullptr));
        price->setText(QCoreApplication::translate("TicketAdder", "\347\245\250\344\273\267", nullptr));
        memo->setText(QCoreApplication::translate("TicketAdder", "\345\244\207\346\263\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicketAdder: public Ui_TicketAdder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKETADDER_H
