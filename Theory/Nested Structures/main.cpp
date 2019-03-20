//Nested Structures.cpp

#include <iostream>

using namespace std;

struct Distance
{
    int feet;
    float inches;

};

struct Room
{
    Distance length;
    Distance width;
};

int main()
{
    Room dining = { { 13, 6.5 } , { 10 , 0.0 } };

    float l = dining.length.feet + dining.length.inches/12; // converting length and width to find the area
    float w = dining.width.feet + dining.width.inches/12;

    cout << "Dining room area is " << l*w << " sq feet \n" ;


    return 0;
}
