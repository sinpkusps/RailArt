/********************************************************************************
** Form generated from reading UI file 'tripmanager.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIPMANAGER_H
#define UI_TRIPMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TripManager
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *TicketList;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *backButton;
    QPushButton *selectFile;
    QPushButton *EditTicket;
    QPushButton *RemoveTicket;
    QPushButton *newTicket;

    void setupUi(QWidget *TripManager)
    {
        if (TripManager->objectName().isEmpty())
            TripManager->setObjectName("TripManager");
        TripManager->resize(629, 404);
        verticalLayout = new QVBoxLayout(TripManager);
        verticalLayout->setObjectName("verticalLayout");
        TicketList = new QTableView(TripManager);
        TicketList->setObjectName("TicketList");
        TicketList->setStyleSheet(QString::fromUtf8("QTableWidget#TicketList {\n"
"    /* \345\237\272\347\241\200\351\205\215\347\275\256 */\n"
"    background-color: #F8F9FA;       /* \344\270\273\350\203\214\346\231\257\350\211\262\357\274\210\346\265\205\347\201\260\347\231\275\357\274\211 */\n"
"    alternate-background-color: #E9ECEF; /* \344\272\244\346\233\277\350\241\214\350\203\214\346\231\257\350\211\262 */\n"
"    gridline-color: #DEE2E6;         /* \347\275\221\346\240\274\347\272\277\351\242\234\350\211\262 */\n"
"    border: 1px solid #CED4DA;      /* \345\244\226\350\276\271\346\241\206 */\n"
"    border-radius: 6px;\n"
"    padding: 4px;                   /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 13px;\n"
"    color: #212529;                 /* \344\270\273\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"/* \350\241\250\345\244\264\346\240\267\345\274\217 */\n"
"QHeaderView::section {\n"
"    background-color: #4263EB;       /* \346\267\261\350\223\235\350\211\262\350\241\250"
                        "\345\244\264 */\n"
"    color: white;\n"
"    font-weight: 600;\n"
"    padding: 8px;\n"
"    border: none;\n"
"    border-bottom: 2px solid #364FC7;\n"
"}\n"
"\n"
"/* \345\215\225\345\205\203\346\240\274\346\240\267\345\274\217 */\n"
"QTableWidget::item {\n"
"    padding: 6px;\n"
"    border-bottom: 1px solid #E9ECEF; /* \350\241\214\344\270\213\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"/* \351\200\211\344\270\255\347\212\266\346\200\201 */\n"
"QTableWidget::item:selected {\n"
"    background-color: #E7F5FF;       /* \346\265\205\350\223\235\350\211\262\351\200\211\344\270\255\350\203\214\346\231\257 */\n"
"    color: #1862AB;                 /* \346\267\261\350\223\235\350\211\262\351\200\211\344\270\255\346\226\207\345\255\227 */\n"
"}\n"
"\n"
"/* \346\273\232\345\212\250\346\235\241\346\240\267\345\274\217 */\n"
"QScrollBar:vertical {\n"
"    background: #F1F3F5;\n"
"    width: 12px;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"    background: #CED4DA;\n"
"    border-radius: 4px;\n"
"}"));

        verticalLayout->addWidget(TicketList);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        backButton = new QPushButton(TripManager);
        backButton->setObjectName("backButton");
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    min-width: 80px;\n"
"    max-width: 80px;\n"
"    min-height: 80px;\n"
"    max-height: 80px;\n"
"    border: 2px solid #333;\n"
"    border-radius: 8px;\n"
"    font-weight: bold;\n"
"    color: white;\n"
" font-weight: 900;       /* \350\266\205\347\262\227\344\275\223 */\n"
"    color: #000000;        /* \347\272\257\351\273\221\350\211\262 */\n"
"    text-shadow: 0 1px 1px rgba(255, 255, 255, 0.5); /* \347\231\275\350\211\262\345\276\256\351\230\264\345\275\261\346\217\220\345\215\207\345\257\271\346\257\224\345\272\246 */\n"
"}\n"
"#backButton {\n"
"\n"
"    qproperty-alignment: AlignCenter; /* \346\226\207\345\255\227\345\261\205\344\270\255 */\n"
"	font: 25pt \"Baskerville Old Face\";\n"
"}\n"
"QPushButton {\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1),\n"
"                0 2px 4px rgba(0, 0, 0, 0.06);\n"
"}"));

        horizontalLayout_2->addWidget(backButton);

        selectFile = new QPushButton(TripManager);
        selectFile->setObjectName("selectFile");
        selectFile->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    min-width: 80px;\n"
