//Function Overloading.cpp


#include <iostream>

using namespace std;

void repchar();
void repchar(char);
void repchar(char, int);

int main()
{
    repchar();
    repchar('=');
    repchar('+', 30);
    return 0;
}

//repchar()
//displays 45 asterisks
void repchar()
{
    for(int j=0; j<45; j++)
        cout << '*';
    cout << endl;
}


//repchar()
//displays 45 specified character
void repchar(char ch)
{
    for(int j=0; j<45; j++)
        cout << ch;
    cout << endl;

}

//repchar()
//displays specified character specified times
void repchar(char ch, int n)
{
    for(int j=0; j<n; j++)
        cout << ch;
    cout << endl;
}
