#-------------------------------------------------
#
# Project created by QtCreator 2013-11-15T10:52:35
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = E-Mail
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp\
        smtp.cpp

HEADERS  += mainwindow.h\
            smtp.h

FORMS    += mainwindow.ui
