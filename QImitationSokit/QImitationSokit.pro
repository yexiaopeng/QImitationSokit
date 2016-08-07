#-------------------------------------------------
#
# Project created by QtCreator 2016-08-06T14:01:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QImitationSokit
TEMPLATE = app


SOURCES += \
    src/main.cpp \
    src/qimitationsokit.cpp \
    src/clientform/clientform.cpp \
    src/setting.cpp \
    src/serverform/serverform.cpp

HEADERS  += \
    src/qimitationsokit.h \
    src/clientform/clientform.h \
    src/setting.h \
    src/serverform/serverform.h

FORMS += \
    src/clientform/clientform.ui \
    src/serverform/serverform.ui

DISTFILES += \
    ../README.md
