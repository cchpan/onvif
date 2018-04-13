TEMPLATE = app

TARGET = ../bin/gsoap_device_service

QMAKE_CXXFLAGS += -std=c++11

INCLUDEPATH += ..

LIBS += -L../lib -lgsoap_device_service
LIBS += -lgsoap

SOURCES += \
    main.cpp
