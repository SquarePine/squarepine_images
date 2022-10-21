//==============================================================================
namespace libwebp
{
    JUCE_BEGIN_IGNORE_WARNINGS_MSVC (4127 4242 4244 4245 4309 4310 4459 4701)
    JUCE_BEGIN_IGNORE_WARNINGS_GCC_LIKE ("-Wall",
                                         "-Wconversion",
                                         "-Wcast-align",
                                         "-Wzero-as-null-pointer-constant")

    #undef USE_DITHERING
    #undef WEBP_HAVE_GIF
    #undef WEBP_HAVE_GL
    #undef WEBP_HAVE_JPEG
    #undef WEBP_HAVE_NEON_RTCD
    #undef WEBP_HAVE_PNG
    #undef WEBP_HAVE_SDL
    #undef WEBP_HAVE_TIFF
    #undef WEBP_USE_THREAD
    #undef HAVE_GLUT_GLUT_H
    #undef HAVE_OPENGL_GLUT_H

    #undef HAVE_CONFIG_H
    #define HAVE_CONFIG_H 1

    #undef WEBP_DISABLE_STATS
    #define WEBP_DISABLE_STATS 1

    #undef AC_APPLE_UNIVERSAL_BUILD
   #if (JUCE_MAC || JUCE_IOS) && JUCE_INTEL
    #define AC_APPLE_UNIVERSAL_BUILD 1
   #endif

    #undef HAVE_BUILTIN_BSWAP16
    #undef HAVE_BUILTIN_BSWAP32
    #undef HAVE_BUILTIN_BSWAP64
   #if ! JUCE_WINDOWS
    #define HAVE_BUILTIN_BSWAP16 1
    #define HAVE_BUILTIN_BSWAP32 1
    #define HAVE_BUILTIN_BSWAP64 1
   #endif

    #undef HAVE_CPU_FEATURES_H
    #define HAVE_CPU_FEATURES_H 1

    #undef HAVE_DLFCN_H
    #define HAVE_DLFCN_H 1

    #undef HAVE_GL_GLUT_H
    #define HAVE_GL_GLUT_H 1

    #undef HAVE_INTTYPES_H
    #define HAVE_INTTYPES_H 1

    #undef HAVE_MEMORY_H
    #define HAVE_MEMORY_H 1

    #undef HAVE_PTHREAD_PRIO_INHERIT
    #define HAVE_PTHREAD_PRIO_INHERIT (! JUCE_WINDOWS)

    #undef HAVE_SHLWAPI_H
    #define HAVE_SHLWAPI_H 1

    #undef HAVE_STDINT_H
    #define HAVE_STDINT_H 1

    #undef HAVE_STDLIB_H
    #define HAVE_STDLIB_H 1

    #undef HAVE_STRINGS_H
    #define HAVE_STRINGS_H 1

    #undef HAVE_STRING_H
    #define HAVE_STRING_H 1

    #undef HAVE_SYS_STAT_H
    #undef HAVE_SYS_TYPES_H
    #undef HAVE_UNISTD_H

   #if ! JUCE_WINDOWS
    #define HAVE_SYS_STAT_H 1
    #define HAVE_SYS_TYPES_H 1
    #define HAVE_UNISTD_H 1
   #endif

    #undef HAVE_WINCODEC_H
   #if JUCE_WINDOWS
    #define HAVE_WINCODEC_H 1
   #endif

    #undef HAVE_WINDOWS_H
   #if JUCE_WINDOWS
    #define HAVE_WINDOWS_H 1
   #endif

    #undef STDC_HEADERS
    #define STDC_HEADERS 1

    #undef WEBP_HAVE_NEON
   #if JUCE_MAC
    // #define WEBP_HAVE_NEON 1
   #endif

    #undef WEBP_HAVE_SSE2
   #if JUCE_INTEL && JUCE_64BIT
    // #define WEBP_HAVE_SSE2 1
   #endif

    #undef WEBP_HAVE_SSE41
   #if JUCE_MSVC
    // #define WEBP_HAVE_SSE41 1
   #endif

    #undef WEBP_NEAR_LOSSLESS
    #define WEBP_NEAR_LOSSLESS 1

