QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Pong
TEMPLATE = app

SOURCES += main.cpp\
    player.cpp \
    enemy.cpp \
    ball.cpp

HEADERS  +=    player.h \
    enemy.h \
    ball.h


