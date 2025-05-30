QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    achievementsystem.cpp \
    dataloader.cpp \
    main.cpp \
    railart.cpp \
    searchresult.cpp \
    ticketadder.cpp \
    ticketgenerator.cpp \
    trainsearch.cpp \
    tripmanager.cpp

HEADERS += \
    achievementsystem.h \
    dataloader.h \
    datamodel.h \
    railart.h \
    searchresult.h \
    ticketadder.h \
    ticketdata.h \
    ticketgenerator.h \
    trainsearch.h \
    tripmanager.h

FORMS += \
    achievementsystem.ui \
    railart.ui \
    searchresult.ui \
    ticketadder.ui \
    ticketgenerator.ui \
    trainsearch.ui \
    tripmanager.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

DISTFILES += \
    resources/data/tickets.json \
    resources/data/trains.csv
