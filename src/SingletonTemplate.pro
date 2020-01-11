TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        DummySingletonTest.cpp \
        main.cpp

HEADERS += \
    DummySingletonTest.hpp \
    Singleton.hpp
