#-------------------------------------------------
#
# Project created by QtCreator 2014-11-18T23:18:47
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = CPPUnitTesting
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

HEADERS += lib/tddprueba.h \
           test/tddprueba_spec.h \
           lib/segunda.h \
           test/segunda_spec.h \
    lib/nuevas/otramas.h \
    globalConf.h

SOURCES += main.cpp\
           lib/tddprueba.cpp \
           test/tddprueba_spec.cpp \
           lib/segunda.cpp \
           test/segunda_spec.cpp \
    lib/nuevas/otramas.cpp

unix|win32: LIBS += -lcppunit
