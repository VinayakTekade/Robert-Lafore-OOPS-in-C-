//C03E06.cpp

#include <iostream>

using namespace std;

int main()
{
    unsigned long numb;
    do
    {
        int fact = 1;
        cout << "Enter a number (0 to exit) : ";
        cin >> numb;
        for(int j= numb; j>0; j--)
        fact*=j;
        if(numb!= 0)
            cout << "Factorial is " << fact << endl;

    }while (numb!=0);



    return 0;
}
