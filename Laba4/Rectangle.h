#pragma once
#include "Figure.h"
#include <string>
using namespace std;
class Rectangle :
    public Figure
{
    int width, height, xPos, yPos;
public:

    Rectangle(int width = 10, int height = 5, int xPos=0, int yPos=0) :width(width), height(height), xPos(xPos), yPos(yPos) {

    }

    double getSquare() {
        return (double)width * height;
    }

    void scale(int scale) {
        width *= scale;
        height *= scale;
    }

    void move(int x, int y) {
        xPos += x;
        yPos += y;
    }

    string toString() {
       std::string result =  "Rectangle; width is " + to_string(width)+ " height is " + to_string(height) + " square is " + to_string(getSquare()) + " coordinates are: X" + to_string(xPos)+"Y"+to_string(yPos);
        return result;
    }

};

