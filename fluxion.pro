#-------------------------------------------------
#
# Project created by QtCreator 2012-09-25T01:07:33
#
#-------------------------------------------------

QT       += core gui

TEMPLATE = app
TARGET = fluxion
DEPENDPATH += . resources src
INCLUDEPATH += .
CONFIG += console


SOURCES += src/main.cpp\
        src/fluxion.cpp \
    src/pages.cpp \
    src/edition.cpp \
    src/marquee.cpp \
    src/soft.cpp \
    src/audiocontrols.cpp \
    src/QCommandLinkButtonModified.cpp

HEADERS  += src/fluxion.hpp \
    src/pages.hpp \
    src/edition.hpp \
    src/marquee.hpp \
    src/soft.hpp \
    src/audiocontrols.hpp \
    src/QCommandLinkButtonModified.hpp

RESOURCES += resources/resources.qrc
