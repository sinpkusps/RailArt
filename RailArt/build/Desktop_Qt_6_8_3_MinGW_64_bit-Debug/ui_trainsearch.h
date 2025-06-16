/********************************************************************************
** Form generated from reading UI file 'trainsearch.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAINSEARCH_H
#define UI_TRAINSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrainSearch
{
public:
    QPushButton *backButton;
    QLineEdit *departure;
    QLineEdit *arrival;
    QRadioButton *zhida;
    QRadioButton *zhongzhuan;
    QPushButton *SearchButton;
    QLineEdit *time;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *TrainSearch)
    {
        if (TrainSearch->objectName().isEmpty())
            TrainSearch->setObjectName("TrainSearch");
        TrainSearch->resize(640, 455);
        TrainSearch->setStyleSheet(QString::fromUtf8("QWidget#TrainSearch\n"
"{\n"
"	background-color: rgb(0, 255, 255);\n"
"\n"
"}"));
        backButton = new QPushButton(TrainSearch);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(0, 0, 91, 51));
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-image: url(:/resources/anniu3.jpg) 0 0 0 0 stretch stretch;\n"
"	font: 20pt \"Kunstler Script\";\n"
"	color: rgb(255, 0, 127);\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"border-image: url(:/resources/anniu3.jpg) 0 0 0 0 stretch stretch;\n"
"color: rgb(131, 133, 170);\n"
"font: 8pt \"Kunstler Script\";\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"border-image: url(:/resources/anniu3.jpg) 0 0 0 0 stretch stretch;\n"
"	font: 20pt \"Kunstler Script\";\n"
"color: rgb(131, 133, 170);\n"
"\n"
"}"));
        departure = new QLineEdit(TrainSearch);
        departure->setObjectName("departure");
        departure->setGeometry(QRect(40, 190, 201, 51));
        departure->setStyleSheet(QString::fromUtf8("QLineEdit#departure {\n"
"border-image: url(:/resources/1wenben.jpg) 0 0 0 0 stretch stretch;\n"
"	font: 20pt \"Kunstler Script\";\n"
"\n"
"	color: rgb(131, 133, 170);\n"
"}"));
        arrival = new QLineEdit(TrainSearch);
        arrival->setObjectName("arrival");
        arrival->setGeometry(QRect(380, 190, 201, 51));
        arrival->setStyleSheet(QString::fromUtf8("QLineEdit#arrival {\n"
"border-image: url(:/resources/1wenben.jpg) 0 0 0 0 stretch stretch;\n"
"	font: 20pt \"Kunstler Script\";\n"
"\n"
"	color: rgb(131, 133, 170);\n"
"}"));
        zhida = new QRadioButton(TrainSearch);
        zhida->setObjectName("zhida");
        zhida->setGeometry(QRect(440, 70, 81, 81));
        zhida->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    spacing: 10px; /* \350\260\203\346\225\264\345\233\276\346\240\207\344\270\216\346\226\207\345\255\227\351\227\264\350\267\235 */\n"
"}\n"
"\n"
"/* \346\214\207\347\244\272\345\231\250\351\200\232\347\224\250\350\256\276\347\275\256 */\n"
"QRadioButton::indicator {\n"
"    width: 81px;   /* \346\240\271\346\215\256\345\233\276\347\211\207\345\256\236\351\231\205\345\260\272\345\257\270\344\277\256\346\224\271 */\n"
"    height: 81px;\n"
"}\n"
"\n"
"/* \346\234\252\351\200\211\344\270\255\347\212\266\346\200\201 */\n"
"QRadioButton::indicator::unchecked {\n"
"    image: url(:/resources/l.jpg);\n"
"}\n"
"\n"
"/* \346\234\252\351\200\211\344\270\255\346\202\254\345\201\234\347\212\266\346\200\201 */\n"
"QRadioButton::indicator::unchecked:hover {\n"
"    image: url(:/resources/l.jpg);\n"
"}\n"
"\n"
"/* \351\200\211\344\270\255\347\212\266\346\200\201 */\n"
"QRadioButton::indicator::checked {\n"
"    image: url(:/resources/l.jpg);\n"
"}\n"
"\n"
"/* \351\200\211\344\270\255\346\202\254\345\201"
                        "\234\347\212\266\346\200\201 */\n"
"QRadioButton::indicator::checked:hover {\n"
"    image: url(:/resources/ha.jpg);\n"
"}\n"
"\n"
"/* \347\246\201\347\224\250\347\212\266\346\200\201 */\n"
"QRadioButton::indicator:disabled {\n"
"    opacity: 0.5;  /* \351\231\215\344\275\216\351\200\217\346\230\216\345\272\246\350\241\250\347\244\272\347\246\201\347\224\250 */\n"
"}"));
        zhida->setChecked(true);
        zhongzhuan = new QRadioButton(TrainSearch);
        zhongzhuan->setObjectName("zhongzhuan");
        zhongzhuan->setGeometry(QRect(90, 70, 81, 81));
        zhongzhuan->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    spacing: 10px; /* \350\260\203\346\225\264\345\233\276\346\240\207\344\270\216\346\226\207\345\255\227\351\227\264\350\267\235 */\n"
