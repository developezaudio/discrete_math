#include "DM_Vec.h"
#include <iostream>
using namespace std;

int main()
{
    DM_Vec mVec(3);

    mVec.set(0, 3.0);
    mVec.set(1, 4.0);
    mVec.set(2, 12);
    cout << mVec.mag() << endl;
    return 0;
}