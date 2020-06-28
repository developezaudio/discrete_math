#pragma once
#include <math.h>
class DM_Vec {
    public:
        DM_Vec(int size);
        ~DM_Vec();
        double mag();
        double dot(DM_Vec);
        double angle_between(DM_Vec);
        void set(int n, double value);
        DM_Vec scale(DM_Vec vec, double scalar);

        double& operator[](int i){return vecarray[i];};
        int size;

    private:
        int msize;
        double* vecarray;
};