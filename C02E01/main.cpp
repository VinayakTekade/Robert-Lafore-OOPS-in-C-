//C02E01.cpp
//Chapter 2 Exercise 1
//WAP that takes gallons and displays equivalent cubic foot
// 7.481 gallons = 1 cubic foot
#include <iostream>

using namespace std;

int main()
{
    float gallons, cfoot;
    cout << "Enter the number of Gallons : ";
    cin >> gallons;
    cfoot = 7.481 * gallons;
    cout << endl << "The Equivalent cubic foot is : " << cfoot << endl;
    return 0;
}
