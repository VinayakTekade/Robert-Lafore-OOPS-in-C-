//C04E02.cpp

#include <iostream>

using namespace std;

struct point
{
    int x;
    int y;
}p1,p2,p3;

int main()
{
    cout << "Enter Point 1 \nx coordinate: ";
    cin >> p1.x;
    cout << "y coordinate: ";
    cin >> p1.y;
    cout << "Enter Point 2 \nx coordinate: ";
    cin >> p2.x;
    cout << "y coordinate: ";
    cin >> p2.y;

    p3.x = p1.x + p2.y;
    p3.y = p1.y + p2.y;

    cout << "\n\nThe Sum Coordinates of Point 1 and Point 2 is :  (" << p3.x << "," << p3.y << ")" << endl << endl;

    return 0;
}
