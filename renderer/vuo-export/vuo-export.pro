TEMPLATE = app
CONFIG -= app_bundle
CONFIG += console VuoFramework qtGuiIncludes VuoRenderer

VUO_INFO_PLIST = vuo-export-Info.plist
VUO_INFO_PLIST_GENERATED = vuo-export-Info-generated.plist
QMAKE_LFLAGS += -Wl,-sectcreate,__TEXT,__info_plist,$$VUO_INFO_PLIST_GENERATED

include(../../vuo.pri)

SOURCES += vuo-export.cc

INCLUDEPATH += $$ROOT/base
HEADERS += $$ROOT/base/*.hh

LIBS += \
	-rpath @loader_path/. \
	-rpath @loader_path/resources \
	-F../../framework/resources \
	$$ROOT/library/libVuoHeap.dylib \
	-lobjc \
	-framework QtCore \
	-framework QtGui \
	-framework QtWidgets \
	-framework QtPrintSupport

QMAKE_POST_LINK += cp vuo-export ../../framework
