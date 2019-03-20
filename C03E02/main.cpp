#include <iostream>

using namespace std;

int main()
{
    float ctemp,ftemp;
    int choice;
    char ch;
    do
    {

    cout << "Type 1 to convert Fahrenheit to Celsius " << endl;
    cout << "Type 2 to convert Celsius to Fahrenheit " << endl;
    cout << "Enter your choice : " ;
    cin >> choice;
    if (choice == 1)
    {
        cout << "Enter the temperature in Fahrenheit : ";
        cin >> ftemp;
        ctemp = (ftemp-32)/1.8;
        cout << "The temperature in Celsius is : " << ctemp << endl;
    }

    if (choice == 2)
    {
        cout << "Enter the temperature in Celsius : ";
        cin >> ctemp;
        ftemp = (ctemp*1.8)+32;
        cout << "The temperature in Fahrenheit is : " << ftemp << endl;
    }
    cout << " Continue (y/n) : ";
    cin >> ch;
    }while(ch !='n');
    return 0;
}
