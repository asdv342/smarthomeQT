#-------------------------------------------------
#
# Project created by QtCreator 2019-11-01T18:31:04
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT       += script
QT       += sql

TARGET = smarthome
TEMPLATE = app
LIBS+=./lib-SmartHomeGateway-X86-V4.so


SOURCES += main.cpp\
        dialog.cpp \
    qextserialport_unix.cpp \
    qextserialport.cpp \
    serilportthread.cpp \
    login.cpp \
    zhuce.cpp

HEADERS  += dialog.h \
    VariableDefinition.h \
    tcpserver.h \
    tcpclientthread.h \
    systemConfig.h \
    sql.h \
    serialportreceive.h \
    serialdatahandle.h \
    qextserialport_p.h \
    qextserialport_global.h \
    qextserialport.h \
    jsonsendhandle.h \
    jsonreceivehandle.h \
    cjson.h \
    serilportthread.h \
    login.h \
    zhuce.h

FORMS    += dialog.ui \
    login.ui \
    zhuce.ui

RESOURCES += \
    a.qrc
