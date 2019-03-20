//C03E08.cpp
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int pound[2], shillings[2], pence[2];
    char ch;
    do
    {
        for(int n=0; n<2; n++)
    {
        cout << "Enter Amount "<< n+1 <<"\nPounds : ";
        cin >> pound[n];
        cout << "Enter Shillings : ";
        cin >> shillings[n];
        cout << "Enter Pence : ";
        cin >> pence[n];
        cout << "The Amount is : "<< '\x9c' << pound[n] <<'.'<< shillings[n] <<'.'<< pence[n] << endl << endl << endl;
    }
    pound[2]=pound[0]+pound[1];
    shillings[2]=shillings[0]+shillings[1];
    pence[2]=pence[0]+pence[1];
    if (pence[2] >= 12)
    {
        shillings[2]++;
        pence[2]%=12;
    }
    if (shillings[2] >= 20)
    {
        pound[2]++;
        shillings[2]%=20;
    }
    cout << "The Sum is : "<< '\x9c' << pound[2] <<'.'<< shillings[2] <<'.'<< pence[2] << endl;
    cout<< "\nContinue Again?(y/n): ";
    ch = getche();
    cout << endl << "++++++++++++++++++++++++++++++++" << endl << endl;
    }while(ch!='n');
       return 0;
}
