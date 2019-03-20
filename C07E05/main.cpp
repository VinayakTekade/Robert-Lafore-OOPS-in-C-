#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

class fraction
{
private:
    int num, dnum;
public:
    fraction() : num(0), dnum(1)
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

    void favg(int n)
    {
        dnum*=n;
    }
};



int main()
{
    fraction f[20], avg;
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element"<< i+1<<" : \n";
        f[i].getval();
        avg.fadd(avg,f[i]);
        avg.showval();
    }
    avg.favg(n);
    avg.lowterms();
    avg.showval();
    return 0;
}
