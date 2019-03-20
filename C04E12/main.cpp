//C04EE12.cpp

#include <iostream>
#include <stdlib.h>

using namespace std;


struct fraction
{
    int num, dnum;
}f1,f2,f3;



void getval()
{
    cout << "Enter the first Fraction : " ;
    cin >> f1.num ;
    cout << "/";
    cin >> f1.dnum;
    cout << "Enter the second Fraction : ";
    cin >> f2.num ;
    cout << "/";
    cin >> f2.dnum;
}

int main()
{
    char ch;
    cout << "Type 1 for Addition" << endl;
    cout << "Type 2 for Subtraction" << endl;
    cout << "Type 3 for Multiplication" << endl;
    cout << "Type 4 for Division" << endl;
    cin >> ch;
    system("cls");
    switch(ch)
    {
        case '1' :    getval();
                    f3.num = (f1.num * f2.dnum) + (f2.num * f1.dnum);
                    f3.dnum = (f1.dnum * f2.dnum);
                    cout << "Sum : " << f3.num << "/" << f3.dnum;
                    break;

        case '2' :    getval();
                    f3.num = (f1.num * f2.dnum) - (f2.num * f1.dnum);
                    f3.dnum = (f1.dnum * f2.dnum);
                    cout << "Difference : " << f3.num << "/" << f3.dnum;
                    break;

        case '3' :    getval();
                    f3.num = f1.num * f2.num;
                    f3.dnum = (f1.dnum * f2.dnum);
                    cout << "Product : " << f3.num << "/" << f3.dnum;
                    break;

        case '4' :    getval();
                    f3.num = (f1.num * f2.dnum);
                    f3.dnum = (f2.num * f1.dnum);
                    cout << "Quotient : " << f3.num << "/" << f3.dnum;
                    break;
    }

    return 0;
}
