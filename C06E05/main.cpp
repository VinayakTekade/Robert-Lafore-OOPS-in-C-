//C06E05.cpp

#include <iostream>

using namespace std;

class Date
{
private:
    int day, month, year;
public:
    void getdate()
    {
        cout << "Enter the day: ";
        cin >> day;
        cout << "Enter the month: ";
        cin >> month;
        cout << "Enter the year: ";
        cin >> year;
    }
    void showdate() const
    {
        cout << "\n\nThe Date is " << day << "/" << month << "/" << year << endl;
    }
};

int main()
{
    Date d;
    d.getdate();
    d.showdate();
    return 0;
}
