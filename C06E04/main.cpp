//C06E04.cpp

#include <iostream>

using namespace std;

class employee
{
private:
    int number;
    float salary;
public:
    void getdata()
    {
        cout << "\nEnter the details of Employee " <<  endl;
        cout << " Employee Number: ";
        cin >> number;
        cout << "Employee Salary: ";
        cin >> salary;
    }
    void showdata() const
    {
        cout << "\n\nThe details of Employee " << endl;
        cout << " Employee Number: " << number << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main()
{
    int i = 3;
    employee emp[i];
    for(i=0; i<3; i++)
        emp[i].getdata();
    cout << "\n**************************************\n";
    for(i=0; i<3; i++)
        emp[i].showdata();

    return 0;
}