"    max-width: 80px;\n"
"    min-height: 80px;\n"
"    max-height: 80px;\n"
"    border: 2px solid #333;\n"
"    border-radius: 8px;\n"
"    font-weight: bold;\n"
"    color: white;\n"
" font-weight: 900;       /* \350\266\205\347\262\227\344\275\223 */\n"
"    color: #000000;        /* \347\272\257\351\273\221\350\211\262 */\n"
"    text-shadow: 0 1px 1px rgba(255, 255, 255, 0.5); /* \347\231\275\350\211\262\345\276\256\351\230\264\345\275\261\346\217\220\345\215\207\345\257\271\346\257\224\345\272\246 */\n"
"}\n"
"#selectFile {\n"
"   font: 15pt \"Baskerville Old Face\";\n"
"  background: #4CAF50;\n"
"}\n"
"QPushButton {\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1),\n"
"                0 2px 4px rgba(0, 0, 0, 0.06);\n"
"}"));

        horizontalLayout_2->addWidget(selectFile);

        EditTicket = new QPushButton(TripManager);
        EditTicket->setObjectName("EditTicket");
        EditTicket->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    min-width: 80px;\n"
"    max-width: 80px;\n"
"    min-height: 80px;\n"
"    max-height: 80px;\n"
"    border: 2px solid #333;\n"
"    border-radius: 8px;\n"
"    font-weight: bold;\n"
"    color: white;\n"
" font-weight: 900;       /* \350\266\205\347\262\227\344\275\223 */\n"
"    color: #000000;        /* \347\272\257\351\273\221\350\211\262 */\n"
"    text-shadow: 0 1px 1px rgba(255, 255, 255, 0.5); /* \347\231\275\350\211\262\345\276\256\351\230\264\345\275\261\346\217\220\345\215\207\345\257\271\346\257\224\345\272\246 */\n"
"}\n"
" #EditTicket {\n"
"    background: #2196F3;\n"
"font: 15pt \"Baskerville Old Face\";\n"
"}\n"
"QPushButton {\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1),\n"
"                0 2px 4px rgba(0, 0, 0, 0.06);\n"
"}"));

        horizontalLayout_2->addWidget(EditTicket);

        RemoveTicket = new QPushButton(TripManager);
        RemoveTicket->setObjectName("RemoveTicket");
        RemoveTicket->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    min-width: 80px;\n"
"    max-width: 80px;\n"
"    min-height: 80px;\n"
"    max-height: 80px;\n"
"    border: 2px solid #333;\n"
"    border-radius: 8px;\n"
"    font-weight: bold;\n"
"    color: white;\n"
" font-weight: 900;       /* \350\266\205\347\262\227\344\275\223 */\n"
"    color: #000000;        /* \347\272\257\351\273\221\350\211\262 */\n"
"    text-shadow: 0 1px 1px rgba(255, 255, 255, 0.5); /* \347\231\275\350\211\262\345\276\256\351\230\264\345\275\261\346\217\220\345\215\207\345\257\271\346\257\224\345\272\246 */\n"
"}\n"
"#RemoveTicket {\n"
"font: 15pt \"Baskerville Old Face\";\n"
" background: #FFC107; \n"
"}\n"
"QPushButton {\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1),\n"
"                0 2px 4px rgba(0, 0, 0, 0.06);\n"
"}"));

        horizontalLayout_2->addWidget(RemoveTicket);

        newTicket = new QPushButton(TripManager);
        newTicket->setObjectName("newTicket");
        newTicket->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    min-width: 80px;\n"
"    max-width: 80px;\n"
"    min-height: 80px;\n"
"    max-height: 80px;\n"
"    border: 2px solid #333;\n"
"    border-radius: 8px;\n"
"    font-weight: bold;\n"
"    color: white;\n"
" font-weight: 900;       /* \350\266\205\347\262\227\344\275\223 */\n"
"    color: #000000;        /* \347\272\257\351\273\221\350\211\262 */\n"
"    text-shadow: 0 1px 1px rgba(255, 255, 255, 0.5); /* \347\231\275\350\211\262\345\276\256\351\230\264\345\275\261\346\217\220\345\215\207\345\257\271\346\257\224\345\272\246 */\n"
"}\n"
"#newTicket {\n"
"background: #9C27B0;\n"
"font: 15pt \"Baskerville Old Face\";\n"
"}\n"
"QPushButton {\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1),\n"
"                0 2px 4px rgba(0, 0, 0, 0.06);\n"
"}"));

        horizontalLayout_2->addWidget(newTicket);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(TripManager);

        QMetaObject::connectSlotsByName(TripManager);
    } // setupUi

    void retranslateUi(QWidget *TripManager)
    {
        TripManager->setWindowTitle(QCoreApplication::translate("TripManager", "Form", nullptr));
        backButton->setText(QCoreApplication::translate("TripManager", "\350\277\224\345\233\236", nullptr));
        selectFile->setText(QCoreApplication::translate("TripManager", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        EditTicket->setText(QCoreApplication::translate("TripManager", "\347\274\226\350\276\221\350\275\246\347\245\250", nullptr));
        RemoveTicket->setText(QCoreApplication::translate("TripManager", "\345\210\240\351\231\244\350\275\246\347\245\250", nullptr));
        newTicket->setText(QCoreApplication::translate("TripManager", "\346\267\273\345\212\240\350\275\246\347\245\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TripManager: public Ui_TripManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIPMANAGER_H
