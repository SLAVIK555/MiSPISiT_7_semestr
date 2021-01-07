QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addnewdetail.cpp \
    addnewgroupp.cpp \
    addnewproject.cpp \
    addnewspetification.cpp \
    auth_window.cpp \
    databaseclass.cpp \
    delselecteddetail.cpp \
    delselectedgroupp.cpp \
    delselectedproject.cpp \
    delselectedspetification.cpp \
    editselectesdetail.cpp \
    main.cpp \
    mainwindow.cpp \
    printselectedproject.cpp \
    printselectedspetification.cpp \
    reg_window.cpp

HEADERS += \
    addnewdetail.h \
    addnewgroupp.h \
    addnewproject.h \
    addnewspetification.h \
    auth_window.h \
    databaseclass.h \
    delselecteddetail.h \
    delselectedgroupp.h \
    delselectedproject.h \
    delselectedspetification.h \
    editselectesdetail.h \
    mainwindow.h \
    printselectedproject.h \
    printselectedspetification.h \
    reg_window.h

FORMS += \
    addnewdetail.ui \
    addnewgroupp.ui \
    addnewproject.ui \
    addnewspetification.ui \
    auth_window.ui \
    delselecteddetail.ui \
    delselectedgroupp.ui \
    delselectedproject.ui \
    delselectedspetification.ui \
    editselectesdetail.ui \
    mainwindow.ui \
    printselectedproject.ui \
    printselectedspetification.ui \
    reg_window.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
