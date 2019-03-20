//C04E07.cpp

#include <iostream>

using namespace std;

struct Date
{
    int day, month, year;
};

enum etype {labourer, secretary, manager, accountant, executive, researcher} ;

struct Employees
{
    int number;
    float salary;
    Date DOE;
    etype e;
};


int main()
{
    Employees emp[2];
    char ch;
    int i = 0,j = 0;
    do
    {

        cout << "\n\nEnter the details of Employee " << i+1 << endl;
        cout << " Employee Number: ";
        cin >> emp[i].number;
        cout << "Employee Salary: ";
        cin >> emp[i].salary;
        cout << "Employee Type";
        cin >> ch;
        switch(ch)
        {
            case 'l' : emp[i].e = labourer; break;
            case 's' : emp[i].e = secretary; break;
            case 'm' : emp[i].e = manager; break;
            case 'a' : emp[i].e = accountant; break;
            case 'e' : emp[i].e = executive; break;
            case 'r' : emp[i].e = researcher; break;
        }
        cout << "Date of first employment: " << endl;
        cout << "Date: ";
        cin >> emp[i].DOE.day;
        cout << "Month: ";
        cin >> emp[i].DOE.month;
        cout << "Year: ";
        cin >> emp[i].DOE.year;
        i++;

    }while(i<=2);

    cout << "\n\n**********************************************************\n\n" ;
    do
    {
        j++;
        cout << "\n\nThe details of Employee " << j+1 << endl;
        cout << " Employee Number: " << emp[j].number << endl;
        cout << "Employee Salary: " << emp[j].salary << endl;
        cout << "The employee type is ";

    switch(emp[j].e)
    {
        case labourer : cout << "labourer"; break;
        case secretary : cout << "secretary"; break;
        case manager : cout << "manager"; break;
        case accountant : cout << "accountant"; break;
        case executive : cout << "executive"; break;
        case researcher : cout << "researcher"; break;
    }
    cout << "\n\nThe Date is " << emp[j].DOE.day << "/" << emp[j].DOE.month << "/" << emp[j].DOE.year << endl;
    }while(j<=2);

    return 0;
}
