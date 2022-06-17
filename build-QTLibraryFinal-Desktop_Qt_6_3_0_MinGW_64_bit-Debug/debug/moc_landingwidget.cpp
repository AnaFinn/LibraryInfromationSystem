/****************************************************************************
** Meta object code from reading C++ file 'landingwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../QTLibraryFinal/landingwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'landingwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LandingWidget_t {
    const uint offsetsAndSize[22];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_LandingWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_LandingWidget_t qt_meta_stringdata_LandingWidget = {
    {
QT_MOC_LITERAL(0, 13), // "LandingWidget"
QT_MOC_LITERAL(14, 9), // "logInData"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 4), // "name"
QT_MOC_LITERAL(30, 4), // "pswd"
QT_MOC_LITERAL(35, 5), // "email"
QT_MOC_LITERAL(41, 1), // "n"
QT_MOC_LITERAL(43, 14), // "memberLoggedIn"
QT_MOC_LITERAL(58, 10), // "signUpMove"
QT_MOC_LITERAL(69, 15), // "logInValidation"
QT_MOC_LITERAL(85, 13) // "signUpClicked"

    },
    "LandingWidget\0logInData\0\0name\0pswd\0"
    "email\0n\0memberLoggedIn\0signUpMove\0"
    "logInValidation\0signUpClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LandingWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   44,    2, 0x06,    1 /* Public */,
       7,    0,   53,    2, 0x06,    6 /* Public */,
       8,    0,   54,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   55,    2, 0x08,    8 /* Private */,
      10,    0,   56,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LandingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LandingWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->logInData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 1: _t->memberLoggedIn(); break;
        case 2: _t->signUpMove(); break;
        case 3: _t->logInValidation(); break;
        case 4: _t->signUpClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LandingWidget::*)(QString , QString , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LandingWidget::logInData)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LandingWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LandingWidget::memberLoggedIn)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LandingWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LandingWidget::signUpMove)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject LandingWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_LandingWidget.offsetsAndSize,
    qt_meta_data_LandingWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_LandingWidget_t
, QtPrivate::TypeAndForceComplete<LandingWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *LandingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LandingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LandingWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LandingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void LandingWidget::logInData(QString _t1, QString _t2, QString _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LandingWidget::memberLoggedIn()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LandingWidget::signUpMove()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
