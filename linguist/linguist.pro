#-------------------------------------------------
#
# Project created by QtCreator 2013-04-30T09:57:18
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = linguist
TEMPLATE = app

SOURCES += main.cpp mainwindow.cpp dialogabout.cpp \
    dialoggrammaranalyzer.cpp

HEADERS  += mainwindow.h dialogabout.h \
    dialoggrammaranalyzer.h

FORMS    += mainwindow.ui dialogabout.ui \
    dialoggrammaranalyzer.ui
