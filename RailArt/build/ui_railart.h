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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RailArt
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RailArt)
    {
        if (RailArt->objectName().isEmpty())
            RailArt->setObjectName("RailArt");
        RailArt->resize(800, 600);
        centralwidget = new QWidget(RailArt);
        centralwidget->setObjectName("centralwidget");
        RailArt->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RailArt);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        RailArt->setMenuBar(menubar);
        statusbar = new QStatusBar(RailArt);
        statusbar->setObjectName("statusbar");
        RailArt->setStatusBar(statusbar);

        retranslateUi(RailArt);

        QMetaObject::connectSlotsByName(RailArt);
    } // setupUi

    void retranslateUi(QMainWindow *RailArt)
    {
        RailArt->setWindowTitle(QCoreApplication::translate("RailArt", "RailArt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RailArt: public Ui_RailArt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAILART_H
