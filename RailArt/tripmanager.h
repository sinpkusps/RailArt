#ifndef TRIPMANAGER_H
#define TRIPMANAGER_H

#include <QWidget>

namespace Ui {
class TripManager;
}

class TripManager : public QWidget
{
    Q_OBJECT

public:
    explicit TripManager(QWidget *parent = nullptr);
    ~TripManager();

private slots:
    void backButton_clicked();

private:
    Ui::TripManager *ui;
};

#endif // TRIPMANAGER_H
