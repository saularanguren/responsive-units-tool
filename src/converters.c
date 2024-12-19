#include "../lib/converters.h"

/**
 * @param number must be the value in px
 * @return rem
 */
float converter_rem(float number)
{
    return number / 16;
}

/**
 * @param number must be the value in rem
 * @return px
 */
float converter_px(float number)
{
    return number * 16;
}