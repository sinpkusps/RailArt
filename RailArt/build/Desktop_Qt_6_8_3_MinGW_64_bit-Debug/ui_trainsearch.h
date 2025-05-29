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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrainSearch
{
public:
    QPushButton *backButton;

    void setupUi(QWidget *TrainSearch)
    {
        if (TrainSearch->objectName().isEmpty())
            TrainSearch->setObjectName("TrainSearch");
        TrainSearch->resize(400, 300);
        backButton = new QPushButton(TrainSearch);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(0, 0, 80, 30));

        retranslateUi(TrainSearch);

        QMetaObject::connectSlotsByName(TrainSearch);
    } // setupUi

    void retranslateUi(QWidget *TrainSearch)
    {
        TrainSearch->setWindowTitle(QCoreApplication::translate("TrainSearch", "Form", nullptr));
        backButton->setText(QCoreApplication::translate("TrainSearch", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrainSearch: public Ui_TrainSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINSEARCH_H
