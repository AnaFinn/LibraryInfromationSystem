QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    accountdialog.cpp \
    emaildialog.cpp \
    landingwidget.cpp \
    librarydatabase.cpp \
    main.cpp \
    mainwindow.cpp \
    memberwidget.cpp \
    reservationdialog.cpp \
    signupwidget.cpp

HEADERS += \
    accountdialog.h \
    emaildialog.h \
    landingwidget.h \
    librarydatabase.h \
    mainwindow.h \
    memberwidget.h \
    reservationdialog.h \
    signupwidget.h

FORMS += \
    accountdialog.ui \
    emaildialog.ui \
    landingwidget.ui \
    mainwindow.ui \
    memberwidget.ui \
    reservationdialog.ui \
    signupwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Pics.qrc
