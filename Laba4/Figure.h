#pragma once
using namespace std;
#include <string>
class Figure
{
public:
	virtual double getSquare() = 0;
	virtual void scale(int scale) = 0;
	virtual void move(int x, int y) = 0;
	virtual string toString() = 0;

};

