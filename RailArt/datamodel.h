#ifndef DATAMODEL_H
#define DATAMODEL_H

#include <QString>
#include <QDateTime>

class TrainInfo {
public:
    QString num;
    QString departure;
    QString arrival;
    QDateTime startTime;
    QDateTime endTime;
    double price;

    int duration() const {
        return startTime.secsTo(endTime) / 60;
    }
};

#endif // DATAMODEL_H
