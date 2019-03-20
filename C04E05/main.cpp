//C04E05.cpp

#include <iostream>

using namespace std;


struct Date
{
    int day, month, year;
};


int main()
{
    Date d;
    cout << "Enter the day: ";
    cin >> d.day;
    cout << "Enter the month: ";
    cin >> d.month;
    cout << "Enter the year: ";
    cin >> d.year;
    cout << "\n\nThe Date is " << d.day << "/" << d.month << "/" << d.year << endl;


    return 0;
}
