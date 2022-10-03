#include "squarepine_images.h"

//==============================================================================
#include <cstddef>
#include <cstdint>
#include <iostream>
#include <string>
#include <cstring>
#include <cinttypes>
#include <cstdio>
#include <io.h>

//==============================================================================
namespace sp
{
    using namespace juce;

    #include "codecs/WebP.cpp"
    #include "codecs/TIFF.cpp"
}
