//Default Copy Constructor
//initialises objects using default copy constructor

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
};
int main()
{
    Distance dist1(11, 6.25);                   //default constructor
    Distance dist2(dist1);                      //assigning value using constructor
    Distance dist3 = dist1;                     //assigning value directly

    cout << "\ndist1 = " ; dist1.showdist();
    cout << "\ndist2 = " ; dist2.showdist();
    cout << "\ndist3 = " ; dist3.showdist();
    cout << endl;
    return 0;
}
