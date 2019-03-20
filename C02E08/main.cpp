//C02E08
//Chapter 2 Exercise 8
// Rewrite width.cpp and replace blank spaces with "."

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long pop1 = 2425785, pop2 = 47, pop3 = 9761;            // setw() only works on variables and hence do not write directly in cout statement

    cout << setw(8) << "Location " << setfill('.') << setw(12) << "Population" << endl
         << setw(8) << "Portcity " << setfill('.') << setw(12) << pop1 << endl
         << setw(8) << "Hightown " << setfill('.') << setw(12) << pop2 << endl
         << setw(8) << "Lowville " << setfill('.') << setw(12) << pop3 << endl;

    return 0;
}

