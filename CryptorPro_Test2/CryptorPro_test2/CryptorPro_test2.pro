#-------------------------------------------------
#
# Project created by QtCreator 2019-03-12T15:59:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CryptorPro_test2
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    logindlg.cpp \
    pmainwindow.cpp \
    paradlg.cpp \
    fmainwindow.cpp \
    setdlg.cpp \
    filefoldermainwindow.cpp

HEADERS  += widget.h \
    logindlg.h \
    pmainwindow.h \
    paradlg.h \
    fmainwindow.h \
    setdlg.h \
    filefoldermainwindow.h

FORMS    += widget.ui \
    logindlg.ui \
    pmainwindow.ui \
    paradlg.ui \
    fmainwindow.ui \
    setdlg.ui \
    filefoldermainwindow.ui

INCLUDEPATH += /usr/local/include \
               /usr/local/include/opencv\
               /usr/local/include/opencv2

LIBS += /usr/local/lib/libopencv_highgui.so \
        /usr/local/lib/libopencv_core.so \
        /usr/local/lib/libopencv_imgproc.so \
        /usr/local/lib/libopencv_features2d.so \
        /usr/local/lib/libopencv_calib3d.so
