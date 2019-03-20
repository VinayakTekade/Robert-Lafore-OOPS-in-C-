//charvar.cpp
//demonstrates character variables
#include <iostream>

using namespace std;

int main()
{
    char charvar1 = 'A';
    char charvar2 = '\t';

    cout << charvar1 << charvar2;
    charvar1 = 'B';
    cout << charvar1 << endl;

    cout << "\"Run, Spot, Run\" She said.";     //Use of Escape Sequences
    return 0;
}


/* ESCAPE SEQUENCES
   \a    Bell(Beep)
   \b    Backspace
   \f    Formfeed
   \n    Newline
   \r    Return
   \t    Tab
   \\    Backslash
   \'    Single Quotation Mark
   \"    Double Quotation Mark
   \xdd  Hexadecimal Notation
*/
