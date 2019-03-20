//C05E12.cpp

#include <iostream>
#include <stdlib.h>

using namespace std;


struct fraction
{
    int num, dnum;
}f1,f2,f3;

fraction getval(fraction);
fraction fadd(fraction, fraction);
fraction fsub(fraction, fraction);
fraction fmul(fraction, fraction);
fraction fdiv(fraction, fraction);


int main()
{
    fraction ff1, ff2, ff3;
    char ch;
    cout << "Type 1 for Addition" << endl;
    cout << "Type 2 for Subtraction" << endl;
    cout << "Type 3 for Multiplication" << endl;
    cout << "Type 4 for Division" << endl;
    cin >> ch;
    system("cls");

    /*if(ch!='1' || ch!='2' || ch!='3' || ch!='4')
    {
        cout << "INCORRECT INPUT !!! EXITING!! ";
        exit(0);
    }*/

    ff1 = getval(ff1);
    ff2 = getval(ff2);
    switch(ch)
    {
        case '1' :  ff3 = fadd(ff1, ff2);
                    cout << "Sum : " << ff3.num << "/" << ff3.dnum;
                    break;

        case '2' :  ff3 = fsub(ff1, ff2);
                    cout << "Difference : " << ff3.num << "/" << ff3.dnum;
                    break;

        case '3' :  ff3 = fmul(ff1, ff2);
                    cout << "Product : " << ff3.num << "/" << ff3.dnum;
                    break;

        case '4' :  ff3 = fdiv(ff1, ff2);
                    cout << "Quotient : " << ff3.num << "/" << ff3.dnum;
                    break;
    }

    return 0;
}


fraction getval(fraction f1)
{
    cout << "Enter the Fraction : " ;
    cin >> f1.num ;
    cout << "/";
    cin >> f1.dnum;
    return f1;
}


fraction fadd(fraction f1, fraction f2)
{
    f3.num = (f1.num * f2.dnum) + (f2.num * f1.dnum);
    f3.dnum = (f1.dnum * f2.dnum);
    return f3;
}


fraction fsub(fraction f1, fraction f2)
{
    f3.num = (f1.num * f2.dnum) - (f2.num * f1.dnum);
    f3.dnum = (f1.dnum * f2.dnum);
    return f3;

}

fraction fmul(fraction f1, fraction f2)
{
    f3.num = f1.num * f2.num;
    f3.dnum = (f1.dnum * f2.dnum);
    return f3;
}

fraction fdiv(fraction f1, fraction f2)
{
    f3.num = (f1.num * f2.dnum);
    f3.dnum = (f2.num * f1.dnum);
    return f3;
}
