//C06E10.cpp

#include <iostream>

using namespace std;

class ship
{
private:
    int deg;
    float mins;
    char dir;
    static int serial;


public:
    ship()
    { serial++;
    }
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
    void showdata()
    {

        cout << "Serial Number: " << serial << endl;
        cout << "The angle is " << deg << '\xF8' << mins << '\'' << dir << endl;
    }

};

int ship :: serial=0;


int main()
{
    int i =3;
    ship s[i];
    for(i=0; i<3; i++)
    {
        cout << "Enter the coordinates of ship " <<i+1 << endl;
        s[i].getdata();

    }

    for(i=0; i<3; i++)
    {
        cout << "The details of the ship" << i+1 << endl;
        s[i].showdata();
    }

    return 0;
}
