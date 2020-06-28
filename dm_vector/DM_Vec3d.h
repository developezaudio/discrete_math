#pragma once
#include "DM_Vec2d.h"

class DM_Vec3d :
        public Vec2d
{
public:
    DM_Vec3d(double x, double y, double z);
    ~DM_Vec3d();
    void setxyz(double x, double y, double z);
    void addvec(DM_Vec3d vec);
    inline double mag();

private:
    double mx,my,mz;
};
