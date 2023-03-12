TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        citizen.cpp \
        city.cpp \
        compare.cpp \
        main.cpp \
        postalcodes.cpp

HEADERS += \
    citizen.h \
    city.h \
    compare.h \
    postalcodes.h
