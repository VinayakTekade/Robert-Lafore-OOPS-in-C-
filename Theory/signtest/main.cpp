//signtest.cpp
//tests signed and unsigned integers
#include <iostream>

using namespace std;

int main()
{
    int signedvar = 1500000000;
    unsigned int unsignvar = 1500000000;

    signedvar = (signedvar * 2) / 3;
    unsignvar = (unsignvar * 2) / 3;

    cout << " signedvar = " << signedvar << endl;       //exceeds range
    cout << " unsignvar = " << unsignvar << endl;

    return 0;
}


/* therefore always check for range of Data Types */
