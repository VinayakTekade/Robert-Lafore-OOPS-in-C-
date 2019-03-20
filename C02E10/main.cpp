//C02E10
//Chapter 2 Exercise 10
//WAP to convert old pounds-shillings-pence format to decimal pounds
// 20 shillings = 1 pound, 12 pence = 1 shilling
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float pound, shillings, pence, dpound;
    cout << "Enter Pounds : ";
    cin >> pound;
    cout << "Enter Shillings : ";
    cin >> shillings;
    cout << "Enter Pence : ";
    cin >> pence;
    dpound = (pound) + (shillings/20) + (pence/240);
    cout << "Decimal Pounds : " << '\x9c'<< setprecision(3) << dpound;

    return 0;
}
