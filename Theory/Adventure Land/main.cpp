//Adventure Land.cpp
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <random>
using namespace std;

int main()
{
    char dir = 'a';
    int x=10, y=10;
    int Tx = (x+ (rand()%5)), Ty = (y+(rand()%5));

    while(dir != '\r')
    {
        cout << " \n \nYour Location is ("<< x << "," << y << ")" << endl;
        if (x<5 || x >15 || y<5 || y>15)
            cout << "Warning Going Out of Bounds" << endl;
        cout << "Enter the direction to move (n,e,w,s) : ";
        dir = getche();
        switch(dir)
        {
            case 'n' : y++; break;
            case 's' : y--; break;
            case 'e' : x++; break;
            case 'w' : x--; break;
        }

        if(x==Tx && y==Ty)
        {
            cout << " \n ++++++++++You found The Treasure!!!+++++++++++++" << endl;
            exit(0);
        }
         cout << " \n You are " << (Tx-x)+(Ty-y) << "steps away" << endl;
    }
    return 0;
}
