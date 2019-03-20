//C04E03.cpp

#include <iostream>

using namespace std;

struct Distance
{
    int feet;
    float inches;
};

struct Volume
{
    Distance d1, d2, d3;
};


int main()
{
    Volume vol = { { 5, 7.8 } , { 8, 9.2 } , { 13 , 5.5 } };
    float l , b , h;
    cout << "The Dimensions of the room is \n";
    cout << vol.d1.feet << "\'-" << vol.d1.inches << "\" x " << vol.d2.feet << "\'-" << vol.d2.inches << "\" x " <<vol.d3.feet << "\'-" << vol.d3.inches << "\"";
    l =  vol.d1.feet + vol.d1.inches/12;
    b =  vol.d2.feet + vol.d2.inches/12;
    h =  vol.d3.feet + vol.d3.inches/12;

    float V = l*b*h;

    cout << "\n\nThe Volume of the room is " << V << " Cubic Feet" << endl << endl;


    return 0;
}
