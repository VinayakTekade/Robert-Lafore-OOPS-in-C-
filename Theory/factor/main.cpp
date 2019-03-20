//factor.cpp
//calculates factorials

#include <iostream>

using namespace std;

int main()
{
    unsigned long numb;
    int fact = 1;
    cout << "Enter a number : ";
    cin >> numb;
    for(int j= numb; j>0; j--)
        fact*=j;
    cout << "Factorial is " << fact << endl;
    return 0;
}
