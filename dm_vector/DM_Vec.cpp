#include "DM_Vec.h"
#include "iostream"

DM_Vec::DM_Vec(int size) :
        msize{size}, size{size},
        vecarray{new double[size]}
{
    for(int i=0; i<size; i++)
        vecarray[i] = 0;
}

DM_Vec::~DM_Vec()
{
    delete[] vecarray;
}

double DM_Vec::mag()
{
    double tempresult=0;
    //////Currently up to 3D
    for(int i=0; i < msize; i++)
    {
        tempresult += vecarray[i] * vecarray[i];
    }
    return sqrt(tempresult);
}

double DM_Vec::dot(DM_Vec vec2)
{
    if (vec2.size != msize)
    {
        std::cout << "Error vectors must be same size to get dot product" << std::endl;
        return 0;
    }
    double tempresult=0;
    for(int i=0; i<msize; i++)
    {
        tempresult += vecarray[i] * vec2[i]; 
    }
}

double DM_Vec::angle_between(DM_Vec xvec)
{
    return acos((this->dot(xvec))/(xvec.mag()*this->mag()));
}

void DM_Vec::set(int n, double value)
{
    vecarray[n] = value;
}

DM_Vec DM_Vec::scale(DM_Vec vec, double scalar)
{
    DM_Vec vecout(vec.size);
    for(int i=0; i < vec.size; i++)
    {vecout[i] *= scalar;}

    return vecout;
}