#pragma once
#include <math.h>

class Vec2d
{
    public:
        Vec2d();
        Vec2d(double x, double y);
        ~Vec2d();
        virtual inline double mag();

    private:
        double mX;
        double mY;

};