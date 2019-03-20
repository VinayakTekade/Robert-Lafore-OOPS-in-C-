//C05E02.cpp

#include <iostream>

using namespace std;


double power(double, int p=2);


int main()
{
    double number, sol;
    int pwr;
    char ch;
    cout << "Enter a Number: ";
    cin >> number;
    cout <<" Want to enter power? (y/n): ";
    cin >> ch;
    if(ch=='y')
    {
      cout << "Enter Power: ";
      cin >> pwr;
      sol = power(number, pwr);
    }
    else sol = power(number);
    cout << "The answer is " << sol;

    return 0;
}


//power()
//Multiplies a number specific number of times
double power(double n, int p)
{
    double ans=1.0;
    for(int i=0; i<p; i++)
        ans*=n;
    return ans;
}
