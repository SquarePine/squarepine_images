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
