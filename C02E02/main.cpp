//C02E02.cpp
//Chapter 2 Exercise 2
//WAP to display
/* 1990      135
   1991     7290
   1992    11300
   1993    16200
*/
// using single cout statement

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long R1 = 135, R2 = 7290, R3 = 11300, R4 = 16200;
    cout << setw(4) << " 1990 " << setw(5) << R1 << endl
         << setw(4) << " 1991 " << setw(5) << R2 << endl
         << setw(4) << " 1992 " << setw(5) << R3 << endl
         << setw(4) << " 1993 " << setw(5) << R4 << endl;
    return 0;
}
