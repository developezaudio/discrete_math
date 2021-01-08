#include<iostream>
#include "DM_Calc.h"
#include "DM_Deriv.h"
using namespace std;

double func1(double x)
{
    return x*x + 2*x;
}

auto array_funcgen(double* array, int arraysize)
{

    auto arrayfunc=[array,arraysize](int x)
    {
        if(x >=arraysize || x < 0)
        {
            cerr << "!!Error arrayfunc index out of Bounds !!!!1" << endl;
            return 0.0;
        }
        return array[x];
    };

    return arrayfunc;
}

int main()
{
    DM_Calc mCalc;
    DM_Deriv mDeriv;
    double mout;
    double* marray = new double[8];
    marray[0] = 0.0, marray[1] = 1.0, marray[2] = 4.0;
    marray[3] = 8.0, marray[4] = 16.0, marray[5] = 25;
    marray[6] = 36.0, marray[7] = 49.0;

    auto marray_func = array_funcgen(marray, 8);
    mout  = mCalc.average_rate(func1, 0, 5);
    cout << mout << endl;

    
    auto msecant = mCalc.secant_line(func1, 4.02, 4.01);
    cout << msecant(4) << endl;
    auto mderiv = mDeriv.instant_rate(func1, 10, 7);
    cout << mderiv << endl;
    return 0;
}