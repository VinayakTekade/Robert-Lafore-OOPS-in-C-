//C04E10.cpp

#include <iostream>

using namespace std;

struct sterling
{
   int pound, shillings, pence;
   double dpound;
}s;

int main()
{
    float temp1, temp2;
    cout << " Enter the Decimal Pounds : "<< '\x9c';
    cin >> s.dpound;
    s.pound = (int)(s.dpound);
    temp1 = s.dpound - s.pound;
    s.shillings = (int)(temp1* 20);
    temp2 = (temp1*20) - s.shillings;
    s.pence = (int)(temp2 * 12);
    cout << "The Equivalent Old Notation is : "<< '\x9c' << s.pound<<'.'<< s.shillings <<'.'<< s.pence << endl;
    return 0;
}
