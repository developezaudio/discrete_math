#include "DM_Vec2d.h"

Vec2d::Vec2d() : Vec2d{0.0,0.0}
{
}
Vec2d::Vec2d(double x, double y) :
            x{x}, y{y}
{
}
Vec2d::~Vec2d()
{
}

inline double Vec2d::mag()
{
    return sqrt(x*x + y*y);
}

Vec2d Vec2d::add_return(Vec2d inVec)
{
    return Vec2d{x + inVec.x, y + inVec.y};
}

Vec2d* Vec2d::add_return_pointer(Vec2d* inVec)
{
    Vec2d* tempVec = new Vec2d{x + inVec->x, y + inVec->y};
    return tempVec;
}

Vec2d Vec2d::scale_return(Vec2d inVec)
{
    return Vec2d{x * inVec.x, y * inVec.y};
}