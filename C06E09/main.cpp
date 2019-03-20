//C06E09.cpp

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class fraction
{
private:
    int num;
    int dnum;

public:

    fraction() : num(0), dnum(0)
    { }
    void getf()
    {
        cout << "Enter the Fraction : " ;
        cin >> num ;
        cout << "/";
        cin >> dnum;
    }

    void showf() const
    {
        cout << "\nThe fraction is " << num << "/" << dnum << endl;
    }

    fraction add(fraction f1)
    {
        fraction tmp;
        tmp.num = num*f1.dnum + f1.num*dnum;
        tmp.dnum = dnum*f1.dnum;

        return tmp;
    }

};

int main()
{
    fraction ff1, ff2, ff3;
    char ch;
    do
    {
        system("cls");
        ff1.getf();
        ff2.getf();
        ff3 = ff1.add(ff2);
        ff3.showf();
        cout << "Continue?(y/n): ";
        ch = getche();
        cout << endl;

    }while(ch != 'n');

    return 0;
}
