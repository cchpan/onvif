TEMPLATE = lib

TARGET = ../lib/gsoap_device_service

DEFINES += WITH_PURE_VIRTUAL

QMAKE_CXXFLAGS += -std=c++11

INCLUDEPATH += /usr/share/gsoap/custom
INCLUDEPATH += /usr/share/gsoap/import
INCLUDEPATH += /usr/share/gsoap/plugin
INCLUDEPATH += /usr/share/gsoap/WS


HEADERS += \
    soapDisplayBindingService.h \
    soapDeviceIOBindingService.h \
    soapDeviceBindingService.h \
    soapH.h \
    soapStub.h \
    duration.h

SOURCES += \
    soapDisplayBindingService.cpp \
    soapDeviceIOBindingService.cpp \
    soapDeviceBindingService.cpp \
    soapC.cpp \
    duration.cpp \

OTHER_FILES += \
    DisplayBinding.nsmap \
    DeviceIOBinding.nsmap \
    DeviceBinding.nsmap





