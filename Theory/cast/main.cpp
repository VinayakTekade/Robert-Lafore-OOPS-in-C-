//cast.cpp
//tests signed and unsigned integers
#include <iostream>

using namespace std;

int main()
{
    int intvar = 1500000000;
    intvar = (intvar * 10) / 10;
    cout << "intvar = " << intvar << endl;                          //Wrong Answer
    intvar = 1500000000;
    intvar = (static_cast<double>(intvar) *10) / 10;
    cout << "intvar = " << intvar << endl;                          //Right Answer
    return 0;
}


/* TYPE CASTING
   type casting (also called coercion) is done by the expression

   aCharVar = static_cast<char>(anIntVar);

   since the range of int is less than the calculation answer, it shows
   wrong answer.
   (static_cast<double>(intvar) converts intvar into double temporarily and then calculates the Right Answer.

*/
