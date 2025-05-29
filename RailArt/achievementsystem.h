#ifndef ACHIEVEMENTSYSTEM_H
#define ACHIEVEMENTSYSTEM_H

#include <QWidget>

namespace Ui {
class AchievementSystem;
}

class AchievementSystem : public QWidget
{
    Q_OBJECT

public:
    explicit AchievementSystem(QWidget *parent = nullptr);
    ~AchievementSystem();

private slots:
    void backButton_clicked();

private:
    Ui::AchievementSystem *ui;
};

#endif // ACHIEVEMENTSYSTEM_H
