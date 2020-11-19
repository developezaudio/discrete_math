#include "DM_Calc.h"
#include <cmath>
#include <iostream>


class DM_Deriv : DM_Calc{
    public:
        DM_Deriv() : DM_Calc()
        {};
        ~DM_Deriv() {};
        double instant_rate(double f(double),double x, int digits)
        {
            tolerance = pow(10, -digits);
            dx = 1;
            double approx = average_rate(f,x-dx,x+dx);
            for(int i=0; i < 2*digits; i++)
            {
                dx = dx/10.0;
                double next_approx = average_rate(f,x-dx,x+dx);
                if(abs(next_approx - approx))
                {
                    return next_approx;
                } else
                {
                    approx = next_approx;
                }
            }
            std::cerr << "Derivative did not converge!!!" << std::endl;
        };

    private:
        double tolerance{0.00001};
        double dx{1.0};

};