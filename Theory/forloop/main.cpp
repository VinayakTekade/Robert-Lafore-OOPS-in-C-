//forloop.cpp
//demonstrates for loop

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    for( int i=0;i<=10; i++)
        cout << setw(4) << i << setw(6) << i*i*i << endl;
    return 0;
}
