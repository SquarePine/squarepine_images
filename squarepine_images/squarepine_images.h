#ifndef SQUAREPINE_IMAGES_H
#define SQUAREPINE_IMAGES_H

/** BEGIN_JUCE_MODULE_DECLARATION

    ID:                 squarepine_images
    vendor:             SquarePine
    version:            0.1.0
    name:               SquarePine Images
    description:        Making an assortment of popular image codecs available to you through JUCE.
    website:            https://www.squarepine.io
    license:            ISC
    minimumCppStandard: 17
    OSXFrameworks:      SystemConfiguration
    iOSFrameworks:      SystemConfiguration
    dependencies:       squarepine_graphics
    searchpaths:        thirdparty/libwebp/ thirdparty/libwebp/src codecs/webpwrangler/ thirdparty/libtiff/ codecs/tiffwrangler/

    END_JUCE_MODULE_DECLARATION
*/

//==============================================================================
#include <squarepine_graphics/squarepine_graphics.h>

//==============================================================================
namespace sp
{
    using namespace juce;

    /** A subclass of ImageFileFormat for reading WebP files. */
    class WebPImageFormat final : public ImageFileFormat
    {
    public:
        /** Constructor. */
        WebPImageFormat() = default;

        //==============================================================================
        /** @internal */
        String getFormatName() override;
        /** @internal */
        bool usesFileExtension (const File&) override;
        /** @internal */
        bool canUnderstand (InputStream&) override;
        /** @internal */
        Image decodeImage (InputStream&) override;
        /** @internal */
        bool writeImageToStream (const Image&, OutputStream&) override;

    private:
        //==============================================================================
        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (WebPImageFormat)
    };

    /** A subclass of ImageFileFormat for reading TIFF files. */
    class TIFFImageFormat final : public ImageFileFormat
    {
    public:
        /** Constructor. */
        TIFFImageFormat() = default;

        //==============================================================================
        /** @internal */
        String getFormatName() override;
        /** @internal */
        bool usesFileExtension (const File&) override;
        /** @internal */
        bool canUnderstand (InputStream&) override;
        /** @internal */
        Image decodeImage (InputStream&) override;
        /** @internal */
        bool writeImageToStream (const Image&, OutputStream&) override;

    private:
        //==============================================================================
        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TIFFImageFormat)
    };
}

#endif // SQUAREPINE_IMAGES_H
