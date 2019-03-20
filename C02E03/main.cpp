//C02E03
//Chapter 2 Exercise 3
//WAP to display
/* 10
   20
   19
*/
// use an int constant for 10, an arithmetic assignment operator to generate the 20, and a decrement operator for 19

#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    cout << a << endl;
    a*=2;
    cout << a-- << endl
         << a;
    return 0;
}
