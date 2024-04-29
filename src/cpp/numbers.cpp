#include <iostream>
#include <windows.h>
#include <vector>

#include "../hpp/numbers.hpp"

std::vector<int> get_pixel_color_rgb(int x, int y)
{
    std::vector<int> return_color;
    HDC hdc = GetDC(NULL);
    COLORREF color = GetPixel(hdc, x, y);

    int r = GetRValue(color);
    int g = GetGValue(color);
    int b = GetBValue(color);

    ReleaseDC(NULL, hdc);

    return_color.push_back(r);
    return_color.push_back(g);
    return_color.push_back(b);

    return return_color;
}