//Constructor Overloading.cpp
//demonstrates constructor overloading and adding objects using member functions


#include <iostream>

using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance() : feet(0), inches(0.0)                  //Constructor (no arg)
    {}
    Distance(int ft, float in) : feet(ft), inches(in)  //Constructor(two args)
    {}

    void getdist()                                  //Get Distance
    {
        cout << "\nEnter Feet: " ;
        cin >> feet;
        cout << "Enter Inches: " ;
        cin >> inches;
    }

    void showdist()                                 //Display Distance
    {
        cout << feet << "\'" << inches << '\"' ;
    }

    void add_dist(Distance, Distance);              //Prototype
};


void Distance :: add_dist(Distance d2, Distance d3)   //Second Method of defining function(outside the class)
{
    inches = d2.inches + d3.inches;
    feet = d2.feet + d3.feet;
    if(inches >= 12)
    {
        inches -= 12;
        feet++;
    }
}

int main()
{
    Distance dist1, dist3;                      //Calls first constructor
    Distance dist2(11, 6.25);                   //Calls second constructor
    dist1.getdist();
    dist3.add_dist(dist1, dist2);               //Passing objects as arguments

    cout << "\ndist1 = "; dist1.showdist();
    cout << "\ndist2 = "; dist2.showdist();
    cout << "\ndist3 = "; dist3.showdist();
    cout << endl;

    return 0;
}
