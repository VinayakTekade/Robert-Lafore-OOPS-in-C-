// CharCount.cpp
// Counts the number of words and letters using getche()

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int chcount =0, wdcount=1;
    char ch;
    cout << "Enter a Phrase : ";
    while( (ch=getche())!= '\r')
    {
        if( ch== ' ')
            wdcount++;
        else
            chcount++;
    }
    cout << endl << "The Number of Words: " << wdcount << endl;
    cout << "The Number of Letters: " << chcount << endl;
    return 0;
}
