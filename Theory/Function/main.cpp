//Functions
//Demonstrates use of function with variables as argument

#include <iostream>

using namespace std;

void repchar(char , int );                              //Function Prototype: indicates compiler that an function named repchar has been declared later in this program

int main()
{
    char chin;
    int nin;
    cout << "Enter a Character: ";
    cin >> chin;
    cout << "Enter number of times to repeat it: ";
    cin >> nin;
    repchar(chin, nin);                                 //Function Calling: Invokes function

    return 0;
}


void repchar(char ch, int n)                            //Function Declaration: The set of codes is named.
                                                        //Arguments: Piece of data fed to the function
                                                        //Here the arguments are passed by value (A copy of data is made in a separate variable and hence changes made to the data will not reflect
                                                                                                 // in the main function)
{
    for(int i=0; i<n; i++)
        cout << ch;
    cout << endl;
}
