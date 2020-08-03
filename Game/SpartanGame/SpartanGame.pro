QT       += core gui
QT += multimedia

QT += multimediawidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += resources_big
# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bala.cpp \
    checkpoint.cpp \
    cuatro.cpp \
    dos.cpp \
    enemy1.cpp \
    enemy2.cpp \
    enemy3.cpp \
    enemy4.cpp \
    floor.cpp \
    instrucciones.cpp \
    main.cpp \
    mainwindow.cpp \
    mregistro.cpp \
    multiplayer.cpp \
    music.cpp \
    pelican.cpp \
    phantom.cpp \
    scargar.cpp \
    score.cpp \
    solitario.cpp \
    spartan.cpp \
    sregistro.cpp \
    tres.cpp \
    uno.cpp \
    vida.cpp \
    win.cpp

HEADERS += \
    bala.h \
    checkpoint.h \
    cuatro.h \
    dos.h \
    enemy1.h \
    enemy2.h \
    enemy3.h \
    enemy4.h \
    floor.h \
    instrucciones.h \
    mainwindow.h \
    mregistro.h \
    multiplayer.h \
    music.h \
    pelican.h \
    phantom.h \
    scargar.h \
    score.h \
    solitario.h \
    spartan.h \
    sregistro.h \
    tres.h \
    uno.h \
    vida.h \
    win.h

FORMS += \
    cuatro.ui \
    dos.ui \
    instrucciones.ui \
    mainwindow.ui \
    mregistro.ui \
    multiplayer.ui \
    scargar.ui \
    solitario.ui \
    sregistro.ui \
    tres.ui \
    uno.ui \
    win.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    music.qrc \
    pics.qrc
