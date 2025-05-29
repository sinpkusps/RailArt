/********************************************************************************
** Form generated from reading UI file 'railart.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAILART_H
#define UI_RAILART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RailArt
{
public:
    QWidget *centralwidget;
    QPushButton *btnAchievementSystem;
    QPushButton *btnTicketGenerator;
    QPushButton *btnTrainSearch;
    QPushButton *btnTripManager;
    QMenuBar *MainRailArt;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RailArt)
    {
        if (RailArt->objectName().isEmpty())
            RailArt->setObjectName("RailArt");
        RailArt->resize(426, 279);
        RailArt->setMinimumSize(QSize(200, 200));
        RailArt->setMaximumSize(QSize(800, 800));
        centralwidget = new QWidget(RailArt);
        centralwidget->setObjectName("centralwidget");
        btnAchievementSystem = new QPushButton(centralwidget);
        btnAchievementSystem->setObjectName("btnAchievementSystem");
        btnAchievementSystem->setGeometry(QRect(260, 180, 100, 50));
        btnTicketGenerator = new QPushButton(centralwidget);
        btnTicketGenerator->setObjectName("btnTicketGenerator");
        btnTicketGenerator->setGeometry(QRect(260, 110, 100, 50));
        btnTrainSearch = new QPushButton(centralwidget);
        btnTrainSearch->setObjectName("btnTrainSearch");
        btnTrainSearch->setGeometry(QRect(60, 110, 100, 50));
        btnTripManager = new QPushButton(centralwidget);
        btnTripManager->setObjectName("btnTripManager");
        btnTripManager->setGeometry(QRect(60, 180, 100, 50));
        RailArt->setCentralWidget(centralwidget);
        MainRailArt = new QMenuBar(RailArt);
        MainRailArt->setObjectName("MainRailArt");
        MainRailArt->setEnabled(true);
        MainRailArt->setGeometry(QRect(0, 0, 426, 18));
        RailArt->setMenuBar(MainRailArt);
        statusbar = new QStatusBar(RailArt);
        statusbar->setObjectName("statusbar");
        RailArt->setStatusBar(statusbar);

        retranslateUi(RailArt);

        QMetaObject::connectSlotsByName(RailArt);
    } // setupUi

    void retranslateUi(QMainWindow *RailArt)
    {
        RailArt->setWindowTitle(QCoreApplication::translate("RailArt", "RailArt", nullptr));
        btnAchievementSystem->setText(QCoreApplication::translate("RailArt", "\346\210\220\345\260\261\347\263\273\347\273\237", nullptr));
        btnTicketGenerator->setText(QCoreApplication::translate("RailArt", "\350\275\246\347\245\250\347\224\237\346\210\220", nullptr));
        btnTrainSearch->setText(QCoreApplication::translate("RailArt", "\350\275\246\346\254\241\346\237\245\350\257\242", nullptr));
        btnTripManager->setText(QCoreApplication::translate("RailArt", "\350\241\214\347\250\213\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RailArt: public Ui_RailArt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAILART_H
