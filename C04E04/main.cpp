//C04E04.cpp

#include <iostream>

using namespace std;

struct Employees
{
    int number;
    float salary;
};

int main()
{
    Employees emp[2];
    for (int i=0; i<=2; i++)
    {
        cout << "\nEnter the details of Employee " << i+1 << endl;
        cout << " Employee Number: ";
        cin >> emp[i].number;
        cout << "Employee Salary: ";
        cin >> emp[i].salary;
    }

    cout << "\n\n**********************************************************\n\n" ;
    for (int j=0; j<=2; j++)
    {
        cout << "\n\nThe details of Employee " << j+1 << endl;
        cout << " Employee Number: " << emp[j].number << endl;
        cout << "Employee Salary: " << emp[j].salary << endl;
    }

    return 0;
}
