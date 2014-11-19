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

HEADERS += lib/tdd/tddprueba.h \
           test/tddprueba_spec.h \
           lib/tdd/segunda.h \
           test/segunda_spec.h \
           lib/globalConf.h

SOURCES += lib/main.cpp\
           lib/tdd/tddprueba.cpp \
           test/tddprueba_spec.cpp \
           lib/tdd/segunda.cpp \
           test/segunda_spec.cpp \

unix|win32: LIBS += -lcppunit
