#ifndef DATALOADER_H
#define DATALOADER_H

#include <QObject>
#include <QVector>
#include "datamodel.h"

class dataloader : public QObject {
    Q_OBJECT
public:
    explicit dataloader(QObject *parent = nullptr);
    bool loadFromCSV(const QString& filePath);
    QVector<TrainInfo> search(const QString& from, const QString& to) const;
    // 查找
    QVector<TrainInfo> getAll() const {return data;}
    // 返回全部的车次
    QVector<TrainInfo> findTransferRoutes(const QString &from, const QString &to, int minTransferTime = 1800) const;
    // 查找中转车次

private:
    QVector<TrainInfo> data;
};

#endif // DATALOADER_H
