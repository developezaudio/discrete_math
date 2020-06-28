#pragma once
#include "DM_Vec.h"

class DM_Matrix :
public DM_Vec{
    public:
        DM_Matrix(DM_Vec);
        ~DM_Matrix();

        DM_Vec multiply_by();

    private:
};