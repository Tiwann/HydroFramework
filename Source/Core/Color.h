﻿#pragma once
#include <glm/vec4.hpp>
#include "Macros.h"

namespace Hydro
{
    class HYDRO_API Color
    {
    public:
        float r{0.0f}, g{0.0f}, b{0.0f}, a{0.0f};

        Color();
        Color(uint32_t color);
        Color(float red, float green, float blue, float alpha);

        operator glm::vec4() const;

        static Color FromHSL(float hue, float saturation, float lightness, float alpha);
        Color WithHue(float hue);
        Color WithSturation(float saturation);
        Color WithLightness(float lightness);
        Color WithOpacity(float opacity);
        Color WithRed(float red);
        Color WithGreen(float green);
        Color WithBlue(float blue);
        
        static Color Red;
        static Color Green;
        static Color Blue;
        static Color Magenta;
        static Color Cyan;
        static Color Yellow;
        static Color Black;
        static Color White;
        static Color Orange;
        static Color Pink;
        static Color Brown;
        static Color Purple;
        static Color Turquoise;
        static Color Grey;
    };
}