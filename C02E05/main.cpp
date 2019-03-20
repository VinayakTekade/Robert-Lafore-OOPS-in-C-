//C02E05.cpp
//Chapter 2 Exercise 5
//WAP to take a letter from user and display either zero or nonzero depending on if the letter is is lowercase or uppercase

#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    char ch;
    bool ans;
    cout << "Enter a letter : " ;
    cin >> ch;
    ans = islower(ch);
    cout <<"Is the letter lowercase?(0 for false, 1 for true) : " << ans;
    return 0;
}
