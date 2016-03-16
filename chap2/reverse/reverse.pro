TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

HEADERS += \
    reverse.h

QMAKE_CXXFLAGS += -std=gnu++0x

