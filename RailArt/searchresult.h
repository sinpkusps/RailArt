#ifndef SEARCHRESULT_H
#define SEARCHRESULT_H

#include <QWidget>
#include <QStandardItemModel>
#include "datamodel.h"

namespace Ui {
class SearchResult;
}

class SearchResult : public QWidget
{
    Q_OBJECT

public:
    explicit SearchResult(QWidget *parent = nullptr);
    ~SearchResult();
    void dispalyResults(const QVector<TrainInfo>& results);

signals:
    void back_clicked();

public slots:
    void backButton_clicked();
    void sort_bytime_clicked();
    void sort_byprice_clicked();
    void switchButton_clicked();

private:
    Ui::SearchResult *ui;
    QStandardItemModel *model;
    QVector<TrainInfo> allResults;
    QVector<TrainInfo> currentResults;
    bool showingDirect = true;
    void updateTable();
};

#endif // SEARCHRESULT_H
