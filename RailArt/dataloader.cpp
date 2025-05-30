#include "dataloader.h"
#include <QFile>
#include <QTextStream>

dataloader::dataloader(QObject* parent) : QObject(parent) {}

bool dataloader::loadFromCSV(const QString &filePath) {
    QFile file(filePath);
    if(!file.open(QIODevice::ReadOnly)) return false;

    QTextStream in(&file);
    while(!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(",");
        if(fields.size() >= 6) {
            TrainInfo info;
            info.num = fields[0];
            info.departure = fields[1];
            info.arrival = fields[2];
            info.startTime = QDateTime::fromString(fields[3], "yyyy-MM-dd hh:mm");
            info.endTime = QDateTime::fromString(fields[4], "yyyy-MM-dd hh:mm");
            info.price = fields[5].toDouble();
            data.append(info);
        }
    }
    return true;
}

QVector<TrainInfo> dataloader::search(const QString& from, const QString& to) const {
    QVector<TrainInfo> results;
    for(const auto&train : data) {
        if(train.departure == from && train.arrival == to) {
            results.append(train);
        }
    }
    return results;
}

QVector<TrainInfo> dataloader::findTransferRoutes(const QString &from, const QString &to, int minTransferTime) const {
    QVector<TrainInfo> results;

    QVector<TrainInfo> firstLegTrains;
    for (const auto &train : data) {
        if (train.departure == from && train.arrival != to) {
            firstLegTrains.append(train);
        }
    }

    for(const TrainInfo& firstTrain : firstLegTrains) {
        QString transferStation = firstTrain.arrival;
        for(const TrainInfo& secondTrain : data) {
            if(secondTrain.departure == transferStation &&
                secondTrain.arrival == to &&
                secondTrain.startTime >= firstTrain.endTime.addSecs(minTransferTime)) {

                TrainInfo transferRoute;
                transferRoute.num = QString("%1->%2").arg(firstTrain.num).arg(secondTrain.num);
                transferRoute.departure = from;
                transferRoute.arrival = to;
                transferRoute.startTime = firstTrain.startTime;
                transferRoute.endTime = secondTrain.endTime;
                transferRoute.price = firstTrain.price + secondTrain.price;
                results.append(transferRoute);
            }
        }
    }
    return  results;
}
