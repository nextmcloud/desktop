
#ifndef OCSYNC_EXPORT_H
#define OCSYNC_EXPORT_H

#ifdef NEXTCLOUD_CSYNC_STATIC_DEFINE
#  define OCSYNC_EXPORT
#  define NEXTCLOUD_CSYNC_NO_EXPORT
#else
#  ifndef OCSYNC_EXPORT
#    ifdef nextcloud_csync_EXPORTS
        /* We are building this library */
#      define OCSYNC_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define OCSYNC_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef NEXTCLOUD_CSYNC_NO_EXPORT
#    define NEXTCLOUD_CSYNC_NO_EXPORT 
#  endif
#endif

#ifndef NEXTCLOUD_CSYNC_DEPRECATED
#  define NEXTCLOUD_CSYNC_DEPRECATED __declspec(deprecated)
#endif

#ifndef NEXTCLOUD_CSYNC_DEPRECATED_EXPORT
#  define NEXTCLOUD_CSYNC_DEPRECATED_EXPORT OCSYNC_EXPORT NEXTCLOUD_CSYNC_DEPRECATED
#endif

#ifndef NEXTCLOUD_CSYNC_DEPRECATED_NO_EXPORT
#  define NEXTCLOUD_CSYNC_DEPRECATED_NO_EXPORT NEXTCLOUD_CSYNC_NO_EXPORT NEXTCLOUD_CSYNC_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef NEXTCLOUD_CSYNC_NO_DEPRECATED
#    define NEXTCLOUD_CSYNC_NO_DEPRECATED
#  endif
#endif

#endif /* OCSYNC_EXPORT_H */
