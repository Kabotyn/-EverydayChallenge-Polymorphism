TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += C++11

SOURCES += main.cpp \
    include/basket.cpp \
    include/items/butter.cpp \
    include/item.cpp \
    include/items/oil.cpp \
    include/items/tv.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    include/basket.h \
    include/items/butter.h \
    include/item.h \
    include/items/oil.h \
    include/items/tv.h

