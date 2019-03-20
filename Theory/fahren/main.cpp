//fahren.cpp
//demonstrates cin, newline
#include <iostream>

using namespace std;

int main()
{
    int ftemp;                                      //for temperature in Fahrenheit
    cout << "Enter Temperature in Fahrenheit: ";
    cin >> ftemp;                                   //Causes Program to wait for the user to type in a number
                                                    //resulting in assigning a value to ftemp
    int ctemp = (ftemp - 32) * 5/9;                 //this is an expression (notice the parenthesis used for precedence)
    cout<< "Equivalent in Celsius is :" << ctemp << '\n';
    return 0;
}
