#ifndef SQUAREPINE_TIFF_CONF_H
#define SQUAREPINE_TIFF_CONF_H

/* Signed 16-bit type */
#define TIFF_INT16_T int16_t

/* Signed 32-bit type */
#define TIFF_INT32_T int32_t

/* Signed 64-bit type */
#define TIFF_INT64_T int64_t

/* Signed 8-bit type */
#define TIFF_INT8_T int8_t

/* Unsigned 16-bit type */
#define TIFF_UINT16_T uint16_t

/* Unsigned 32-bit type */
#define TIFF_UINT32_T uint32_t

/* Unsigned 64-bit type */
#define TIFF_UINT64_T uint64_t

/* Unsigned 8-bit type */
#define TIFF_UINT8_T uint8_t

/* Signed size type */
#define TIFF_SSIZE_T int64_t

/* Compatibility stuff. */

/* Define as 0 or 1 according to the floating point format supported by the
   machine */
#define HAVE_IEEEFP 1

/* Set the native cpu bit order (FILLORDER_LSB2MSB or FILLORDER_MSB2LSB) */
#define HOST_FILLORDER FILLORDER_LSB2MSB

/* Native cpu byte order: 1 if big-endian (Motorola) or 0 if little-endian
   (Intel) */
#define HOST_BIGENDIAN 0

/* Support CCITT Group 3 & 4 algorithms */
#define CCITT_SUPPORT 1

/* Support JPEG compression (requires IJG JPEG library) */
/* #undef JPEG_SUPPORT */

/* Support JBIG compression (requires JBIG-KIT library) */
/* #undef JBIG_SUPPORT */

/* Support LERC compression */
/* #undef LERC_SUPPORT */

/* Support LogLuv high dynamic range encoding */
#define LOGLUV_SUPPORT 1

/* Support LZW algorithm */
#define LZW_SUPPORT 1

/* Support NeXT 2-bit RLE algorithm */
#define NEXT_SUPPORT 1

/* Support Old JPEG compresson (read contrib/ojpeg/README first! Compilation
   fails with unpatched IJG JPEG library) */
/* #undef OJPEG_SUPPORT */

/* Support Macintosh PackBits algorithm */
#define PACKBITS_SUPPORT 1

/* Support Pixar log-format algorithm (requires Zlib) */
/* #undef PIXARLOG_SUPPORT */

/* Support ThunderScan 4-bit RLE algorithm */
#define THUNDER_SUPPORT 1

/* Support Deflate compression */
/* #undef ZIP_SUPPORT */

/* Support libdeflate enhanced compression */
/* #undef LIBDEFLATE_SUPPORT */

/* Support strip chopping (whether or not to convert single-strip uncompressed
   images to multiple strips of ~8Kb to reduce memory usage) */
#define STRIPCHOP_DEFAULT TIFF_STRIPCHOP

/* Enable SubIFD tag (330) support */
#define SUBIFD_SUPPORT 1

/* Treat extra sample as alpha (default enabled). The RGBA interface will
   treat a fourth sample with no EXTRASAMPLE_ value as being ASSOCALPHA. Many
   packages produce RGBA files but don't mark the alpha properly. */
#define DEFAULT_EXTRASAMPLE_AS_ALPHA 1

/* Pick up YCbCr subsampling info from the JPEG data stream to support files
   lacking the tag (default enabled). */
#define CHECK_JPEG_YCBCR_SUBSAMPLING 1

/* Support MS MDI magic number files as TIFF */
#define MDI_SUPPORT 1

/*
 * Feature support definitions.
 * XXX: These macros are obsoleted. Don't use them in your apps!
 * Macros stays here for backward compatibility and should be always defined.
 */
#define COLORIMETRY_SUPPORT 1
#define YCBCR_SUPPORT 1
#define CMYK_SUPPORT 1
#define ICC_SUPPORT 1
#define PHOTOSHOP_SUPPORT 1
#define IPTC_SUPPORT 1

/* Support CCITT Group 3 & 4 algorithms */
#define CCITT_SUPPORT 1

