//C03E11.cpp

#include <iostream>
#include <conio.h>


using namespace std;


int main()
{
    int pound[2], shillings[2], pence[2];
    char ch;
    int scalar;
    cout << "To Add two amounts press 1 " << endl
         << "To subtract two amounts press 2 " << endl
         << "To multiply a number to an amount press 3" << endl;
    ch = getche();
    system("cls");
    switch(ch)
    {
    case '1' :
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
                pound[2] = pound[0] + pound[1];
                shillings[2] = shillings[0] + shillings[1];
                pence[2] = pence[0] + pence[1];


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
                break;

    case '2' :
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
                pound[2] = pound[0] - pound[1];
                shillings[2] = shillings[0] - shillings[1];
                pence[2] = pence[0] - pence[1];
                if (pence[2] < 0)
                {
                    shillings[2]--;
                    pence[2] %= 12;
                    pence[2] = 12 + pence[2];
                }
                if (shillings[2] < 0)
                {
                    pound[2]--;
                    shillings[2] %= 20;
                    shillings[2] = 20 + shillings[2];
                }
                cout << "The Difference is : "<< '\x9c' << pound[2] <<'.'<< shillings[2] <<'.'<< pence[2] << endl;
                break;

    case '3' :
                cout << "Enter Amount\nPounds : ";
                cin >> pound[0];
                cout << "Enter Shillings : ";
                cin >> shillings[0];
                cout << "Enter Pence : ";
                cin >> pence[0];
                cout << "The Amount is : "<< '\x9c' << pound[0] <<'.'<< shillings[0] <<'.'<< pence[0] << endl << endl << endl;
                cout << "Enter the scalar to be multiplied: ";
                cin >> scalar;
                pound[0]*=scalar;
                shillings[0]*=scalar;
                pence[0]*= scalar;
                while(pence[0] >= 12 && shillings[0] >= 20 )
                {
                    if (pence[0] >= 12)
                    {
                        shillings[0]++;
                        pence[0] %= 12;
                    }
                    if (shillings[0] >= 20)
                    {
                        pound[0]++;
                        shillings[0] %= 20;
                    }
                }

                cout << "The Multiplied Amount is : "<< '\x9c' << pound[0] <<'.'<< shillings[0] <<'.'<< pence[0] << endl << endl << endl;
                break;
    }
    return 0;
}
