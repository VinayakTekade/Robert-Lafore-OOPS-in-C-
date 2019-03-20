//C02E09
//Chapter 2 Exercise 9
//WAP to Add two fractions
#include <iostream>

using namespace std;

int main()
{
    int num1,dnum1, num2, dnum2, Snum, Sdnum;
    cout << "Enter the first Fraction : " ;
    cin >> num1 ;
    cout << "/";
    cin >> dnum1;
    cout << "Enter the second Fraction : ";
    cin >> num2 ;
    cout << "/";
    cin >> dnum2;
    Snum = (num1 * dnum2) + (num2 * dnum1);
    Sdnum = (dnum1 * dnum2);
    cout << "Sum : " << Snum << "/" << Sdnum;
    return 0;
}
