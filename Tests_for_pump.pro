TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG += qt

QT += core

PROJECT_ROOT_PATH = $${PWD}/
INC_PATH = $${PROJECT_ROOT_PATH}/include
IMPORT_PATH = $${PROJECT_ROOT_PATH}/struct_mapping/
SOURCE_PATH = $${PROJECT_ROOT_PATH}/src

INCLUDEPATH += \
    $${INC_PATH}/
    $${IMPORT_PATH}/

SOURCES += \
    $${SOURCE_PATH}/pump.cpp \
    $${SOURCE_PATH}/main.cpp

HEADERS += \
    $${INC_PATH}/pump.h

linux-g++: QMAKE_CXXFLAGS += -std=c++17
