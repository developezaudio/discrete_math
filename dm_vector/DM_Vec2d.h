#pragma once
#include <math.h>

class Vec2d
{
    public:
        Vec2d();
        Vec2d(double x, double y);
        ~Vec2d();
        virtual inline double mag();
        //Returns a new Vec2d that is the product of addition with given Vec
        Vec2d add_return(Vec2d);
        Vec2d* add_return_pointer(Vec2d*);

        //Returns a new Vec2d that is scaled by scalar
        Vec2d scale_return(Vec2d);

    private:
        double x;
        double y;

};