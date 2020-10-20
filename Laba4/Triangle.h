#pragma once
#include "Figure.h"
#include "math.h"
#include <string>
using namespace std;
class Triangle :
    public Figure
{
    int sideA, sideB, sideC, xPos, yPos;
public:
    Triangle(int sideA = 10, int sideB = 10, int sideC=10, int xPos = 0, int yPos = 0)  {
        int sum1 = sideA + sideB;
        int sum2 = sideA + sideC;
        int sum3 = sideB + sideC;
        if (sum1 <= sideC || sum2 <= sideB || sum3 <= sideA) {
            sideA = 10, sideB = 10, sideC = 10;
        }

        this->sideA = sideA;
        this->sideB = sideB;
        this->sideC = sideC;
        this->xPos = xPos;
        this->yPos = yPos;
    }

    double getSquare() {
        double p = (sideA + sideB + sideC) / 2;
        return (double)sqrt(p*(p-sideA)*(p-sideB)*(p-sideC));
    }

    void scale(int scale) {
        sideA *= scale;
        sideB *= scale;
        sideC *= scale;
    }

    void move(int x, int y) {
        xPos += x;
        yPos += y;
    }

    string toString() {
       
        std::string result = "Triangle; sides are " + to_string(sideA) + " " + to_string(sideB) + " " + to_string(sideC) + " square is " + to_string(getSquare()) + " coordinates are: X" + to_string(xPos) + "Y" + to_string(yPos);
        return result;
    }
};

