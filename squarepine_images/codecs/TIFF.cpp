//==============================================================================

namespace libtiff
{
    JUCE_BEGIN_IGNORE_WARNINGS_MSVC (4127 4242 4244 4245 4309 4310 4459 4701)

    //==============================================================================
    #include "tiffwrangler/UndefHelper.h"
    #include "tiffwrangler/tiffconf.h"

    #include <libtiff/t4.h>
    #include <libtiff/tif_predict.h>
    #include <libtiff/tiff.h>
    #include <libtiff/tif_dir.h>
    #include <libtiff/tiffio.h>
    #include <libtiff/tiffio.hxx>
    #include <libtiff/tiffiop.h>
    #include <libtiff/tiffvers.h>
    #include <libtiff/uvcode.h>

    //#include <libtiff/mkg3states.c>
    //#include <libtiff/mkspans.c>
    #include <libtiff/tif_aux.c>
    #include <libtiff/tif_close.c>
    #include <libtiff/tif_codec.c>
    #include <libtiff/tif_color.c>
    #include <libtiff/tif_compress.c>
    #include <libtiff/tif_dirinfo.c>
    #include <libtiff/tif_dir.c>
    #include <libtiff/tif_dirread.c>
    #include <libtiff/tif_dirwrite.c>
    #include <libtiff/tif_dumpmode.c>
    #include <libtiff/tif_error.c>
    #include <libtiff/tif_extension.c>
    #include <libtiff/tif_fax3.c>
    #include <libtiff/tif_fax3.h>
    #include <libtiff/tif_fax3sm.c>
    #include <libtiff/tif_flush.c>
    #include <libtiff/tif_getimage.c>
    #include <libtiff/tif_jbig.c>
    #include <libtiff/tif_jpeg.c>
    #include <libtiff/tif_jpeg_12.c>
    #include <libtiff/tif_lerc.c>
    #include <libtiff/tif_luv.c>
    #include <libtiff/tif_lzma.c>
    #include <libtiff/tif_lzw.c>
    #include <libtiff/tif_next.c>
    #include <libtiff/tif_ojpeg.c>
    #include <libtiff/tif_open.c>
    #include <libtiff/tif_packbits.c>
    #include <libtiff/tif_pixarlog.c>
    #include <libtiff/tif_predict.c>
    #include <libtiff/tif_print.c>
    #include <libtiff/tif_read.c>
    #include <libtiff/tif_stream.cxx>
    #include <libtiff/tif_strip.c>
    #include <libtiff/tif_swab.c>
    #include <libtiff/tif_thunder.c>
    #include <libtiff/tif_tile.c>
   #if ! JUCE_WINDOWS
    #include <libtiff/tif_win32.c>
   #else
    #include <libtiff/tif_unix.c>
   #endif
    #include <libtiff/tif_version.c>
    #include <libtiff/tif_warning.c>
    #include <libtiff/tif_webp.c>
    #include <libtiff/tif_write.c>
    #include <libtiff/tif_zip.c>
    #include <libtiff/tif_zstd.c>

    #include "tiffwrangler/UndefHelper.h"

    JUCE_END_IGNORE_WARNINGS_MSVC

    //==============================================================================
    /** @returns a value in bytes, or -1 on failure. */
    inline int getDataSizeOfTIFFImage (InputStream& input)
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

        const bool hasMagic = input.readByte() == 'T'
                              && input.readByte() == 'I'
                              && input.readByte() == 'F'
                              && input.readByte() == 'F';
        if (! hasMagic)
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
} // libtiff

//==============================================================================
String TIFFImageFormat::getFormatName()                             { return "TIFF"; }
bool TIFFImageFormat::usesFileExtension (const File& possibleFile)  { return possibleFile.hasFileExtension ("tiff;tif"); }

bool TIFFImageFormat::canUnderstand (InputStream& input)
{
    const auto lastPos = input.getPosition();
    const auto size = getDataSizeOfTIFFImage (input);
    input.setPosition (lastPos);

    return size > 0;
}

Image TIFFImageFormat::decodeImage (InputStream& input)
{
    using namespace libtiff;

    MemoryBlock data;
    input.readIntoMemoryBlock (data);

    return {};
}

bool TIFFImageFormat::writeImageToStream (const Image&, OutputStream&)
{
    jassertfalse; // Not quite there yet...
    return false;
}
