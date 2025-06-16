/********************************************************************************
** Form generated from reading UI file 'ticketgenerator.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKETGENERATOR_H
#define UI_TICKETGENERATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TicketGenerator
{
public:
    QWidget *ticket;
    QTextEdit *shifa;
    QTextEdit *zhongdao;
    QTextEdit *jianpiaokou;
    QTextEdit *price;
    QTextEdit *text;
    QTextEdit *id_and_name;
    QLineEdit *year;
    QLineEdit *month;
    QLineEdit *day;
    QLineEdit *set_out_time;
    QLineEdit *train_index;
    QLineEdit *seat;
    QLineEdit *seat_class;
    QTextEdit *train_number;
    QTextEdit *shifa_English;
    QTextEdit *zhongdao_English;
    QTextEdit *buttom_text;
    QWidget *QR;

    void setupUi(QWidget *TicketGenerator)
    {
        if (TicketGenerator->objectName().isEmpty())
            TicketGenerator->setObjectName("TicketGenerator");
        TicketGenerator->resize(720, 444);
        TicketGenerator->setMinimumSize(QSize(200, 200));
        TicketGenerator->setMaximumSize(QSize(1000, 1000));
        TicketGenerator->setAcceptDrops(false);
        ticket = new QWidget(TicketGenerator);
        ticket->setObjectName("ticket");
        ticket->setGeometry(QRect(0, 0, 721, 441));
        ticket->setStyleSheet(QString::fromUtf8("QWidget#ticket{\n"
"border-image: url(://ticket_background.jpg) 0 0 0 0 stretch stretch;\n"
"}"));
        shifa = new QTextEdit(ticket);
        shifa->setObjectName("shifa");
        shifa->setGeometry(QRect(80, 55, 141, 71));
        shifa->setStyleSheet(QString::fromUtf8("QTextEdit#shifa {\n"
"    font-size: 22px;\n"
"    font-weight: bold;\n"
"	letter-spacing: 6px;\n"
"    background: transparent;\n"
"    border: none;\n"
"    color: #000000;\n"
"}"));
        zhongdao = new QTextEdit(ticket);
        zhongdao->setObjectName("zhongdao");
        zhongdao->setGeometry(QRect(450, 55, 201, 61));
        zhongdao->setStyleSheet(QString::fromUtf8("QTextEdit#zhongdao {\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"	letter-spacing: 6px;\n"
"    background: transparent;\n"
"    border: none;\n"
"    color: #000000;\n"
"}"));
        jianpiaokou = new QTextEdit(ticket);
        jianpiaokou->setObjectName("jianpiaokou");
        jianpiaokou->setGeometry(QRect(580, 15, 141, 41));
        jianpiaokou->setStyleSheet(QString::fromUtf8("QTextEdit#jianpiaokou {\n"
"    font: 12px \"Arial\";\n"
"    background: transparent;\n"
"    border: none;\n"
"    color: #000000;\n"
"}"));
        price = new QTextEdit(ticket);
        price->setObjectName("price");
        price->setGeometry(QRect(80, 170, 61, 31));
        price->setStyleSheet(QString::fromUtf8("QTextEdit#price{\n"
"    font-family: \"Arial\";\n"
"    background: transparent;\n"
"    border: none;\n"
"    color: #000000;\n"
"}"));
        text = new QTextEdit(ticket);
        text->setObjectName("text");
        text->setGeometry(QRect(100, 317, 318, 69));
        text->setStyleSheet(QString::fromUtf8("QTextEdit#text {\n"
"    font-family: \"Microsoft YaHei\", \"\351\273\221\344\275\223\", \"SimHei\";\n"
"    background: transparent;\n"
"    border: none;\n"
"    color: #000000;\n"
"}\n"
""));
        id_and_name = new QTextEdit(ticket);
        id_and_name->setObjectName("id_and_name");
        id_and_name->setGeometry(QRect(30, 265, 441, 71));
        id_and_name->setStyleSheet(QString::fromUtf8("QTextEdit#id_and_name {\n"
"    font-family: \"Microsoft YaHei\", \"\351\273\221\344\275\223\", \"SimHei\";\n"
"    background: transparent;\n"
"    border: none;\n"
"    color: #000000;\n"
"}\n"
""));
        year = new QLineEdit(ticket);
        year->setObjectName("year");
        year->setGeometry(QRect(40, 140, 71, 20));
        year->setStyleSheet(QString::fromUtf8("QLineEdit#year {\n"
"    font:  26px \"Arial\";\n"
"    background: transparent;\n"
"    border: none;\n"
"    color: #000000;\n"
"}"));
        month = new QLineEdit(ticket);
        month->setObjectName("month");
        month->setGeometry(QRect(140, 140, 31, 20));
        month->setStyleSheet(QString::fromUtf8("QLineEdit#month {\n"
"    font:  26px \"Arial\";\n"
"    background: transparent;\n"
"    border: none;\n"
"    color: #000000;\n"
"}"));
        day = new QLineEdit(ticket);
        day->setObjectName("day");
        day->setGeometry(QRect(210, 140, 31, 20));
        day->setStyleSheet(QString::fromUtf8("QLineEdit#day {\n"
"    font:  26px \"Arial\";\n"
"    background: transparent;\n"
"    border: none;\n"
"    color: #000000;\n"
"}"));
        set_out_time = new QLineEdit(ticket);
        set_out_time->setObjectName("set_out_time");
        set_out_time->setGeometry(QRect(280, 140, 71, 20));
        set_out_time->setStyleSheet(QString::fromUtf8("QLineEdit#set_out_time {\n"
"    font:  26px \"Arial\";\n"
"    background: transparent;\n"
"    border: none;\n"
"    color: #000000;\n"
"}"));
        train_index = new QLineEdit(ticket);
        train_index->setObjectName("train_index");
        train_index->setGeometry(QRect(480, 140, 31, 20));
        train_index->setStyleSheet(QString::fromUtf8("QLineEdit#train_index {\n"
"    font:  26px \"Arial\";\n"
"    background: transparent;\n"
"    border: none;\n"
"    color: #000000;\n"
"}"));
        seat = new QLineEdit(ticket);
        seat->setObjectName("seat");
        seat->setGeometry(QRect(550, 140, 51, 20));
        seat->setStyleSheet(QString::fromUtf8("QLineEdit#seat {\n"
"    font:  26px \"Arial\";\n"
"    background: transparent;\n"
"    border: none;\n"
"    color: #000000;\n"
"}"));
        seat_class = new QLineEdit(ticket);
        seat_class->setObjectName("seat_class");
        seat_class->setGeometry(QRect(550, 170, 81, 31));
        seat_class->setStyleSheet(QString::fromUtf8("QLineEdit#seat_class {\n"
"    font: bold 26px \"\345\256\213\344\275\223\";\n"
"    background: transparent;\n"
"    border: none;\n"
"    color: #000000;\n"
"}"));
        train_number = new QTextEdit(ticket);
        train_number->setObjectName("train_number");
        train_number->setGeometry(QRect(300, 67, 111, 61));
        train_number->setStyleSheet(QString::fromUtf8("QTextEdit#train_number {\n"
"    font: 20px \"Arial\";\n"
"    color: #000000;\n"
"    background: transparent;\n"
"    border: none;\n"
"}"));
        shifa_English = new QTextEdit(ticket);
        shifa_English->setObjectName("shifa_English");
        shifa_English->setGeometry(QRect(10, 100, 281, 51));
        shifa_English->setStyleSheet(QString::fromUtf8("QTextEdit#shifa_English {\n"
"    font: 8px \"Arial\";\n"
"    color: #000000;\n"
"    background: transparent;\n"
"	letter-spacing: 1px;\n"
"    border: none;\n"
"}"));
        zhongdao_English = new QTextEdit(ticket);
        zhongdao_English->setObjectName("zhongdao_English");
        zhongdao_English->setGeometry(QRect(440, 100, 221, 51));
        zhongdao_English->setStyleSheet(QString::fromUtf8("QTextEdit#zhongdao_English {\n"
"    font: 8px \"Arial\";\n"
"    color: #000000;\n"
"    background: transparent;\n"
"	letter-spacing: 1px;\n"
"    border: none;\n"
"}"));
        buttom_text = new QTextEdit(ticket);
        buttom_text->setObjectName("buttom_text");
        buttom_text->setGeometry(QRect(30, 395, 400, 61));
        buttom_text->setStyleSheet(QString::fromUtf8("QTextEdit#buttom_text{\n"
"    font-family: \"\345\256\213\344\275\223\";\n"
"    background: transparent;\n"
"    border: none;\n"
"    color: #000000;\n"
"}\n"
""));
        QR = new QWidget(ticket);
        QR->setObjectName("QR");
        QR->setGeometry(QRect(540, 260, 120, 120));
        QR->setStyleSheet(QString::fromUtf8("QWidget#QR{\n"
"border-image: url(:/resources/QR_Code.jpg) 0 0 0 0 stretch stretch;\n"
"}"));

        retranslateUi(TicketGenerator);

        QMetaObject::connectSlotsByName(TicketGenerator);
    } // setupUi

    void retranslateUi(QWidget *TicketGenerator)
    {
        TicketGenerator->setWindowTitle(QCoreApplication::translate("TicketGenerator", "Form", nullptr));
        shifa->setHtml(QCoreApplication::translate("TicketGenerator", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:22px; font-weight:700; font-style:normal; letter-spacing:6px;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:26pt; font-weight:400;\">\345\214\227\344\272\254\345\215\227</span></p></body></html>", nullptr));
        zhongdao->setHtml(QCoreApplication::translate("TicketGenerator", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:18px; font-weight:700; font-style:normal; letter-spacing:6px;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:26pt; font-weight:400;\">\344\270\212   \346\265\267</span></p></body></html>", nullptr));
        jianpiaokou->setHtml(QCoreApplication::translate("TicketGenerator", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:12px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-size:18pt;\">8A\343\200\2018B</span></p></body></html>", nullptr));
        price->setHtml(QCoreApplication::translate("TicketGenerator", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">662.0</span></p></body></html>", nullptr));
        text->setHtml(QCoreApplication::translate("TicketGenerator", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei','\351\273\221\344\275\223','SimHei'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-size:14pt;\">\344\271\260\347\245\250\350\257\267\345\210\26012306 \345\217\221\350\264\247\350\257\267\345\210\26095306</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" f"
                        "ont-family:'Microsoft YaHei UI'; font-size:14pt;\">\347\245\235\346\202\250\346\227\205\351\200\224\346\204\211\345\277\253</span></p></body></html>", nullptr));
        id_and_name->setHtml(QCoreApplication::translate("TicketGenerator", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei','\351\273\221\344\275\223','SimHei'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:22pt;\">1101001997****8888 \347\244\272\344\276\213</span></p></body></html>", nullptr));
        year->setText(QCoreApplication::translate("TicketGenerator", "2024", nullptr));
        month->setText(QCoreApplication::translate("TicketGenerator", "10", nullptr));
        day->setText(QCoreApplication::translate("TicketGenerator", "01", nullptr));
        set_out_time->setText(QCoreApplication::translate("TicketGenerator", "07:00", nullptr));
        train_index->setText(QCoreApplication::translate("TicketGenerator", "08", nullptr));
        seat->setText(QCoreApplication::translate("TicketGenerator", "08F", nullptr));
        seat_class->setText(QCoreApplication::translate("TicketGenerator", "\344\272\214\347\255\211\345\272\247", nullptr));
        train_number->setHtml(QCoreApplication::translate("TicketGenerator", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">G1</span></p></body></html>", nullptr));
        shifa_English->setHtml(QCoreApplication::translate("TicketGenerator", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:8px; font-weight:400; font-style:normal; letter-spacing:1px;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial UI'; font-size:18pt;\">Beijingnan</span></p></body></html>", nullptr));
        zhongdao_English->setHtml(QCoreApplication::translate("TicketGenerator", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:8px; font-weight:400; font-style:normal; letter-spacing:1px;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-size:18pt;\">shanghai</span></p></body></html>", nullptr));
        buttom_text->setHtml(QCoreApplication::translate("TicketGenerator", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei','\351\273\221\344\275\223','SimHei'; font-size:18pt;\">10010310290222E054478    JM</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicketGenerator: public Ui_TicketGenerator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKETGENERATOR_H
