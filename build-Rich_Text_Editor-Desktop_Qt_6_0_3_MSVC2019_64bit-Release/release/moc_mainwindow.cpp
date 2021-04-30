/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Rich_Text_Editor/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[38];
    char stringdata0[438];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(34, 0), // ""
QT_MOC_LITERAL(35, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(59, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(83, 23), // "on_actionCopy_triggered"
QT_MOC_LITERAL(107, 24), // "on_actionPrint_triggered"
QT_MOC_LITERAL(132, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(156, 22), // "on_actionCut_triggered"
QT_MOC_LITERAL(179, 24), // "on_actionPaste_triggered"
QT_MOC_LITERAL(204, 26), // "on_actionZoom_In_triggered"
QT_MOC_LITERAL(231, 27), // "on_actionZoom_Out_triggered"
QT_MOC_LITERAL(259, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(284, 23), // "on_actionBold_triggered"
QT_MOC_LITERAL(308, 25), // "on_actionItalic_triggered"
QT_MOC_LITERAL(334, 28), // "on_actionUnderline_triggered"
QT_MOC_LITERAL(363, 23), // "on_actionFont_triggered"
QT_MOC_LITERAL(387, 24), // "on_actionColor_triggered"
QT_MOC_LITERAL(412, 25) // "on_actionSave_2_triggered"

    },
    "MainWindow\0on_actionNew_triggered\0\0"
    "on_actionOpen_triggered\0on_actionSave_triggered\0"
    "on_actionCopy_triggered\0"
    "on_actionPrint_triggered\0"
    "on_actionExit_triggered\0on_actionCut_triggered\0"
    "on_actionPaste_triggered\0"
    "on_actionZoom_In_triggered\0"
    "on_actionZoom_Out_triggered\0"
    "on_actionAbout_triggered\0"
    "on_actionBold_triggered\0"
    "on_actionItalic_triggered\0"
    "on_actionUnderline_triggered\0"
    "on_actionFont_triggered\0"
    "on_actionColor_triggered\0"
    "on_actionSave_2_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x08,    0 /* Private */,
       3,    0,  117,    2, 0x08,    1 /* Private */,
       4,    0,  118,    2, 0x08,    2 /* Private */,
       5,    0,  119,    2, 0x08,    3 /* Private */,
       6,    0,  120,    2, 0x08,    4 /* Private */,
       7,    0,  121,    2, 0x08,    5 /* Private */,
       8,    0,  122,    2, 0x08,    6 /* Private */,
       9,    0,  123,    2, 0x08,    7 /* Private */,
      10,    0,  124,    2, 0x08,    8 /* Private */,
      11,    0,  125,    2, 0x08,    9 /* Private */,
      12,    0,  126,    2, 0x08,   10 /* Private */,
      13,    0,  127,    2, 0x08,   11 /* Private */,
      14,    0,  128,    2, 0x08,   12 /* Private */,
      15,    0,  129,    2, 0x08,   13 /* Private */,
      16,    0,  130,    2, 0x08,   14 /* Private */,
      17,    0,  131,    2, 0x08,   15 /* Private */,
      18,    0,  132,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionNew_triggered(); break;
        case 1: _t->on_actionOpen_triggered(); break;
        case 2: { bool _r = _t->on_actionSave_triggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->on_actionCopy_triggered(); break;
        case 4: _t->on_actionPrint_triggered(); break;
        case 5: _t->on_actionExit_triggered(); break;
        case 6: _t->on_actionCut_triggered(); break;
        case 7: _t->on_actionPaste_triggered(); break;
        case 8: _t->on_actionZoom_In_triggered(); break;
        case 9: _t->on_actionZoom_Out_triggered(); break;
        case 10: _t->on_actionAbout_triggered(); break;
        case 11: _t->on_actionBold_triggered(); break;
        case 12: _t->on_actionItalic_triggered(); break;
        case 13: _t->on_actionUnderline_triggered(); break;
        case 14: _t->on_actionFont_triggered(); break;
        case 15: _t->on_actionColor_triggered(); break;
        case 16: { bool _r = _t->on_actionSave_2_triggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
