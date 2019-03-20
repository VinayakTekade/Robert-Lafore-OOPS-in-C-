//C06E07.cpp

#include <iostream>

using namespace std;

class Angle
{
private:
    int deg;
    float mins;
    char dir;
public:

    Angle() : deg(0), mins(0.0), dir('n')
    { }
    Angle(int d, float m, char c) : deg(d), mins(m), dir(c)
    { }

    void getdata()
    {
        cout << "Enter the angle \nDegrees: ";
        cin >> deg;
        cout << "minutes: ";
        cin >> mins;
        cout << "Direction: ";
        cin >> dir;
        cout << endl;
    }
    void showdata() const
    {
        cout << "The angle is " << deg << '\xF8' << mins << '\'' << dir << endl;
    }


};

int main()
{
    Angle a1(10, 30.0,'N');
    Angle a2;
    char ch;
    a1.showdata();
    do
    {
        a2.getdata();
        a2.showdata();
        cout << endl << "Continue?(y/n): ";
        cin >> ch;

    }while(ch !='n');


    return 0;
}
