#include<iostream>
#include "DM_Calc.h"
using namespace std;

double func1(double x)
{
    return x*x;
}
int main()
{
    DM_Calc mCalc;
    double mout;
    mout  = mCalc.average_rate(func1, 0, 5);
    cout << mout << endl;
    
    auto msecant = mCalc.secant_line(func1, 4.02, 4.01);
    cout << msecant(4) << endl;
    return 0;
}