//if_Statement.cpp
// Demonstrates if statement

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    unsigned long n, j;
    cout<< "Enter a number : ";
    cin >> n;
    for (j=2; j<= n/2; j++)
        if(n%j == 0)
            {
                cout<< "It's not a prime number" << endl;
                cout << n << " is divisible by " << j << endl;
                exit(0);
            }
        cout << "It's a prime number" << endl;


    return 0;
}


/* Library Function exit()
When it is detected that the number is not prime number, there is no sense proving it is not a prime number again.
therefore we used exit(0) to end the program returning 0 to compiler( useful to detect error level value in batch files).