    #undef WORDS_BIGENDIAN
   #if JUCE_BIG_ENDIAN
    #define WORDS_BIGENDIAN 1
   #endif

    #undef LT_OBJDIR
    #define LT_OBJDIR ""

    #undef PACKAGE
    #define PACKAGE "WebP"
    #undef PACKAGE_NAME
    #define PACKAGE_NAME PACKAGE
    #undef PACKAGE_TARNAME
    #define PACKAGE_TARNAME PACKAGE

    #undef PACKAGE_VERSION
    #define PACKAGE_VERSION "1.1.0"
    #undef VERSION
    #define VERSION PACKAGE_VERSION

    #undef PACKAGE_BUGREPORT
    #define PACKAGE_BUGREPORT "https://bugs.chromium.org/p/webp"

    #undef PACKAGE_STRING
    #define PACKAGE_STRING (PACKAGE_NAME " " PACKAGE_VERSION)

    #undef PACKAGE_URL
    #define PACKAGE_URL "http://developers.google.com/speed/webp"

    // TODO - Set up encoding
   #ifndef SQUAREPINE_WEBP_ALLOW_ENCODER
    #define SQUAREPINE_WEBP_ALLOW_ENCODER 0
   #endif

    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/webp/decode.h"
    #include "WebPUndefHelper.h"
   #if SQUAREPINE_WEBP_ALLOW_ENCODER
    #include "../thirdparty/libwebp/src/webp/encode.h"
    #include "WebPUndefHelper.h"
   #endif
    #include "../thirdparty/libwebp/src/webp/demux.h"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/dsp.h"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dec/common_dec.h"
    #include "WebPUndefHelper.h"

    #include "../thirdparty/libwebp/src/dec/alpha_dec.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dec/buffer_dec.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dec/frame_dec.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dec/io_dec.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dec/quant_dec.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dec/tree_dec.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dec/vp8_dec.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dec/vp8l_dec.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dec/webp_dec.c"
    #include "WebPUndefHelper.h"

#if SQUAREPINE_WEBP_ALLOW_ENCODER
    #include "../thirdparty/libwebp/src/enc/frame_enc.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/enc/alpha_enc.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/enc/iterator_enc.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/enc/analysis_enc.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/enc/config_enc.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/enc/filter_enc.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/enc/predictor_enc.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/enc/near_lossless_enc.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/enc/picture_enc.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/enc/picture_csp_enc.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/enc/picture_tools_enc.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/enc/quant_enc.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/enc/syntax_enc.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/enc/token_enc.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/enc/tree_enc.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/enc/vp8l_enc.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/enc/webp_enc.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/enc/cost_enc.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/enc/histogram_enc.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/enc/backward_references_enc.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/enc/backward_references_cost_enc.c"
    #include "WebPUndefHelper.h"
#endif

    #include "../thirdparty/libwebp/src/demux/demux.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/alpha_processing.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/cpu.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/cost.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/cost_neon.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/cost_sse2.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/dec.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/ssim.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/ssim_sse2.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/dec_neon.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/dec_sse2.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/dec_sse41.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/dec_clip_tables.c"
   #if SQUAREPINE_WEBP_ALLOW_ENCODER
    #include "../thirdparty/libwebp/src/dsp/enc.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/enc_neon.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/enc_sse2.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/enc_sse41.c"
    #include "WebPUndefHelper.h"
   #endif
    #include "../thirdparty/libwebp/src/dsp/filters.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/filters_neon.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/filters_sse2.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/lossless.c"
    #include "WebPUndefHelper.h"
   #if SQUAREPINE_WEBP_ALLOW_ENCODER
    #include "../thirdparty/libwebp/src/dsp/lossless_enc.c"
    #include "WebPUndefHelper.h"
   #endif
    #include "../thirdparty/libwebp/src/dsp/lossless_neon.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/lossless_sse2.c"
    #include "WebPUndefHelper.h"
   #if SQUAREPINE_WEBP_ALLOW_ENCODER
    #include "../thirdparty/libwebp/src/dsp/lossless_enc_neon.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/lossless_enc_sse2.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/lossless_enc_sse41.c"
    #include "WebPUndefHelper.h"
   #endif
    #include "../thirdparty/libwebp/src/dsp/rescaler.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/rescaler_neon.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/rescaler_sse2.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/upsampling.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/upsampling_neon.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/upsampling_sse2.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/upsampling_sse41.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/yuv.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/yuv_neon.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/yuv_sse2.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/yuv_sse41.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/alpha_processing_neon.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/alpha_processing_sse2.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/dsp/alpha_processing_sse41.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/utils/bit_reader_utils.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/utils/bit_writer_utils.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/utils/color_cache_utils.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/utils/filters_utils.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/utils/huffman_utils.c"
    #include "WebPUndefHelper.h"
   #if SQUAREPINE_WEBP_ALLOW_ENCODER
    #include "../thirdparty/libwebp/src/utils/huffman_encode_utils.c"
   #endif
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/utils/quant_levels_utils.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/utils/rescaler_utils.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/utils/random_utils.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/utils/thread_utils.c"
    #include "WebPUndefHelper.h"
    #include "../thirdparty/libwebp/src/utils/utils.c"
    #include "WebPUndefHelper.h"

