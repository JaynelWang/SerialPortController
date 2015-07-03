#-------------------------------------------------
#
# Project created by QtCreator 2015-05-22T14:09:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += serialport

TARGET = SerialPortController
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    serialportcontroller.cpp

HEADERS  += mainwindow.h \
    serialportcontroller.h

FORMS    += mainwindow.ui
