#ifndef LIBDBPRAMDISKQCOM_GLOBAL_H
#define LIBDBPRAMDISKQCOM_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIBDBPRAMDISKQCOM_LIBRARY)
#  define LIBDBPRAMDISKQCOMSHARED_EXPORT Q_DECL_EXPORT
#else
#  define LIBDBPRAMDISKQCOMSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBDBPRAMDISKQCOM_GLOBAL_H
