QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets sql

CONFIG += c++11
RC_ICONS += app.ico

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# UID 329101171
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admindialog.cpp \
    config.cpp \
    dbmanager.cpp \
    invitationdialog.cpp \
    logindialog.cpp \
    main.cpp \
    adminwindow.cpp \
    goodsdialog.cpp \
    purchasedialog.cpp \
    rechargedialog.cpp \
    recordationdialog.cpp \
    runtime.cpp \
    searchdialog.cpp \
    ticketgenerator.cpp \
    userdialog.cpp \
    userwindow.cpp

HEADERS += \
    admindialog.h \
    adminwindow.h \
    config.h \
    dbmanager.h \
    invitationdialog.h \
    logindialog.h \
    goodsdialog.h \
    purchasedialog.h \
    rechargedialog.h \
    recordationdialog.h \
    runtime.h \
    searchdialog.h \
    ticketgenerator.h \
    userdialog.h \
    userwindow.h

FORMS += \
    admindialog.ui \
    adminwindow.ui \
    invitationdialog.ui \
    logindialog.ui \
    goodsdialog.ui \
    purchasedialog.ui \
    rechargedialog.ui \
    recordationdialog.ui \
    searchdialog.ui \
    ticketgenerator.ui \
    userdialog.ui \
    userwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    rc.qrc

DESTDIR=$$PWD/bin
