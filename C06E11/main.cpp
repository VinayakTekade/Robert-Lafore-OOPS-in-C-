//C06E011.cpp

#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

class fraction
{
private:
    int num, dnum;
public:
    fraction() : num(0), dnum(0)
    { }

    void getval()
    {
        cout << "Enter the Values: \nNumerator: ";
        cin >> num;
        cout << "Denominator: ";
        cin >> dnum;
    }

    void showval() const
    {
        cout << "The Answer is " << num << '/' << dnum << endl;
    }

    void fadd(fraction f1, fraction f2)
    {
        num = f1.num* f2.dnum + f2.num*f1.dnum;
        dnum = f1.dnum * f2.dnum;
    }

    void fsub(fraction f1, fraction f2)
    {
        num = f1.num*f2.dnum - f2.num*f1.dnum;
        dnum = f2.dnum*f1.dnum;
    }

    void fmul(fraction f1, fraction f2)
    {
        num = f1.num * f2.num;
        dnum = f1.dnum * f2.dnum;
    }

    void fdiv(fraction f1, fraction f2)
    {
        num = f1.num*f2.dnum;
        dnum = f2.num*f1.dnum;
    }

    void lowterms()
    {
        long tnum, tden, temp, gcd;

        tnum = labs(num);
        tden = labs(dnum);
        if(tden==0 )
            { cout << "Illegal fraction: division by 0";
              exit(1);
            }
        else if( tnum==0 )
            { num=0;
              dnum = 1;
              return;
            }


        while(tnum != 0)
            {
                if(tnum < tden)
                { temp = tnum;
                  tnum = tden;
                  tden = temp;
                }
                tnum = tnum - tden;
            }
        gcd = tden;
        num = num / gcd;
        dnum = dnum / gcd;
    }
};



int main()
{
    fraction ff1, ff2, ff3;
    ff1.getval();
    ff2.getval();
    int ch;
    cout << "Enter choice: ";
    cin >> ch;
    switch(ch)
    {
        case 1 : ff3.fadd(ff1, ff2);
                 ff3.lowterms();
                 ff3.showval();
                 break;

        case 2 : ff3.fsub(ff1, ff2);
                 ff3.lowterms();
                 ff3.showval();
                 break;

        case 3 : ff3.fmul(ff1, ff2);
                 ff3.lowterms();
                 ff3.showval();
                 break;

        case 4 : ff3.fdiv(ff1, ff2);
                 ff3.lowterms();
                 ff3.showval();
                 break;
    }
    return 0;
}
