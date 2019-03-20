//Structure.cpp

#include <iostream>

using namespace std;

struct Distance                                            //structure declaration
{                                                          //The declaration does not itself define any variables
    int feet;                                              //ie does not allocate memory or even name any variables.
    float inches;                                          //It only serves as a blueprint to future definations

};
int main()
{
    Distance d1, d3;                                        //structure variables defination
    Distance d2={ 11 , 6.25 };                             //structure initialization
    cout << "\nEnter feet: "; cin >> d1.feet;
    cout << "Enter inches: "; cin >> d1.inches;

    d3.inches = d1.inches + d2.inches;
    d3.feet = d1.feet + d2.feet;
    if(d3.inches >= 12.0)
    {
        d3.inches -= 12.0;
        d3.feet++;
    }

    cout << d1.feet << "\'-" << d1.inches << "\" + ";       //Accessing Structure Members
    cout << d2.feet << "\'-" << d2.inches << "\" = ";       //The real name of the dot operator is member access operator
    cout << d3.feet << "\'-" << d3.inches << "\n ";

    return 0;
}
