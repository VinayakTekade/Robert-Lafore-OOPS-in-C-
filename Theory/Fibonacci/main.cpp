//fibonacci.cpp
//demonstrates while loop using fibonacci series

#include <iostream>

using namespace std;

int main()
{
    unsigned long next = 0, last = 1, sum;
    while(last < 999999)
    {

        cout << last << endl;
        sum = next + last;
        next = last;
        last = sum;

    }

    return 0;
}
