#include <iostream>
#include "shape.h"
#include "rectangle.h"
#include "triangle.h"
using namespace std;


int main()
{
    Rectangle r{};
    r.setHeight(2);
    r.setWidth(3);
    cout << "Area of the rectangle is: " << r.getArea() << endl;

    Triangle t{};
    t.setHeight(2);
    t.setWidth(9);
    cout << "Area of the triangle is: " << t.getArea() << endl;

    return 0;
}