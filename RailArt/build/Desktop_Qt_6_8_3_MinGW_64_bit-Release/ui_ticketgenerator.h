/********************************************************************************
** Form generated from reading UI file 'ticketgenerator.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKETGENERATOR_H
#define UI_TICKETGENERATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TicketGenerator
{
public:

    void setupUi(QWidget *TicketGenerator)
    {
        if (TicketGenerator->objectName().isEmpty())
            TicketGenerator->setObjectName("TicketGenerator");
        TicketGenerator->resize(400, 300);

        retranslateUi(TicketGenerator);

        QMetaObject::connectSlotsByName(TicketGenerator);
    } // setupUi

    void retranslateUi(QWidget *TicketGenerator)
    {
        TicketGenerator->setWindowTitle(QCoreApplication::translate("TicketGenerator", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicketGenerator: public Ui_TicketGenerator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKETGENERATOR_H
