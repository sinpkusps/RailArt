#ifndef TRAINSEARCH_H
#define TRAINSEARCH_H

#include <QWidget>

namespace Ui {
class TrainSearch;
}

class TrainSearch : public QWidget
{
    Q_OBJECT

public:
    explicit TrainSearch(QWidget *parent = nullptr);
    ~TrainSearch();

private slots:
    void backButton_clicked();

private:
    Ui::TrainSearch *ui;
};

#endif // TRAINSEARCH_H
