#include <iostream>

using namespace std;

struct Distance
{
   int feet;
   float inches;
};


Distance Larger(Distance, Distance);


int main()
{
    Distance d1, d2, d3;
    cout << "Enter Length 1 \nFeet: ";
    cin >> d1.feet;
    cout << "Inches: ";
    cin >> d1.inches;
    cout << "\nEnter Length 2 \nFeet: ";
    cin >> d2.feet;
    cout << "Inches: ";
    cin >> d2.inches;
    cout << "\n\nThe Larger one is ";
    d3 = Larger(d1, d2);
    cout  << d3.feet << "\'" << d3.inches << "\"";
    return 0;
}

Distance Larger(Distance dd1, Distance dd2)
{
    float x = dd1.feet*12 + dd1.inches;
    float y = dd2.feet*12 + dd2.inches;
    if(x>y)
        return dd1;
    else return dd2;
}