    // This file contains a copy of the code from "quant_levels_dec_utils.c"
    // minus the CLIP_8b_MASK and redundantly defined clip_8b function:
    #include "webpwrangler/QuantLevelsDecUtils.h"
    #include "WebPUndefHelper.h"

    #undef HAVE_CONFIG_H
    #undef USE_DITHERING
    #undef WEBP_DISABLE_STATS
    #undef AC_APPLE_UNIVERSAL_BUILD
    #undef HAVE_BUILTIN_BSWAP16
    #undef HAVE_BUILTIN_BSWAP32
    #undef HAVE_BUILTIN_BSWAP64
    #undef HAVE_CPU_FEATURES_H
    #undef HAVE_DLFCN_H
    #undef HAVE_GLUT_GLUT_H
    #undef HAVE_GL_GLUT_H
    #undef HAVE_INTTYPES_H
    #undef HAVE_MEMORY_H
    #undef HAVE_OPENGL_GLUT_H
    #undef HAVE_PTHREAD_PRIO_INHERIT
    #undef HAVE_SHLWAPI_H
    #undef HAVE_STDINT_H
    #undef HAVE_STDLIB_H
    #undef HAVE_STRINGS_H
    #undef HAVE_STRING_H
    #undef HAVE_SYS_STAT_H
    #undef HAVE_SYS_TYPES_H
    #undef HAVE_UNISTD_H
    #undef HAVE_WINCODEC_H
    #undef HAVE_WINDOWS_H
    #undef STDC_HEADERS
    #undef WEBP_HAVE_GIF
    #undef WEBP_HAVE_GL
    #undef WEBP_HAVE_JPEG
    #undef WEBP_HAVE_NEON
    #undef WEBP_HAVE_NEON_RTCD
    #undef WEBP_HAVE_PNG
    #undef WEBP_HAVE_SDL
    #undef WEBP_HAVE_SSE2
    #undef WEBP_HAVE_SSE41
    #undef WEBP_HAVE_TIFF
    #undef WEBP_NEAR_LOSSLESS
    #undef WEBP_USE_THREAD
    #undef WORDS_BIGENDIAN
    #undef LT_OBJDIR
    #undef PACKAGE
    #undef PACKAGE_NAME
    #undef PACKAGE_TARNAME
    #undef PACKAGE_VERSION
    #undef VERSION
    #undef PACKAGE_BUGREPORT
    #undef PACKAGE_STRING
    #undef PACKAGE_URL

    JUCE_END_IGNORE_WARNINGS_GCC_LIKE
    JUCE_END_IGNORE_WARNINGS_MSVC
} // libwebp

//==============================================================================
/** @returns a value in bytes, or -1 on failure. */
inline int getDataSizeOfWebPImage (InputStream& input)
{
    const bool startsWithRiff = input.readByte() == 'R'
                             && input.readByte() == 'I'
                             && input.readByte() == 'F'
                             && input.readByte() == 'F';
    if (! startsWithRiff)
        return -1;

    const auto sizeOfFileBytes = input.readInt();
    if (sizeOfFileBytes <= 0)
        return -1;

    const bool hasWebPMagic = input.readByte() == 'W'
                           && input.readByte() == 'E'
                           && input.readByte() == 'B'
                           && input.readByte() == 'P';
    if (! hasWebPMagic)
        return -1;

    return sizeOfFileBytes;
}

