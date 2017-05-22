#-------------------------------------------------
#
# Project created by QtCreator 2017-04-12T17:31:54
#
#-------------------------------------------------

QT       += core gui opengl
LIBS += -lopengl32

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 3dGraphics
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        widget.cpp \
    scene.cpp \
    graph.cpp \
    coordaxes.cpp \
    paraboliccylinder.cpp \
    ellipticparaboloid.cpp \
    ellipticalcylinder.cpp \
    hyperboliccylinder.cpp \
    hyperbolicparaboloid.cpp \
    cone.cpp \
    twosheetedhyperboloid.cpp \
    onesheetedhyperboloid.cpp \
    ellipsoid.cpp \
    result.cpp \
    matchparser.cpp \
    support.cpp

HEADERS  += widget.h \
    scene.h \
    graph.h \
    coordaxes.h \
    paraboliccylinder.h \
    ellipticparaboloid.h \
    ellipticalcylinder.h \
    hyperboliccylinder.h \
    hyperbolicparaboloid.h \
    cone.h \
    twosheetedhyperboloid.h \
    onesheetedhyperboloid.h \
    ellipsoid.h \
    result.h \
    matchparser.h \
    support.h

FORMS    += widget.ui \
    support.ui

STATECHARTS +=
