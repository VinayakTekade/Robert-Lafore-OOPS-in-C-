//StructRef.cpp
//Demonstrates passing structure by reference in a function

#include <iostream>

using namespace std;

struct Distance
{
    int feet;
    float inches;
};


void scale( Distance&, float );
void engdisp( Distance );


int main()
{
    Distance d1 = { 12, 6.5 };
    Distance d2 = { 10, 5.5 };
    cout << "d1 = "; engdisp(d1);
    cout << "\nd2 = "; engdisp(d2);

    scale(d1, 0.5);
    scale(d2, 0.25);

    cout << "\nd1 = "; engdisp(d1);
    cout << "\nd2 = "; engdisp(d2);
    cout << endl;
    return 0;
}


//scale()
//scales the value of type distance by factor
void scale( Distance& dd, float factor)
{
    float inches = (dd.feet*12 + dd.inches)*factor;
    dd.feet = static_cast<int>(inches/12);
    dd.inches = inches - dd.feet*12;
}


//engdisp()
//display structure distance in feet and inches
void engdisp( Distance dd )
{
    cout << dd.feet << "\'" << dd.inches << "\"";
}
