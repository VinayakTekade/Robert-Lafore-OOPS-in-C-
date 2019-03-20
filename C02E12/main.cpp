//C02E12
//Chapter 2 Exercise 12
//WAP to convert Decimal Pounds into Old Notation
#include <iostream>
using namespace std;
int main()
{
    float pound, shillings, pence, dpound, temp1, temp2;
    cout << " Enter the Decimal Pounds : "<< '\x9c';
    cin >> dpound;
    pound = (int)(dpound);
    temp1 = dpound - pound;
    shillings = (int)(temp1* 20);
    temp2 = (temp1*20) - shillings;
    pence = (int)(temp2 * 12);
    cout << "The Equivalent Old Notation is : "<< '\x9c' << pound<<'.'<< shillings <<'.'<< pence << endl;
}
