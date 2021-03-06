#-------------------------------------------------
#
# Project created by QtCreator 2018-03-03T14:57:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS


# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h
FORMS += \
        mainwindow.ui


DISTFILES += \
    .astylerc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../Lab3_library/build-lab3_prost-Desktop/release/ -llab3_prost
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../Lab3_library/build-lab3_prost-Desktop/debug/ -llab3_prost
else:unix: LIBS += -L$$PWD/../../Lab3_library/build-lab3_prost-Desktop/ -llab3_prost

INCLUDEPATH += $$PWD/../../Lab3_library/lab3_prost
DEPENDPATH += $$PWD/../../Lab3_library/lab3_prost

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../Lab3_library/build-lab3_prost-Desktop/release/liblab3_prost.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../Lab3_library/build-lab3_prost-Desktop/debug/liblab3_prost.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../Lab3_library/build-lab3_prost-Desktop/release/lab3_prost.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../Lab3_library/build-lab3_prost-Desktop/debug/lab3_prost.lib
else:unix: PRE_TARGETDEPS += $$PWD/../../Lab3_library/build-lab3_prost-Desktop/liblab3_prost.a