inline Image createImageFromData (bool hasAlphaChan, int width, int height, const uint8_t* data)
{
    Image image (hasAlphaChan ? Image::ARGB : Image::RGB, width, height, hasAlphaChan);

    const Image::BitmapData destData (image, Image::BitmapData::writeOnly);

    for (int y = 0; y < height; ++y)
    {
        auto* dest = destData.getLinePointer (y);

        if (hasAlphaChan)
        {
            for (int i = width; --i >= 0;)
            {
                ((PixelARGB*) dest)->setARGB (data[3], data[0], data[1], data[2]);
                ((PixelARGB*) dest)->premultiply();
                dest += destData.pixelStride;
                data += 4;
            }
        }
        else
        {
            for (int i = width; --i >= 0;)
            {
                ((PixelRGB*) dest)->setARGB (0, data[0], data[1], data[2]);
                dest += destData.pixelStride;
                data += 4;
            }
        }
    }

    return image;
}

//==============================================================================
String WebPImageFormat::getFormatName()                             { return "WebP"; }
bool WebPImageFormat::usesFileExtension (const File& possibleFile)  { return possibleFile.hasFileExtension ("webp"); }

bool WebPImageFormat::canUnderstand (InputStream& input)
{
    const auto lastPos = input.getPosition();
    const auto size = getDataSizeOfWebPImage (input);
    input.setPosition (lastPos);

    return size > 0;
}

Image WebPImageFormat::decodeImage (InputStream& input)
{
    using namespace libwebp;

    MemoryBlock data;
    input.readIntoMemoryBlock (data);

    WebPBitstreamFeatures features;
    zerostruct (features);

    if (WebPGetFeatures ((uint8_t*) data.getData(), data.getSize(), &features) != VP8_STATUS_OK
        || features.width <= 0
        || features.height <= 0)
    {
        return {};
    }

    WebPData webpData;
    WebPDataInit (&webpData);
    webpData.bytes = (const uint8_t*) data.getData();
    webpData.size = data.getSize();

    if (auto* demux = WebPDemux (&webpData))
    {
        const auto flags = WebPDemuxGetI (demux, WEBP_FF_FORMAT_FLAGS);

        WebPChunkIterator chunkIter;

        if ((flags & XMP_FLAG) != 0 && WebPDemuxGetChunk (demux, "XMP ", 1, &chunkIter) > 0)
            WebPDemuxReleaseChunkIterator (&chunkIter);

        if ((flags & EXIF_FLAG) != 0 && WebPDemuxGetChunk (demux, "EXIF", 1, &chunkIter) > 0)
            WebPDemuxReleaseChunkIterator (&chunkIter);

        if ((flags & ICCP_FLAG) != 0 && WebPDemuxGetChunk (demux, "ICCP", 1, &chunkIter) > 0)
            WebPDemuxReleaseChunkIterator (&chunkIter);

        Array<Image> frames;
        WebPIterator iter;
        if (WebPDemuxGetFrame (demux, 1, &iter) > 0)
        {
            do
            {
                if (auto* pixelData = WebPDecodeRGBA (iter.fragment.bytes, iter.fragment.size, nullptr, nullptr))
                {
                    const auto frame = createImageFromData (iter.has_alpha > 0, iter.width, iter.height, pixelData);

                    if (frame.isValid())
                    {
                        frames.add (::std::move (frame));
                        break; // Break here because JUCE doesn't support multi-frame decoding.
                    }
                }
            }
            while (WebPDemuxNextFrame (&iter) > 0);

            WebPDemuxReleaseIterator (&iter);
        }

        WebPDemuxDelete (demux);

        // Use the first item here because JUCE doesn't support multi-frame decoding.
        if (! frames.isEmpty())
            return frames.getFirst();
    }

    return {};
}

bool WebPImageFormat::writeImageToStream (const Image&, OutputStream&)
{
    jassertfalse; // Not quite there yet...
    return false;
}
