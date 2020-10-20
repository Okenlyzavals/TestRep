#include <iostream>
#include <string>
#include <vector>
#include "Figure.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main()
{
	Figure** figures = new Figure*[10]{ new Rectangle(),new Circle(),new Triangle(), new Rectangle(4,15,50,100),new Triangle(2,2,7),new Circle(6,20,-30),new Circle(4),new Rectangle(7,7),new Circle(8),new Triangle(1,5,3,30,45) };






}
