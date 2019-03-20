//C06E06.cpp

#include <iostream>

using namespace std;


class employee
{
private:
    int number;
    float salary;
    enum etype {labourer, secretary, manager, accountant, executive, researcher} ;
    etype e;
public:

    etype getetype()
    {
        char ch;
        cout << "Enter Employee Type (first letter only)\n\t\t [labourer, secretary, manager, accountant, executive, researcher]: ";
        cin >> ch;
        switch(ch)
        {
            case 'l' : e = labourer; break;
            case 's' : e = secretary; break;
            case 'm' : e = manager; break;
            case 'a' : e = accountant; break;
            case 'e' : e = executive; break;
            case 'r' : e = researcher; break;
        }
        return e;
    }
    void showetype(etype e1) const
    {
        cout << "The employee type is ";

        switch(e1)
        {
            case labourer : cout << "labourer"; break;
            case secretary : cout << "secretary"; break;
            case manager : cout << "manager"; break;
            case accountant : cout << "accountant"; break;
            case executive : cout << "executive"; break;
            case researcher : cout << "researcher"; break;
        }
    }
    class date
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
        cout << "\nThe Date is " << day << "/" << month << "/" << year << endl;
        }
    }d;

     void getdata()
    {
        cout << "\nEnter the details of Employee " <<  endl;
        cout << " Employee Number: ";
        cin >> number;
        cout << "Employee Salary: ";
        cin >> salary;
        e = getetype();
        cout << "Employee's Date of joining: " << endl;
        d.getdate();

    }
    void showdata() const
    {
        cout << "\n\nThe details of Employee " << endl;
        cout << " Employee Number: " << number << endl;
        cout << "Employee Salary: " << salary << endl;
        showetype(e);
        d.showdate();
    }

};



int main()
{
    int i = 3;
    employee emp[i];
    for(int i=0; i<3; i++)
        {
            emp[i].getdata();
            cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        }
    cout <<"\n#################################################################################\n";
    for(int i=0; i<3; i++)
        {
            emp[i].showdata();
            cout << "\n******************************************************************\n";
        }

    return 0;
}
