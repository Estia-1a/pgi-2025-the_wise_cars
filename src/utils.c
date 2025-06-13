#include <estia-image.h>

#include "utils.h"

/**
 * @brief Here, you have to define functions of the pixel struct : getPixel and setPixel.
 * 
 */
pixelRGB* get_pixel(unsigned char* data, const unsigned int width, const unsigned int height, const unsigned int n, const unsigned int x, const unsigned int y) {

    if (!data || x >= width || y >= height) {
        return NULL;
    }
    
    int index = (y * width + x) * n;
    return (pixelRGB*)&data[index];
}
