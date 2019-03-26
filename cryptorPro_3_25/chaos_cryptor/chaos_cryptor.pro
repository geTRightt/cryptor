#-------------------------------------------------
#
# Project created by QtCreator 2019-03-25T09:51:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = chaos_cryptor
TEMPLATE = app

SOURCES += main.cpp\
        widget.cpp \
    logindlg.cpp \
    pmainwindow.cpp \
    paradlg.cpp \
    fmainwindow.cpp \
    setdlg.cpp \
    filefoldermainwindow.cpp \
    keyboardlg.cpp

HEADERS  += widget.h \
    logindlg.h \
    pmainwindow.h \
    paradlg.h \
    fmainwindow.h \
    setdlg.h \
    filefoldermainwindow.h \
    keyboardlg.h

FORMS    += widget.ui \
    logindlg.ui \
    pmainwindow.ui \
    paradlg.ui \
    fmainwindow.ui \
    setdlg.ui \
    filefoldermainwindow.ui \
    keyboardlg.ui
