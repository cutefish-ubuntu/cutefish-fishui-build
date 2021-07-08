
#ifndef FISHUI_EXPORT_H
#define FISHUI_EXPORT_H

#ifdef FISHUI_STATIC_DEFINE
#  define FISHUI_EXPORT
#  define FISHUI_NO_EXPORT
#else
#  ifndef FISHUI_EXPORT
#    ifdef FishUI_EXPORTS
        /* We are building this library */
#      define FISHUI_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define FISHUI_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef FISHUI_NO_EXPORT
#    define FISHUI_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef FISHUI_DEPRECATED
#  define FISHUI_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef FISHUI_DEPRECATED_EXPORT
#  define FISHUI_DEPRECATED_EXPORT FISHUI_EXPORT FISHUI_DEPRECATED
#endif

#ifndef FISHUI_DEPRECATED_NO_EXPORT
#  define FISHUI_DEPRECATED_NO_EXPORT FISHUI_NO_EXPORT FISHUI_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef FISHUI_NO_DEPRECATED
#    define FISHUI_NO_DEPRECATED
#  endif
#endif

#endif /* FISHUI_EXPORT_H */
