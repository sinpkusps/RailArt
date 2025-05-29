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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TripManager
{
public:
    QPushButton *backButton;

    void setupUi(QWidget *TripManager)
    {
        if (TripManager->objectName().isEmpty())
            TripManager->setObjectName("TripManager");
        TripManager->resize(400, 300);
        backButton = new QPushButton(TripManager);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(0, 0, 80, 30));

        retranslateUi(TripManager);

        QMetaObject::connectSlotsByName(TripManager);
    } // setupUi

    void retranslateUi(QWidget *TripManager)
    {
        TripManager->setWindowTitle(QCoreApplication::translate("TripManager", "Form", nullptr));
        backButton->setText(QCoreApplication::translate("TripManager", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TripManager: public Ui_TripManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIPMANAGER_H
