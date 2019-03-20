//dowhile.cpp
//demonstrates do while loop

#include <iostream>

using namespace std;

int main()
{
    long dividend, divisor;
    char ch;
    do
    {
        cout << "Enter Dividend: "; cin >> dividend;
        cout << "Enter Divisor: "; cin >> divisor;
        cout << "The Remainder is : " << dividend%divisor << endl;
        cout << "Continue Again? (y/n): ";
        cin >> ch;
    }while(ch != 'n');

    return 0;
}
