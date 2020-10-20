#pragma once
#include "Figure.h"
#include <string>
using namespace std;
class Circle :
    public Figure
{
    int rad, xPos, yPos;
public:

    Circle(int rad = 5, int xPos = 0, int yPos = 0) :rad(rad), xPos(xPos), yPos(yPos) {

    }

    double getSquare() {
        return (double)rad * rad * 3.1416;
    }

    void scale(int scale) {
        rad *= scale;
    }

    void move(int x, int y) {
        xPos += x;
        yPos += y;
    }

    string toString() {
        std::string result = "Circle; radius is " + to_string(rad) + " square is " + to_string(getSquare()) + " coordinates are: X" + to_string(xPos) + "Y" + to_string(yPos);
        return result;
    }

};

