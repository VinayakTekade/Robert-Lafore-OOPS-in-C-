//C05E01.cpp

#include <iostream>

using namespace std;

float circlearea(float);

int main()
{
    float area, radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    area = circlearea(radius);
    cout << "Area of the circle is " << area << endl;
    return 0;
}


float circlearea(float r)
{
    return 3.14159*r*r;
}
