class DM_Calc
{
private:
    /* data */
public:
    DM_Calc(/* args */);
    ~DM_Calc();
    double average_rate(double f(double), double x1, double x2);
    //Returns a function of the secant line
    auto secant_line(double f(double), double x1, double x2);
};

DM_Calc::DM_Calc(/* args */)
{
}

DM_Calc::~DM_Calc()
{
}

double DM_Calc::average_rate(double f(double), double x1, double x2)
{
    return (f(x2) - f(x1))/(x2-x1);
}

auto DM_Calc::secant_line(double f(double), double x1, double x2)
{
    double m = average_rate(f,x1,x2);
    double initialx = f(x1);
    double endx = f(x2);

    auto secant=[initialx,x1,x2,m,endx](double x)
    {
        return (x - x1) * (endx - initialx) / (x2-x1) + initialx;
    };

    return secant;
}