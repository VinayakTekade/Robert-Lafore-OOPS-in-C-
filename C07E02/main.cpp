#include <iostream>
#include <string>

using namespace std;

class employee
{
private:
    string name;
    long emp_no;
public:
    void getdata()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter employee number : ";
        cin>>emp_no;
    }
    void putdata()
    {
        cout<<"Name : " << name << endl;
        cout<<"Employee Number : "<< emp_no << endl;
    }
};

int main()
{
    int n;
    employee e[100];
    cout<<"Enter the number of employees ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
      e[i].getdata();
    }
    for(int i=0;i<10;i++) cout<<"*";
    cout<<endl;
    for(int i=0;i<n;i++)
    {
      e[i].putdata();
    }

    return 0;
}
