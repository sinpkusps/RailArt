/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserWindow
{
public:
    QAction *actionAccount;
    QAction *actionQuit;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget;
    QWidget *tabGoods;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacerGoods;
    QGridLayout *gridLayoutGoods;
    QPushButton *pushButtonGoodsCart;
    QPushButton *pushButtonGoodsSearch;
    QPushButton *pushButtonGoodsRefresh;
    QTableView *tableViewGoods;
    QWidget *tabCart;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacerRecordation_2;
    QPushButton *pushButtonCartPay;
    QPushButton *pushButtonCartRemove;
    QPushButton *pushButtonCartRefresh;
    QTableView *tableViewCart;
    QWidget *tabRecordation;
    QGridLayout *gridLayout;
    QGridLayout *gridLayoutRecordation;
    QPushButton *pushButtonGoodsReturn;
    QPushButton *pushButtonRecordationSearch;
    QPushButton *pushButtonRecordationRefresh;
    QPushButton *pushButtonShoucang;
    QSpacerItem *horizontalSpacerRecordation;
    QTableView *tableViewRecordation;
    QWidget *tabshoucang;
    QTableView *tableViewShoucang;
    QPushButton *pushButto_update;
    QPushButton *pushButto_create;
    QWidget *tabInvitation;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacerBook_3;
    QPushButton *pushButtonInvitationAdd;
    QPushButton *pushButtonInvitationRefresh;
    QTableView *tableViewInvitation;
    QWidget *tabMyGoods;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonMyGoodsAdd;
    QPushButton *pushButtonMyGoodsRemove;
    QPushButton *pushButtonMyGoodsSearch;
    QPushButton *pushButtonMyGoodsRefresh;
    QSpacerItem *horizontalSpacerGoods_2;
    QTableView *tableViewMyGoods;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserWindow)
    {
        if (UserWindow->objectName().isEmpty())
            UserWindow->setObjectName("UserWindow");
        UserWindow->resize(1344, 880);
        UserWindow->setStyleSheet(QString::fromUtf8("#UserWindow\n"
"{\n"
"  border-image:url(\"://bg.jpg\");\n"
"}\n"
""));
        actionAccount = new QAction(UserWindow);
        actionAccount->setObjectName("actionAccount");
        actionQuit = new QAction(UserWindow);
        actionQuit->setObjectName("actionQuit");
        centralwidget = new QWidget(UserWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setTabPosition(QTabWidget::TabPosition::West);
        tabGoods = new QWidget();
        tabGoods->setObjectName("tabGoods");
        tabGoods->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(tabGoods);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacerGoods = new QSpacerItem(975, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacerGoods, 0, 0, 1, 1);

        gridLayoutGoods = new QGridLayout();
        gridLayoutGoods->setObjectName("gridLayoutGoods");
        pushButtonGoodsCart = new QPushButton(tabGoods);
        pushButtonGoodsCart->setObjectName("pushButtonGoodsCart");
        pushButtonGoodsCart->setMinimumSize(QSize(120, 40));

        gridLayoutGoods->addWidget(pushButtonGoodsCart, 0, 0, 1, 1);

        pushButtonGoodsSearch = new QPushButton(tabGoods);
        pushButtonGoodsSearch->setObjectName("pushButtonGoodsSearch");
        pushButtonGoodsSearch->setMinimumSize(QSize(80, 40));

        gridLayoutGoods->addWidget(pushButtonGoodsSearch, 0, 1, 1, 1);

        pushButtonGoodsRefresh = new QPushButton(tabGoods);
        pushButtonGoodsRefresh->setObjectName("pushButtonGoodsRefresh");
        pushButtonGoodsRefresh->setMinimumSize(QSize(80, 40));

        gridLayoutGoods->addWidget(pushButtonGoodsRefresh, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayoutGoods, 0, 1, 1, 1);

        tableViewGoods = new QTableView(tabGoods);
        tableViewGoods->setObjectName("tableViewGoods");
        tableViewGoods->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(tableViewGoods, 1, 0, 1, 2);

        tabWidget->addTab(tabGoods, QString());
        tabCart = new QWidget();
        tabCart->setObjectName("tabCart");
        gridLayout_5 = new QGridLayout(tabCart);
        gridLayout_5->setObjectName("gridLayout_5");
        horizontalSpacerRecordation_2 = new QSpacerItem(1022, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacerRecordation_2, 0, 0, 1, 1);

        pushButtonCartPay = new QPushButton(tabCart);
        pushButtonCartPay->setObjectName("pushButtonCartPay");
        pushButtonCartPay->setMinimumSize(QSize(80, 40));

        gridLayout_5->addWidget(pushButtonCartPay, 0, 1, 1, 1);

        pushButtonCartRemove = new QPushButton(tabCart);
        pushButtonCartRemove->setObjectName("pushButtonCartRemove");
        pushButtonCartRemove->setMinimumSize(QSize(80, 40));

        gridLayout_5->addWidget(pushButtonCartRemove, 0, 2, 1, 1);

        pushButtonCartRefresh = new QPushButton(tabCart);
        pushButtonCartRefresh->setObjectName("pushButtonCartRefresh");
        pushButtonCartRefresh->setMinimumSize(QSize(80, 40));

        gridLayout_5->addWidget(pushButtonCartRefresh, 0, 3, 1, 1);

        tableViewCart = new QTableView(tabCart);
        tableViewCart->setObjectName("tableViewCart");
        tableViewCart->setStyleSheet(QString::fromUtf8(""));

        gridLayout_5->addWidget(tableViewCart, 1, 0, 1, 4);

        tabWidget->addTab(tabCart, QString());
        tabRecordation = new QWidget();
        tabRecordation->setObjectName("tabRecordation");
        tabRecordation->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(tabRecordation);
        gridLayout->setObjectName("gridLayout");
        gridLayoutRecordation = new QGridLayout();
        gridLayoutRecordation->setObjectName("gridLayoutRecordation");
        pushButtonGoodsReturn = new QPushButton(tabRecordation);
        pushButtonGoodsReturn->setObjectName("pushButtonGoodsReturn");
        pushButtonGoodsReturn->setMinimumSize(QSize(80, 40));

        gridLayoutRecordation->addWidget(pushButtonGoodsReturn, 1, 1, 1, 1);

        pushButtonRecordationSearch = new QPushButton(tabRecordation);
        pushButtonRecordationSearch->setObjectName("pushButtonRecordationSearch");
        pushButtonRecordationSearch->setMinimumSize(QSize(80, 40));

        gridLayoutRecordation->addWidget(pushButtonRecordationSearch, 1, 2, 1, 1);

        pushButtonRecordationRefresh = new QPushButton(tabRecordation);
        pushButtonRecordationRefresh->setObjectName("pushButtonRecordationRefresh");
        pushButtonRecordationRefresh->setMinimumSize(QSize(80, 40));

        gridLayoutRecordation->addWidget(pushButtonRecordationRefresh, 1, 3, 1, 1);

        pushButtonShoucang = new QPushButton(tabRecordation);
        pushButtonShoucang->setObjectName("pushButtonShoucang");
        pushButtonShoucang->setMinimumSize(QSize(80, 40));

        gridLayoutRecordation->addWidget(pushButtonShoucang, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayoutRecordation, 0, 2, 1, 1);

        horizontalSpacerRecordation = new QSpacerItem(975, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacerRecordation, 0, 0, 1, 1);

        tableViewRecordation = new QTableView(tabRecordation);
        tableViewRecordation->setObjectName("tableViewRecordation");
        tableViewRecordation->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(tableViewRecordation, 1, 0, 1, 3);

        tabWidget->addTab(tabRecordation, QString());
        tabshoucang = new QWidget();
        tabshoucang->setObjectName("tabshoucang");
        tableViewShoucang = new QTableView(tabshoucang);
        tableViewShoucang->setObjectName("tableViewShoucang");
        tableViewShoucang->setGeometry(QRect(0, 40, 1291, 761));
        pushButto_update = new QPushButton(tabshoucang);
        pushButto_update->setObjectName("pushButto_update");
        pushButto_update->setGeometry(QRect(10, 10, 93, 31));
        pushButto_create = new QPushButton(tabshoucang);
        pushButto_create->setObjectName("pushButto_create");
        pushButto_create->setGeometry(QRect(120, 10, 101, 31));
        tabWidget->addTab(tabshoucang, QString());
        tabInvitation = new QWidget();
        tabInvitation->setObjectName("tabInvitation");
        gridLayout_6 = new QGridLayout(tabInvitation);
        gridLayout_6->setObjectName("gridLayout_6");
        horizontalSpacerBook_3 = new QSpacerItem(1108, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacerBook_3, 0, 0, 1, 1);

        pushButtonInvitationAdd = new QPushButton(tabInvitation);
        pushButtonInvitationAdd->setObjectName("pushButtonInvitationAdd");
        pushButtonInvitationAdd->setMinimumSize(QSize(80, 40));

        gridLayout_6->addWidget(pushButtonInvitationAdd, 0, 1, 1, 1);

        pushButtonInvitationRefresh = new QPushButton(tabInvitation);
        pushButtonInvitationRefresh->setObjectName("pushButtonInvitationRefresh");
        pushButtonInvitationRefresh->setMinimumSize(QSize(80, 40));

        gridLayout_6->addWidget(pushButtonInvitationRefresh, 0, 2, 1, 1);

        tableViewInvitation = new QTableView(tabInvitation);
        tableViewInvitation->setObjectName("tableViewInvitation");
        tableViewInvitation->setStyleSheet(QString::fromUtf8(""));

        gridLayout_6->addWidget(tableViewInvitation, 1, 0, 1, 3);

        tabWidget->addTab(tabInvitation, QString());
        tabMyGoods = new QWidget();
        tabMyGoods->setObjectName("tabMyGoods");
        gridLayout_4 = new QGridLayout(tabMyGoods);
        gridLayout_4->setObjectName("gridLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonMyGoodsAdd = new QPushButton(tabMyGoods);
        pushButtonMyGoodsAdd->setObjectName("pushButtonMyGoodsAdd");
        pushButtonMyGoodsAdd->setMinimumSize(QSize(80, 40));

        horizontalLayout->addWidget(pushButtonMyGoodsAdd);

        pushButtonMyGoodsRemove = new QPushButton(tabMyGoods);
        pushButtonMyGoodsRemove->setObjectName("pushButtonMyGoodsRemove");
        pushButtonMyGoodsRemove->setMinimumSize(QSize(80, 40));

        horizontalLayout->addWidget(pushButtonMyGoodsRemove);

        pushButtonMyGoodsSearch = new QPushButton(tabMyGoods);
        pushButtonMyGoodsSearch->setObjectName("pushButtonMyGoodsSearch");
        pushButtonMyGoodsSearch->setMinimumSize(QSize(80, 40));

        horizontalLayout->addWidget(pushButtonMyGoodsSearch);

        pushButtonMyGoodsRefresh = new QPushButton(tabMyGoods);
        pushButtonMyGoodsRefresh->setObjectName("pushButtonMyGoodsRefresh");
        pushButtonMyGoodsRefresh->setMinimumSize(QSize(80, 40));

        horizontalLayout->addWidget(pushButtonMyGoodsRefresh);


        gridLayout_4->addLayout(horizontalLayout, 0, 2, 1, 1);

        horizontalSpacerGoods_2 = new QSpacerItem(1299, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacerGoods_2, 0, 1, 1, 1);

        tableViewMyGoods = new QTableView(tabMyGoods);
        tableViewMyGoods->setObjectName("tableViewMyGoods");
        tableViewMyGoods->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(tableViewMyGoods, 3, 0, 1, 3);

        tabWidget->addTab(tabMyGoods, QString());

        gridLayout_3->addWidget(tabWidget, 0, 0, 1, 1);

        UserWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UserWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1344, 25));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        UserWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(UserWindow);
        statusbar->setObjectName("statusbar");
        UserWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(pushButtonGoodsCart, pushButtonGoodsSearch);
        QWidget::setTabOrder(pushButtonGoodsSearch, pushButtonGoodsRefresh);
        QWidget::setTabOrder(pushButtonGoodsRefresh, tableViewGoods);
        QWidget::setTabOrder(tableViewGoods, pushButtonRecordationRefresh);
        QWidget::setTabOrder(pushButtonRecordationRefresh, pushButtonRecordationSearch);
        QWidget::setTabOrder(pushButtonRecordationSearch, tableViewRecordation);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionAccount);
        menu->addSeparator();
        menu->addAction(actionQuit);

        retranslateUi(UserWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(UserWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UserWindow)
    {
        UserWindow->setWindowTitle(QString());
        actionAccount->setText(QCoreApplication::translate("UserWindow", "\350\264\246\346\210\267\344\277\241\346\201\257(&U)", nullptr));
        actionQuit->setText(QCoreApplication::translate("UserWindow", "\351\200\200\345\207\272(&Q)", nullptr));
        pushButtonGoodsCart->setText(QCoreApplication::translate("UserWindow", "\345\212\240\345\205\245\345\276\205\346\224\257\344\273\230\350\256\242\345\215\225", nullptr));
        pushButtonGoodsSearch->setText(QCoreApplication::translate("UserWindow", "\346\237\245\350\257\242", nullptr));
        pushButtonGoodsRefresh->setText(QCoreApplication::translate("UserWindow", "\345\210\267\346\226\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabGoods), QCoreApplication::translate("UserWindow", "\346\211\200\346\234\211\350\275\246\346\254\241", nullptr));
        pushButtonCartPay->setText(QCoreApplication::translate("UserWindow", "\344\273\230\346\254\276", nullptr));
        pushButtonCartRemove->setText(QCoreApplication::translate("UserWindow", " \347\247\273\351\231\244", nullptr));
        pushButtonCartRefresh->setText(QCoreApplication::translate("UserWindow", "\345\210\267\346\226\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCart), QCoreApplication::translate("UserWindow", "\345\276\205\346\224\257\344\273\230\350\256\242\345\215\225", nullptr));
        pushButtonGoodsReturn->setText(QCoreApplication::translate("UserWindow", "\351\200\200\347\245\250", nullptr));
        pushButtonRecordationSearch->setText(QCoreApplication::translate("UserWindow", "\346\237\245\350\257\242", nullptr));
        pushButtonRecordationRefresh->setText(QCoreApplication::translate("UserWindow", "\345\210\267\346\226\260", nullptr));
        pushButtonShoucang->setText(QCoreApplication::translate("UserWindow", "\346\224\266\350\227\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabRecordation), QCoreApplication::translate("UserWindow", "\350\241\214\347\250\213\350\256\260\345\275\225", nullptr));
        pushButto_update->setText(QCoreApplication::translate("UserWindow", "\345\210\267\346\226\260", nullptr));
        pushButto_create->setText(QCoreApplication::translate("UserWindow", "\347\224\237\346\210\220\350\211\272\346\234\257\350\275\246\347\245\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabshoucang), QCoreApplication::translate("UserWindow", "\346\224\266\350\227\217\344\270\216\350\256\260\345\275\225", nullptr));
        pushButtonInvitationAdd->setText(QCoreApplication::translate("UserWindow", " \344\270\212\346\212\245\345\217\215\351\246\210", nullptr));
        pushButtonInvitationRefresh->setText(QCoreApplication::translate("UserWindow", "\345\210\267\346\226\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabInvitation), QCoreApplication::translate("UserWindow", "\345\217\215\351\246\210\344\277\241\346\201\257", nullptr));
        pushButtonMyGoodsAdd->setText(QCoreApplication::translate("UserWindow", "\346\267\273\345\212\240", nullptr));
        pushButtonMyGoodsRemove->setText(QCoreApplication::translate("UserWindow", "\345\210\240\351\231\244", nullptr));
        pushButtonMyGoodsSearch->setText(QCoreApplication::translate("UserWindow", "\346\237\245\350\257\242", nullptr));
        pushButtonMyGoodsRefresh->setText(QCoreApplication::translate("UserWindow", "\345\210\267\346\226\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabMyGoods), QCoreApplication::translate("UserWindow", "\346\210\221\347\232\204\350\275\246\346\254\241", nullptr));
        menu->setTitle(QCoreApplication::translate("UserWindow", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserWindow: public Ui_UserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
