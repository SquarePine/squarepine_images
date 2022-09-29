#ifndef SQUAREPINE_IMAGES_H
#define SQUAREPINE_IMAGES_H

/** BEGIN_JUCE_MODULE_DECLARATION

    ID:                 squarepine_images
    vendor:             SquarePine
    version:            0.0.1
    name:               SquarePine Images
    description:        Making an assortment of popular image codecs available to you through JUCE.
    website:            https://www.squarepine.io
    license:            ISC
    minimumCppStandard: 17
    OSXFrameworks:      SystemConfiguration
    iOSFrameworks:      SystemConfiguration
    dependencies:       squarepine_graphics
    searchpaths:        thirdparty/libwebp thirdparty/libwebp/src codecs/webpwrangler/

    END_JUCE_MODULE_DECLARATION
*/

//==============================================================================
#include <squarepine_graphics/squarepine_graphics.h>

//==============================================================================
namespace sp
{
    using namespace juce;

    #include "group/Grouper.h"
}

#endif // SQUAREPINE_IMAGES_H
