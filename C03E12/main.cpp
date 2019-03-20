//C03E12.cpp

#include <iostream>
#include <conio.h>

using namespace std;

int num1,dnum1, num2, dnum2;

void getval()
{
    cout << "Enter the first Fraction : " ;
    cin >> num1 ;
    cout << "/";
    cin >> dnum1;
    cout << "Enter the second Fraction : ";
    cin >> num2 ;
    cout << "/";
    cin >> dnum2;
}

int main()
{
   int ch;
   int Snum,Sdnum,Dnum,Ddnum,Mnum,Mdnum,Vnum,Vdnum;
   cout << "Type 1 for Addition" << endl;
   cout << "Type 2 for Subtraction" << endl;
   cout << "Type 3 for Multiplication" << endl;
   cout << "Type 4 for Division" << endl;
    cin >> ch;
    system("cls");
    switch(ch)
    {
        case 1 :    getval();
                    Snum = (num1 * dnum2) + (num2 * dnum1);
                    Sdnum = (dnum1 * dnum2);
                    cout << "Sum : " << Snum << "/" << Sdnum;
                    break;

        case 2 :    getval();
                    Dnum = (num1 * dnum2) - (num2 * dnum1);
                    Ddnum = (dnum1 * dnum2);
                    cout << "Difference : " << Dnum << "/" << Ddnum;
                    break;

        case 3 :    getval();
                    Mnum = num1 * num2;
                    Mdnum = (dnum1 * dnum2);
                    cout << "Product : " << Mnum << "/" << Mdnum;
                    break;

        case 4 :    getval();
                    Vnum = (num1 * dnum2);
                    Vdnum = (num2 * dnum1);
                    cout << "Quotient : " << Vnum << "/" << Vdnum;
                    break;
    }




    return 0;
}
