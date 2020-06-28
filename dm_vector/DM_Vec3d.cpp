#include "DM_Vec3d.h"

DM_Vec3d::DM_Vec3d(double x, double y, double z) :
                    mx{x}, my{y}, mz{z},
                    Vec2d(x,y)
{
}

DM_Vec3d::~DM_Vec3d()
{
}

void DM_Vec3d::setxyz(double x, double y, double z)
{
    mx=x; my=y; mz=z;
}

void DM_Vec3d::addvec(DM_Vec3d vec)
{
    mx += vec.mx;
    my += vec.my;
    mz += vec.mz;
}

inline double DM_Vec3d::mag()
{
    return sqrt(mx*mx + my*my + mz*mz);
}