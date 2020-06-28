#include "DM_Vec2d.h"

Vec2d::Vec2d() : Vec2d{0.0,0.0}
{
}
Vec2d::Vec2d(double x, double y) :
            mX{x}, mY{y}
{
}
Vec2d::~Vec2d()
{
}

inline double Vec2d::mag()
{
    return sqrt(mX*mX + mY*mY);
}