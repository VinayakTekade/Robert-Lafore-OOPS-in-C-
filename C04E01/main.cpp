// C04E01.cpp

#include <iostream>

using namespace std;

struct Phone
{
    int area;
    int exchange;
    int number;
}no1, no2;

int main()
{
    cout << "Enter \nArea code: ";
    cin >>no1.area;
    cout << "Exchange code: ";
    cin >>no1.exchange;
    cout << "Number: ";
    cin >> no1.number;

    no2 = { 212, 767, 8900};

    cout << "My Number is " << no2.area << " " << no2.exchange << "-"  << no2.number << endl;
    cout << "Your Number is " << no1.area << " "  << no1.exchange << "-"  << no1.number << endl;

    return 0;
}
