//whilepow4.cpp
//prints numbers raised to fourth power
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int pow = 1, numb = 1;
    while (pow<9999)
    {
        cout << setw(2) << numb << setw(5) << pow <<endl;           // displays 4th power
        ++numb;                                                     //gets ready for next power
        pow = numb*numb*numb*numb;                                  //calculates 4th power
    }

    return 0;
}
