/********************************************************************************
** Form generated from reading UI file 'searchresult.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHRESULT_H
#define UI_SEARCHRESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchResult
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *Result;
    QHBoxLayout *horizontalLayout;
    QPushButton *back;
    QPushButton *switchButton;
    QPushButton *sort_bytime;
    QPushButton *sort_byprice;

    void setupUi(QWidget *SearchResult)
    {
        if (SearchResult->objectName().isEmpty())
            SearchResult->setObjectName("SearchResult");
        SearchResult->resize(1000, 300);
        SearchResult->setStyleSheet(QString::fromUtf8("QWidget#SearchResult\n"
"{\n"
"	background-color: rgb(0, 255, 255);\n"
"\n"
"}"));
        verticalLayout = new QVBoxLayout(SearchResult);
        verticalLayout->setObjectName("verticalLayout");
        Result = new QTableView(SearchResult);
        Result->setObjectName("Result");
        Result->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    background: #FFFFFF;\n"
"    alternate-background-color: #F8F9FA;\n"
"    gridline-color: #E9ECEF;\n"
"    border: 1px solid #DEE2E6;\n"
"    border-radius: 6px;\n"
"    selection-background-color: #E7F5FF;\n"
"    selection-color: #1862AB;\n"
"}\n"
"\n"
"/* \350\241\250\345\244\264\350\256\276\350\256\241 */\n"
"QHeaderView::section {\n"
"    background-color: #F1F3F5;\n"
"    color: #495057;\n"
"    font: 600 13px \"Segoe UI\";\n"
"    padding: 10px 12px;\n"
"    border-bottom: 2px solid #339AF0;\n"
"}\n"
"\n"
"/* \345\215\225\345\205\203\346\240\274\344\274\230\345\214\226 */\n"
"QTableView::item {\n"
"    padding: 8px;\n"
"    border-bottom: 1px solid #F1F3F5;\n"
"}\n"
"\n"
"/* \346\273\232\345\212\250\346\235\241\347\216\260\344\273\243\345\214\226 */\n"
"QScrollBar:vertical {\n"
"    background: #F1F3F5;\n"
"    width: 10px;\n"
"    border-radius: 4px;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"    background: #CED4DA;\n"
"    min-height: 30px;\n"
"    border-radius: 4px;\n"
"}"));

        verticalLayout->addWidget(Result);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        back = new QPushButton(SearchResult);
        back->setObjectName("back");
        back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    min-width: 150px;\n"
"    max-width: 150px;\n"
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
" #back{\n"
"    background: #FF5252;\n"
"    qproperty-alignment: AlignCenter; /* \346\226\207\345\255\227\345\261\205\344\270\255 */\n"
"	font: 18pt \"Baskerville Old Face\";\n"
"}\n"
"QPushButton {\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1),\n"
"                0 2px 4px rgba(0, 0, 0, 0.06);\n"
"}"));

        horizontalLayout->addWidget(back);

        switchButton = new QPushButton(SearchResult);
        switchButton->setObjectName("switchButton");
        switchButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    min-width: 150px;\n"
"    max-width: 150px;\n"
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
"#switchButton {\n"
"   font: 15pt \"Baskerville Old Face\";\n"
"  background: #4CAF50;\n"
"}\n"
"QPushButton {\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1),\n"
"                0 2px 4px rgba(0, 0, 0, 0.06);\n"
"}"));

        horizontalLayout->addWidget(switchButton);

        sort_bytime = new QPushButton(SearchResult);
        sort_bytime->setObjectName("sort_bytime");
        sort_bytime->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    min-width: 150px;\n"
"    max-width: 150px;\n"
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
"#sort_bytime {\n"
"font: 15pt \"Baskerville Old Face\";\n"
" background: #FFC107; \n"
"}\n"
"QPushButton {\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1),\n"
"                0 2px 4px rgba(0, 0, 0, 0.06);\n"
"}"));

        horizontalLayout->addWidget(sort_bytime);

        sort_byprice = new QPushButton(SearchResult);
        sort_byprice->setObjectName("sort_byprice");
        sort_byprice->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    min-width: 150px;\n"
"    max-width: 150px;\n"
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
" #sort_byprice{\n"
"background: #9C27B0;\n"
"font: 15pt \"Baskerville Old Face\";\n"
"\n"
"}\n"
"QPushButton {\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1),\n"
"                0 2px 4px rgba(0, 0, 0, 0.06);\n"
"}"));

        horizontalLayout->addWidget(sort_byprice);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SearchResult);

        QMetaObject::connectSlotsByName(SearchResult);
    } // setupUi

    void retranslateUi(QWidget *SearchResult)
    {
        SearchResult->setWindowTitle(QCoreApplication::translate("SearchResult", "Form", nullptr));
        back->setText(QCoreApplication::translate("SearchResult", "\350\277\224\345\233\236", nullptr));
        switchButton->setText(QCoreApplication::translate("SearchResult", "\345\210\207\346\215\242\346\250\241\345\274\217", nullptr));
        sort_bytime->setText(QCoreApplication::translate("SearchResult", "\346\214\211\346\227\266\351\227\264\346\216\222\345\272\217", nullptr));
        sort_byprice->setText(QCoreApplication::translate("SearchResult", "\346\214\211\344\273\267\346\240\274\346\216\222\345\272\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchResult: public Ui_SearchResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHRESULT_H
