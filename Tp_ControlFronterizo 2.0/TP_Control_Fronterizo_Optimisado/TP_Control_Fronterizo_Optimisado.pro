QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aldeano.cpp \
    controlfronteriso.cpp \
    diplomatico.cpp \
    main.cpp \
    mainwindow.cpp \
    nivel.cpp \
    persona.cpp \
    refugiadopolitico.cpp \
    revolucionario.cpp

HEADERS += \
    aldeano.h \
    controlfronteriso.h \
    diplomatico.h \
    mainwindow.h \
    nivel.h \
    persona.h \
    refugiadopolitico.h \
    revolucionario.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
