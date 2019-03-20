//C04E08.cpp

#include <iostream>

using namespace std;


struct fraction
{
    int num, dnum;
}f1,f2,f3;
int main()
{
    cout << "Enter the first Fraction : " ;
    cin >> f1.num ;
    cout << "/";
    cin >> f1.dnum;
    cout << "Enter the second Fraction : ";
    cin >> f2.num ;
    cout << "/";
    cin >> f2.dnum;
    f3.num = (f1.num * f2.dnum) + (f2.num * f1.dnum);
    f3.dnum = (f1.dnum * f2.dnum);
    cout << "Sum : " << f3.num << "/" << f3.dnum;
    return 0;
}
