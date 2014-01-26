#-------------------------------------------------
#
# Project created by QtCreator 2014-01-25T21:14:40
#
#-------------------------------------------------

QT       += core network

QT       -= gui

TARGET = space
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    space.pb.cc \
    network.cpp \
    world.cpp

HEADERS += \
    space.pb.h \
    network.h \
    world.h

LIBS += -lprotobuf

QMAKE_CXXFLAGS += -std=c++0x
