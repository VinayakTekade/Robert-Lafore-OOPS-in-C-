//C03E04.cpp
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float op1;
    float op2;
    char sign,choice;
    do
    {
        system("cls");
        cout << "Enter First Number: ";
        cin >> op1;
        cout << "Operator: ";
        cin >> sign;
        cout << "Second Number : ";
        cin >> op2;
        switch(sign)
        {
            case '+' : cout << "Answer : " << op1 + op2; break;
            case '-' : cout << "Answer : " << op1 - op2; break;
            case '*' : cout << "Answer : " << op1 * op2; break;
            case '/' : cout << "Answer : " << op1 / op2; break;

            default : cout << "\n Wrong input \n";
        }
        cout << " \nWant to Continue (y/n) : ";
        choice = getche();
        cout << endl << endl << endl;
    }while(choice != 'n');
    return 0;
}

