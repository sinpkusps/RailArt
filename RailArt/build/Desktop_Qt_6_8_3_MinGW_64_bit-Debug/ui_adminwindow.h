/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

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

class Ui_AdminWindow
{
public:
    QAction *actionAccount;
    QAction *actionQuit;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget;
    QWidget *tabUser;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacerUser;
    QGridLayout *gridLayoutUser;
    QPushButton *pushButtonUserAdd;
    QPushButton *pushButtonUserRemove;
    QPushButton *pushButtonUserSearch;
    QPushButton *pushButtonUserRefresh;
    QTableView *tableViewUser;
    QWidget *tabGoods;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacerGoods;
    QGridLayout *gridLayoutGoods;
    QPushButton *pushButtonGoodsAdd;
    QPushButton *pushButtonGoodsRemove;
    QPushButton *pushButtonGoodsSearch;
    QPushButton *pushButtonGoodsRefresh;
    QTableView *tableViewGoods;
    QWidget *tabRecordation;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacerRecordation;
    QGridLayout *gridLayoutRecordation;
    QPushButton *pushButtonRecordationRefresh;
    QPushButton *pushButtonRecordationSearch;
    QTableView *tableViewRecordation;
    QWidget *tabStatistics;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonStatisticsSearch;
    QPushButton *pushButtonStatisticsRefresh;
    QTableView *tableViewStatistics;
    QWidget *tabInvitation;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacerBook_3;
    QPushButton *pushButtonInvitationRefresh;
    QTableView *tableViewInvitation;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName("AdminWindow");
        AdminWindow->resize(1366, 858);
        AdminWindow->setStyleSheet(QString::fromUtf8("#AdminWindow\n"
"{\n"
"  border-image:url(\"://bg.jpg\");\n"
"}"));
        actionAccount = new QAction(AdminWindow);
        actionAccount->setObjectName("actionAccount");
        actionQuit = new QAction(AdminWindow);
        actionQuit->setObjectName("actionQuit");
        centralwidget = new QWidget(AdminWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabUser = new QWidget();
        tabUser->setObjectName("tabUser");
        gridLayout_2 = new QGridLayout(tabUser);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacerUser = new QSpacerItem(975, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacerUser, 0, 0, 1, 1);

        gridLayoutUser = new QGridLayout();
        gridLayoutUser->setObjectName("gridLayoutUser");
        pushButtonUserAdd = new QPushButton(tabUser);
        pushButtonUserAdd->setObjectName("pushButtonUserAdd");
        pushButtonUserAdd->setMinimumSize(QSize(80, 40));

        gridLayoutUser->addWidget(pushButtonUserAdd, 0, 0, 1, 1);

        pushButtonUserRemove = new QPushButton(tabUser);
        pushButtonUserRemove->setObjectName("pushButtonUserRemove");
        pushButtonUserRemove->setMinimumSize(QSize(80, 40));

        gridLayoutUser->addWidget(pushButtonUserRemove, 0, 1, 1, 1);

        pushButtonUserSearch = new QPushButton(tabUser);
        pushButtonUserSearch->setObjectName("pushButtonUserSearch");
        pushButtonUserSearch->setMinimumSize(QSize(80, 40));

        gridLayoutUser->addWidget(pushButtonUserSearch, 0, 2, 1, 1);

        pushButtonUserRefresh = new QPushButton(tabUser);
        pushButtonUserRefresh->setObjectName("pushButtonUserRefresh");
        pushButtonUserRefresh->setMinimumSize(QSize(80, 40));

        gridLayoutUser->addWidget(pushButtonUserRefresh, 0, 3, 1, 1);


        gridLayout_2->addLayout(gridLayoutUser, 0, 1, 1, 1);

        tableViewUser = new QTableView(tabUser);
        tableViewUser->setObjectName("tableViewUser");

        gridLayout_2->addWidget(tableViewUser, 1, 0, 1, 2);

        tabWidget->addTab(tabUser, QString());
        tabGoods = new QWidget();
        tabGoods->setObjectName("tabGoods");
        gridLayout_5 = new QGridLayout(tabGoods);
        gridLayout_5->setObjectName("gridLayout_5");
        horizontalSpacerGoods = new QSpacerItem(975, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacerGoods, 0, 0, 1, 1);

        gridLayoutGoods = new QGridLayout();
        gridLayoutGoods->setObjectName("gridLayoutGoods");
        pushButtonGoodsAdd = new QPushButton(tabGoods);
        pushButtonGoodsAdd->setObjectName("pushButtonGoodsAdd");
        pushButtonGoodsAdd->setMinimumSize(QSize(80, 40));

        gridLayoutGoods->addWidget(pushButtonGoodsAdd, 0, 0, 1, 1);

        pushButtonGoodsRemove = new QPushButton(tabGoods);
        pushButtonGoodsRemove->setObjectName("pushButtonGoodsRemove");
        pushButtonGoodsRemove->setMinimumSize(QSize(80, 40));

        gridLayoutGoods->addWidget(pushButtonGoodsRemove, 0, 1, 1, 1);

        pushButtonGoodsSearch = new QPushButton(tabGoods);
        pushButtonGoodsSearch->setObjectName("pushButtonGoodsSearch");
        pushButtonGoodsSearch->setMinimumSize(QSize(80, 40));

        gridLayoutGoods->addWidget(pushButtonGoodsSearch, 0, 2, 1, 1);

        pushButtonGoodsRefresh = new QPushButton(tabGoods);
        pushButtonGoodsRefresh->setObjectName("pushButtonGoodsRefresh");
        pushButtonGoodsRefresh->setMinimumSize(QSize(80, 40));

        gridLayoutGoods->addWidget(pushButtonGoodsRefresh, 0, 3, 1, 1);


        gridLayout_5->addLayout(gridLayoutGoods, 0, 1, 1, 1);

        tableViewGoods = new QTableView(tabGoods);
        tableViewGoods->setObjectName("tableViewGoods");

        gridLayout_5->addWidget(tableViewGoods, 1, 0, 1, 2);

        tabWidget->addTab(tabGoods, QString());
        tabRecordation = new QWidget();
        tabRecordation->setObjectName("tabRecordation");
        gridLayout_7 = new QGridLayout(tabRecordation);
        gridLayout_7->setObjectName("gridLayout_7");
        horizontalSpacerRecordation = new QSpacerItem(975, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacerRecordation, 0, 0, 1, 1);

        gridLayoutRecordation = new QGridLayout();
        gridLayoutRecordation->setObjectName("gridLayoutRecordation");
        pushButtonRecordationRefresh = new QPushButton(tabRecordation);
        pushButtonRecordationRefresh->setObjectName("pushButtonRecordationRefresh");
        pushButtonRecordationRefresh->setMinimumSize(QSize(80, 40));

        gridLayoutRecordation->addWidget(pushButtonRecordationRefresh, 0, 1, 1, 1);

        pushButtonRecordationSearch = new QPushButton(tabRecordation);
        pushButtonRecordationSearch->setObjectName("pushButtonRecordationSearch");
        pushButtonRecordationSearch->setMinimumSize(QSize(80, 40));

        gridLayoutRecordation->addWidget(pushButtonRecordationSearch, 0, 0, 1, 1);


        gridLayout_7->addLayout(gridLayoutRecordation, 0, 1, 1, 1);

        tableViewRecordation = new QTableView(tabRecordation);
        tableViewRecordation->setObjectName("tableViewRecordation");

        gridLayout_7->addWidget(tableViewRecordation, 1, 0, 1, 2);

        tabWidget->addTab(tabRecordation, QString());
        tabStatistics = new QWidget();
        tabStatistics->setObjectName("tabStatistics");
        gridLayout = new QGridLayout(tabStatistics);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(1147, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonStatisticsSearch = new QPushButton(tabStatistics);
        pushButtonStatisticsSearch->setObjectName("pushButtonStatisticsSearch");
        pushButtonStatisticsSearch->setMinimumSize(QSize(80, 40));

        horizontalLayout->addWidget(pushButtonStatisticsSearch);

        pushButtonStatisticsRefresh = new QPushButton(tabStatistics);
        pushButtonStatisticsRefresh->setObjectName("pushButtonStatisticsRefresh");
        pushButtonStatisticsRefresh->setMinimumSize(QSize(80, 40));

        horizontalLayout->addWidget(pushButtonStatisticsRefresh);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        tableViewStatistics = new QTableView(tabStatistics);
        tableViewStatistics->setObjectName("tableViewStatistics");

        gridLayout->addWidget(tableViewStatistics, 1, 0, 1, 2);

        tabWidget->addTab(tabStatistics, QString());
        tabInvitation = new QWidget();
        tabInvitation->setObjectName("tabInvitation");
        gridLayout_4 = new QGridLayout(tabInvitation);
        gridLayout_4->setObjectName("gridLayout_4");
        horizontalSpacerBook_3 = new QSpacerItem(1235, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacerBook_3, 0, 0, 1, 1);

        pushButtonInvitationRefresh = new QPushButton(tabInvitation);
        pushButtonInvitationRefresh->setObjectName("pushButtonInvitationRefresh");
        pushButtonInvitationRefresh->setMinimumSize(QSize(80, 40));

        gridLayout_4->addWidget(pushButtonInvitationRefresh, 0, 1, 1, 1);

        tableViewInvitation = new QTableView(tabInvitation);
        tableViewInvitation->setObjectName("tableViewInvitation");
        tableViewInvitation->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(tableViewInvitation, 1, 0, 1, 2);

        tabWidget->addTab(tabInvitation, QString());

        gridLayout_3->addWidget(tabWidget, 0, 0, 1, 1);

        AdminWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1366, 18));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        AdminWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminWindow);
        statusbar->setObjectName("statusbar");
        AdminWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionAccount);
        menu->addSeparator();
        menu->addAction(actionQuit);

        retranslateUi(AdminWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminWindow)
    {
        AdminWindow->setWindowTitle(QString());
        actionAccount->setText(QCoreApplication::translate("AdminWindow", "\350\264\246\346\210\267\344\277\241\346\201\257(&U)", nullptr));
        actionQuit->setText(QCoreApplication::translate("AdminWindow", "\351\200\200\345\207\272(&Q)", nullptr));
        pushButtonUserAdd->setText(QCoreApplication::translate("AdminWindow", "\346\267\273\345\212\240", nullptr));
        pushButtonUserRemove->setText(QCoreApplication::translate("AdminWindow", "\345\210\240\351\231\244", nullptr));
        pushButtonUserSearch->setText(QCoreApplication::translate("AdminWindow", "\346\237\245\350\257\242", nullptr));
        pushButtonUserRefresh->setText(QCoreApplication::translate("AdminWindow", "\345\210\267\346\226\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabUser), QCoreApplication::translate("AdminWindow", "\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
        pushButtonGoodsAdd->setText(QCoreApplication::translate("AdminWindow", "\346\267\273\345\212\240", nullptr));
        pushButtonGoodsRemove->setText(QCoreApplication::translate("AdminWindow", "\345\210\240\351\231\244", nullptr));
        pushButtonGoodsSearch->setText(QCoreApplication::translate("AdminWindow", "\346\237\245\350\257\242", nullptr));
        pushButtonGoodsRefresh->setText(QCoreApplication::translate("AdminWindow", "\345\210\267\346\226\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabGoods), QCoreApplication::translate("AdminWindow", "\346\211\200\346\234\211\350\275\246\346\254\241", nullptr));
        pushButtonRecordationRefresh->setText(QCoreApplication::translate("AdminWindow", "\345\210\267\346\226\260", nullptr));
        pushButtonRecordationSearch->setText(QCoreApplication::translate("AdminWindow", "\346\237\245\350\257\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabRecordation), QCoreApplication::translate("AdminWindow", "\350\256\242\345\215\225\350\256\260\345\275\225", nullptr));
        pushButtonStatisticsSearch->setText(QCoreApplication::translate("AdminWindow", "\346\237\245\350\257\242", nullptr));
        pushButtonStatisticsRefresh->setText(QCoreApplication::translate("AdminWindow", "\345\210\267\346\226\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabStatistics), QCoreApplication::translate("AdminWindow", "\345\224\256\347\245\250\347\273\237\350\256\241", nullptr));
        pushButtonInvitationRefresh->setText(QCoreApplication::translate("AdminWindow", "\345\210\267\346\226\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabInvitation), QCoreApplication::translate("AdminWindow", "\345\217\215\351\246\210\344\277\241\346\201\257", nullptr));
        menu->setTitle(QCoreApplication::translate("AdminWindow", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
