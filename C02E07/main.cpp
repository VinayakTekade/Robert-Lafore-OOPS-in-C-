//C02E07
//Chapter 2 Exercise 7
//WAP to take temperature in celsius from user and display its equivalent fahrenheit

#include <iostream>

using namespace std;

int main()
{
    float ftemp, ctemp;
    cout << "Enter the Temperature in Celsius : ";
    cin >> ctemp;
    ftemp = (ctemp * 9 / 5) +32;
    cout << "The Equivalent Temperature in Fahrenheit is : " << ftemp << endl;
    return 0;
}
