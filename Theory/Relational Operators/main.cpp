//relational_operator.cpp
//Demonstrates relational operators
#include <iostream>

using namespace std;

int main()
{
    int numb;
    cout << "Enter a Number : ";
    cin >> numb;
    cout << numb << " less than 10 is " << (numb < 10) << endl
         << numb << " more than 10 is " << (numb > 10) << endl
         << numb << " equal to 10 is " << (numb == 10) << endl;
    return 0;
}
