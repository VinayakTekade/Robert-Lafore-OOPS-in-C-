//C02E06.cpp
//Chapter 2 Exercise 6
//WAP to take number of US dollars from the user and display equivalent British pound, French franc, German deutschemark and Japanese yen

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float dollars, pound, franc, deutschemark, yen;
    cout << "Enter the number of US dollars : ";
    cin >> dollars;

    pound = 1.487 * dollars;
    franc = 0.172 * dollars;
    deutschemark = 0.584 * dollars;
    yen = 0.00955 * dollars;

    cout << "The Equivalent \n"
         << "British Pound is " << setprecision(2) << pound << endl
         << "French Franc is " << setprecision(2) << franc << endl
         << "German Deutschemark is " << setprecision(2) << deutschemark << endl
         << "Japanese Yen is " << setprecision(2) << yen << endl;
    return 0;
}
