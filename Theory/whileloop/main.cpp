//whileloop.cpp
//demonstrates while loop
//takes input from user until the the input is zero
#include <iostream>

using namespace std;

int main()
{
    int n = 99;         // make sure n isnt initialised to 0
    while(n!=0)         // loop until n is 0
        cin >> n;       //read a number into n
    cout << endl;
    return 0;
}
