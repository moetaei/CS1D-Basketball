QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

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
    admin.cpp \
    arenas.cpp \
    bfs.cpp \
    city.cpp \
    citytocity.cpp \
    coaches.cpp \
    conference.cpp \
    confirmcustom2.cpp \
    confirmdenver.cpp \
    confirmdetroit.cpp \
    data.cpp \
    databasemanager.cpp \
    denverto.cpp \
    dfs.cpp \
    divisions.cpp \
    graph.cpp \
    info.cpp \
    login.cpp \
    main.cpp \
    next.cpp \
    node.cpp \
    option2.cpp \
    uTeams.cpp \
    user.cpp

HEADERS += \
    admin.h \
    arenas.h \
    bfs.h \
    city.h \
    citytocity.h \
    coaches.h \
    conference.h \
    confirmcustom2.h \
    confirmdenver.h \
    confirmdetroit.h \
    data.h \
    databasemanager.h \
    denverto.h \
    dfs.h \
    divisions.h \
    graph.h \
    info.h \
    login.h \
    next.h \
    node.h \
    option2.h \
    uTeams.h \
    user.h

FORMS += \
    admin.ui \
    arenas.ui \
    bfs.ui \
    citytocity.ui \
    coaches.ui \
    conference.ui \
    confirmcustom2.ui \
    confirmdenver.ui \
    confirmdetroit.ui \
    denverto.ui \
    dfs.ui \
    divisions.ui \
    info.ui \
    login.ui \
    mainwindow.ui \
    next.ui \
    option2.ui \
    uTeams.ui \
    user.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../csvFiles/NBA Distances.csv \
    ../csvFiles/NBA Information.csv \
    ../csvFiles/NBA newDistance.csv

RESOURCES += \
    resource.qrc


