//StrcutFunction.cpp
//Demonstrate passing of structures in function arguments and returning of structures

#include <iostream>

using namespace std;

struct Distance
{
    int feet;
    float inches;
};

Distance addeng1(Distance, Distance);
void engdisp(Distance);


int main()
{
    Distance d1,d2,d3;
    cout << "\n Enter Length 1\n";
    cout << "feet: ";
    cin >> d1.feet;
    cout << "inches: ";
    cin >> d1.inches;
    cout << "\n Enter Length 2\n";
    cout << "feet: ";
    cin >> d2.feet;
    cout << "inches: ";
    cin >> d2.inches;
    d3 = addeng1(d1, d2);
    engdisp(d1); cout << " + ";
    engdisp(d2); cout << " = ";
    engdisp(d3); cout << endl;

    return 0;
}


Distance addeng1(Distance dd1, Distance dd2)
{
    Distance dd3;
    dd3.inches = dd1.inches + dd2.inches;
    dd3.feet = dd1.feet + dd2.feet;
    while(dd3.inches >= 12.0)
    {
        dd3.inches -=12.0;
        dd3.feet++;

    }


    return dd3;
}

void engdisp ( Distance dd)
{
    cout << dd.feet << "\'" << dd.inches << "\"";
}
