#ifndef TRAINSEARCH_H
#define TRAINSEARCH_H

#include <QWidget>
#include <QMessageBox>
#include "searchresult.h"
#include "dataloader.h"

namespace Ui {
class TrainSearch;
}

class TrainSearch : public QWidget
{
    Q_OBJECT

public:
    explicit TrainSearch(QWidget *parent = nullptr);
    ~TrainSearch();
    void showResultWindow(const QVector<TrainInfo>& results);
    void showTestWindow();

private slots:
    void backButton_clicked();
    void searchButton_clicked();

private:
    Ui::TrainSearch *ui;
    SearchResult* resultWindow = nullptr;
    dataloader dataloader;
};

#endif // TRAINSEARCH_H
