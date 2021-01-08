#pragma once
#include "DM_Calc.h"
#include <iostream>

class DM_Integral : DM_Calc
{
    public:
        DM_Integral();
        ~DM_Integral();

        //returns  an aproximation of the area under the curve of 
        //the given function calculated Riemann sum / left side aprox.
        double area_under_aprox(double f(double), double t1, double t2, int numdxs);
    private:

};

double DM_Integral::area_under_aprox(double f(double), double t1, double t2, int numdxs)
{
    double local_dx = (t1-t2)/numdxs;
    double accum=0;

    for(int i=0; i < numdxs; i++)
    {
        accum += small_dx_change(f,local_dx*i, local_dx);
    }

    return accum;
}