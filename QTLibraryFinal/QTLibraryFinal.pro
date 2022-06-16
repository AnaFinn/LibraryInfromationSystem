QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bookinfowidget.cpp \
    landingwidget.cpp \
    librarydatabase.cpp \
    main.cpp \
    mainwindow.cpp \
    signupwidget.cpp

HEADERS += \
    bookinfowidget.h \
    landingwidget.h \
    librarydatabase.h \
    mainwindow.h \
    signupwidget.h

FORMS += \
    bookinfowidget.ui \
    landingwidget.ui \
    mainwindow.ui \
    signupwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
