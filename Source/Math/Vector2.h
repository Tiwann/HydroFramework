#pragma once

#include "Vector3.h"
#include "box2d/b2_math.h"

namespace Hydro
{
    class Vector3;
    
    class Vector2
    {
    public:
        union{ float x{0.0f}, r; };
        union{ float y{0.0f}, g; };

        Vector2() = default;
        Vector2(float X, float Y);
        Vector2(float Value);
        Vector2(const Vector3& Vec);
        
        float Magnitude() const;
        const float* ValuePtr() const;
        float Dot(const Vector2& Vec) const;

        Vector2 WithX(float X) const;
        Vector2 WithY(float Y) const;
        Vector2 Normalized() const;
        Vector2 operator+(const Vector2& Vec) const;
        Vector2 operator-(const Vector2& Vec) const;
        Vector2 operator-() const;

        operator b2Vec2() const;

        friend Vector2 operator*(float Scalar, const Vector2& Vec);
        friend Vector2 operator*(const Vector2& Vec, float Scalar);
        Vector2& operator*=(float Scalar);
        bool operator==(const Vector2& Vec) const;


        
        static Vector2 Zero;
        static Vector2 One;
        static Vector2 Right;
        static Vector2 Up;
        static Vector2 Left;
        static Vector2 Down;
    };
}