/* Pick up YCbCr subsampling info from the JPEG data stream to support files
   lacking the tag (default enabled). */
#define CHECK_JPEG_YCBCR_SUBSAMPLING 1

/* enable partial strip reading for large strips (experimental) */
/* #undef CHUNKY_STRIP_READ_SUPPORT */

/* Support C++ stream API (requires C++ compiler) */
#define CXX_SUPPORT 1

/* enable deferred strip/tile offset/size loading (experimental) */
/* #undef DEFER_STRILE_LOAD */

/* Define to 1 if you have the <assert.h> header file. */
#define HAVE_ASSERT_H 1

/* Define to 1 if you have the declaration of `optarg', and to 0 if you don't. */
/* #undef HAVE_DECL_OPTARG */

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
/* #undef HAVE_FSEEKO */

/* Define to 1 if you have the `getopt' function. */
/* #undef HAVE_GETOPT */

/* Define to 1 if you have the <GLUT/glut.h> header file. */
/* #undef HAVE_GLUT_GLUT_H */

/* Define to 1 if you have the <GL/glut.h> header file. */
/* #undef HAVE_GL_GLUT_H */

/* Define to 1 if you have the <GL/glu.h> header file. */
/* #undef HAVE_GL_GLU_H */

/* Define to 1 if you have the <GL/gl.h> header file. */
/* #undef HAVE_GL_GL_H */

/* Define to 1 if you have the <io.h> header file. */
#define HAVE_IO_H 1

/* Define to 1 if you have the `jbg_newlen' function. */
/* #undef HAVE_JBG_NEWLEN */

/* Define to 1 if you have the `mmap' function. */
/* #undef HAVE_MMAP */

/* Define to 1 if you have the <OpenGL/glu.h> header file. */
/* #undef HAVE_OPENGL_GLU_H */

/* Define to 1 if you have the <OpenGL/gl.h> header file. */
/* #undef HAVE_OPENGL_GL_H */

/* Define to 1 if you have the `setmode' function. */
/* #undef HAVE_SETMODE */

/* Define to 1 if you have the <strings.h> header file. */
/* #undef HAVE_STRINGS_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
/* #undef HAVE_UNISTD_H */

/* 8/12 bit libjpeg dual mode enabled */
/* #undef JPEG_DUAL_MODE_8_12 */

/* Support LERC compression */
/* #undef LERC_SUPPORT */

/* 12bit libjpeg primary include file with path */
#define LIBJPEG_12_PATH ""

/* Support LZMA2 compression */
/* #undef LZMA_SUPPORT */

/* Name of package */
#define PACKAGE "LibTIFF Software"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "tiff@lists.maptools.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "LibTIFF Software"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "LibTIFF Software 4.5.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "tiff"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "4.5.0"

/* Size of size_t */
#define SIZEOF_SIZE_T 8

/* Default size of the strip in bytes (when strip chopping enabled) */
#define STRIP_SIZE_DEFAULT 8192

/* define to use win32 IO system */
#define USE_WIN32_FILEIO 1

/* Version number of package */
#define VERSION "4.5.0"

/* Support WEBP compression */
/* #undef WEBP_SUPPORT */

/* Support ZSTD compression */
/* #undef ZSTD_SUPPORT */


/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
    #ifdef __BIG_ENDIAN__
        #define WORDS_BIGENDIAN 1
    #endif
#else
    #undef WORDS_BIGENDIAN
#endif

#ifndef __MINGW32__
    #define TIFF_SIZE_FORMAT "zu"
#endif

#if SIZEOF_SIZE_T == 8
    #define TIFF_SSIZE_FORMAT PRId64

    #ifdef __MINGW32__
        #define TIFF_SIZE_FORMAT PRIu64
    #endif
#elif SIZEOF_SIZE_T == 4
    #define TIFF_SSIZE_FORMAT PRId32

    #ifdef __MINGW32__
        #define TIFF_SIZE_FORMAT PRIu32
    #endif
#else
    #error "Unsupported size_t size; please submit a bug report"
#endif


#endif // SQUAREPINE_TIFF_CONF_H
