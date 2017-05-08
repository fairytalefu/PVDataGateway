#-------------------------------------------------
#
# Project created by QtCreator 2017-02-16T10:06:04
#
#-------------------------------------------------

QT       += core gui
QT       += sql
QT       += webkit webkitwidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PVDataGateway
TEMPLATE = app


INCLUDEPATH += /usr/local/include \
                /usr/local/include/opencv \
                /usr/local/include/opencv2

LIBS += /usr/local/lib/libopencv_highgui.so \
        /usr/local/lib/libopencv_core.so    \
        /usr/local/lib/libopencv_*.so

SOURCES += main.cpp\
        mainwindow.cpp \
    historytable.cpp \

HEADERS  += mainwindow.h \
    historytable.h \

FORMS    += mainwindow.ui \
    historytable.ui \

