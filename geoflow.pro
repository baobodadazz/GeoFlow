#-------------------------------------------------
#
# Project created by QtCreator 2023-04-28T9:23:11
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET          = styledemo
TEMPLATE        = app
MOC_DIR         = temp/moc
RCC_DIR         = temp/rcc
UI_DIR          = temp/ui
OBJECTS_DIR     = temp/obj
DESTDIR         = bin
win32:RC_FILE   = other/main.rc
PRECOMPILED_HEADER  = head.h

INCLUDEPATH     += $$PWD
CONFIG          += qt warn_off

SOURCES += main.cpp\
    global.cpp \
    quicreator.cpp \      
    dialog_camset.cpp \
    dialog_coordinatemapping.cpp \
    dialog_densifypointcloudcreate.cpp \
    dialog_automake.cpp \
    dialog_featurematch.cpp \
    dialog_pointinfo.cpp \
    dialog_reconstructmesh.cpp \
    dialog_sfmpointcloudcreate.cpp \
    dialog_texturemesh.cpp

HEADERS  += head.h\
    global.h \
    quicreator.h \      
    dialog_camset.h \
    dialog_coordinatemapping.h \
    dialog_densifypointcloudcreate.h \
    dialog_automake.h \
    dialog_featurematch.h \
    dialog_pointinfo.h \
    dialog_reconstructmesh.h \
    dialog_sfmpointcloudcreate.h \
    dialog_texturemesh.h

FORMS    += \
    quicreator.ui \
    dialog_camset.ui \
    dialog_coordinatemapping.ui \
    dialog_densifypointcloudcreate.ui \
    dialog_automake.ui \
    dialog_featurematch.ui \
    dialog_pointinfo.ui \
    dialog_reconstructmesh.ui \
    dialog_sfmpointcloudcreate.ui \
    dialog_texturemesh.ui

RESOURCES += \
    other/qss.qrc \
    other/main.qrc
