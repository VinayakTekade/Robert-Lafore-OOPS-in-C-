//C05E10.cpp

#include <iostream>
#include <conio.h>

using namespace std;

inline void call()
{
    int count = 0;
    count++;
    cout << "OuterCount has been called " << count << " times." << endl;
}


int main()
{
    int cnt = 0;
    char ch;
    do
    {
        call();
        cnt++;
        cout << "InnerCount has been called " << cnt << "times." << endl;
        cout << "Press n to exit: ";
        ch = getche();
        cout << endl;
    }while(ch!='n');


    return 0;
}
