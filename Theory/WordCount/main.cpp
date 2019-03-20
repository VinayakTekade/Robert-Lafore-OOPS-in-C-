//Wordcount.cpp
//Demonstrates use of enum and counts the no of words in a phrase

#include <iostream>
#include <conio.h>
using namespace std;

enum Word { yes, no };

int main()
{
    char ch = 'a';
    int wdcount = 0;
    Word word = no;
    cout << "\nEnter a Phrase: ";
    do
    {
        ch = getche();
        if (ch == ' ' || ch == '\r')
           {
               if (word == yes)
            {
                wdcount++;
                word = no;
            }

           }
        else if (word == no)
            word = yes;

    }while (ch != '\r');
    cout << "\nNo of Words is " << wdcount << endl;
    return 0;
}