"}\n"
"\n"
"/* \346\214\207\347\244\272\345\231\250\351\200\232\347\224\250\350\256\276\347\275\256 */\n"
"QRadioButton::indicator {\n"
"    width: 81px;   /* \346\240\271\346\215\256\345\233\276\347\211\207\345\256\236\351\231\205\345\260\272\345\257\270\344\277\256\346\224\271 */\n"
"    height: 81px;\n"
"}\n"
"\n"
"/* \346\234\252\351\200\211\344\270\255\347\212\266\346\200\201 */\n"
"QRadioButton::indicator::unchecked {\n"
"    image: url(:/resources/ha.jpg);\n"
"}\n"
"\n"
"/* \346\234\252\351\200\211\344\270\255\346\202\254\345\201\234\347\212\266\346\200\201 */\n"
"QRadioButton::indicator::unchecked:hover {\n"
"    image: url(:/resources/ha.jpg);\n"
"}\n"
"\n"
"/* \351\200\211\344\270\255\347\212\266\346\200\201 */\n"
"QRadioButton::indicator::checked {\n"
"    image: url(:/resources/ha.jpg);\n"
"}\n"
"\n"
"/* \351\200\211\344\270\255\346\202\254\345\201"
                        "\234\347\212\266\346\200\201 */\n"
"QRadioButton::indicator::checked:hover {\n"
"    image: url(:/resources/ha.jpg);\n"
"}\n"
"\n"
"/* \347\246\201\347\224\250\347\212\266\346\200\201 */\n"
"QRadioButton::indicator:disabled {\n"
"    opacity: 0.5;  /* \351\231\215\344\275\216\351\200\217\346\230\216\345\272\246\350\241\250\347\244\272\347\246\201\347\224\250 */\n"
"}"));
        SearchButton = new QPushButton(TrainSearch);
        SearchButton->setObjectName("SearchButton");
        SearchButton->setGeometry(QRect(240, 60, 121, 91));
        SearchButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-image: url(:/resources/chaxu.jpg) 0 0 0 0 stretch stretch;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"border-image: url(:/resources/chaxu.jpg) 0 0 0 0 stretch stretch;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"border-image: url(:/resources/chaxu.jpg) 0 0 0 0 stretch stretch;\n"
"\n"
"\n"
"}"));
        time = new QLineEdit(TrainSearch);
        time->setObjectName("time");
        time->setGeometry(QRect(470, 0, 131, 31));
        time->setStyleSheet(QString::fromUtf8("QLineEdit#time {\n"
"border-image: url(:/resources/time.jpg) 0 0 0 0 stretch stretch;\n"
"	font: 20pt \"Kunstler Script\";\n"
"\n"
"	color: rgb(131, 133, 170);\n"
"}"));
        frame = new QFrame(TrainSearch);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-1, 249, 641, 211));
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame {\n"
"border-image: url(:/resources/1.jpg) 0 0 0 0 stretch stretch;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(TrainSearch);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 50, 40, 12));
        label_2 = new QLabel(TrainSearch);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(460, 50, 40, 12));

        retranslateUi(TrainSearch);

        QMetaObject::connectSlotsByName(TrainSearch);
    } // setupUi

    void retranslateUi(QWidget *TrainSearch)
    {
        TrainSearch->setWindowTitle(QCoreApplication::translate("TrainSearch", "Form", nullptr));
        backButton->setText(QCoreApplication::translate("TrainSearch", "\350\277\224\345\233\236", nullptr));
        departure->setText(QCoreApplication::translate("TrainSearch", "                  \345\207\272\345\217\221\345\234\260", nullptr));
        arrival->setText(QCoreApplication::translate("TrainSearch", "                  \347\233\256\347\232\204\345\234\260", nullptr));
        zhida->setText(QCoreApplication::translate("TrainSearch", "\347\233\264\350\276\276", nullptr));
        zhongzhuan->setText(QCoreApplication::translate("TrainSearch", "\344\270\255\350\275\254", nullptr));
        SearchButton->setText(QCoreApplication::translate("TrainSearch", "\346\237\245\350\257\242", nullptr));
        time->setText(QCoreApplication::translate("TrainSearch", "\344\271\230\345\235\220\346\227\245\346\234\237", nullptr));
        label->setText(QCoreApplication::translate("TrainSearch", "\344\270\255\350\275\254", nullptr));
        label_2->setText(QCoreApplication::translate("TrainSearch", "\347\233\264\350\276\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrainSearch: public Ui_TrainSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINSEARCH_H
