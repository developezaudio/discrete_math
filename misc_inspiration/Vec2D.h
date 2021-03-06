#ifndef UTILS_VEC2D_H_
#define UTILS_VEC2D_H_

#include <iostream>

class Vec2D {
    public:

    Vec2D(): Vec2D(0,0){}
    Vec2D(float x, float y): mX(x), mY(y){}

    inline void SetX(float x) {mX = x;}
    inline void SetY(float y) {mY = y;}
    inline float GetX() const {return mX;}
    inline float GetY() const {return mY;}
    friend std::ostream& operator<<(std::ostream& consoleOut, const Vec2D& vec);

    private:
    double mX, mY;
};
#endif

std::ostream& operator<<(std::ostream& consoleOut, const Vec2D& vec)
{
    std::cout << "X: " << vec.mX << ", Y: " << vec.mY << std::endl;
    return consoleOut;
}