#-------------------------------------------------
#
# Project created by QtCreator 2024-01-24T20:26:22
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt_app
TEMPLATE = app


SOURCES += main.cpp\
    appeldialog.cpp \
    carnet.cpp \
    contactdialog.cpp \
    dbconnexion.cpp \
        mainwindow.cpp \
    admindialog.cpp \
    rechdialog.cpp \
    userdialog.cpp

HEADERS  += mainwindow.h \
    admindialog.h \
    appeldialog.h \
    carnet.h \
    contactdialog.h \
    dbconnexion.h \
    rechdialog.h \
    userdialog.h

FORMS    += mainwindow.ui \
    admindialog.ui \
    appeldialog.ui \
    contactdialog.ui \
    rechdialog.ui \
    userdialog.ui
