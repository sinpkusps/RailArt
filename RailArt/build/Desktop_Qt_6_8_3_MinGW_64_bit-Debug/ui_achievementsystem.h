/********************************************************************************
** Form generated from reading UI file 'achievementsystem.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACHIEVEMENTSYSTEM_H
#define UI_ACHIEVEMENTSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AchievementSystem
{
public:
    QPushButton *backButton;

    void setupUi(QWidget *AchievementSystem)
    {
        if (AchievementSystem->objectName().isEmpty())
            AchievementSystem->setObjectName("AchievementSystem");
        AchievementSystem->resize(400, 300);
        backButton = new QPushButton(AchievementSystem);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(0, 0, 80, 30));

        retranslateUi(AchievementSystem);

        QMetaObject::connectSlotsByName(AchievementSystem);
    } // setupUi

    void retranslateUi(QWidget *AchievementSystem)
    {
        AchievementSystem->setWindowTitle(QCoreApplication::translate("AchievementSystem", "Form", nullptr));
        backButton->setText(QCoreApplication::translate("AchievementSystem", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AchievementSystem: public Ui_AchievementSystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACHIEVEMENTSYSTEM_H
