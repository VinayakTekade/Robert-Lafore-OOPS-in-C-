//C04E06.cpp

#include <iostream>

using namespace std;

enum etype {labourer, secretary, manager, accountant, executive, researcher} ;

int main()
{
    char ch;
    etype e;
    cout << "Enter Employee Type (first letter only)\n\n [labourer, secretary, manager, accountant, executive, researcher]";
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

    cout << "The employee type is ";

    switch(e)
    {
        case labourer : cout << "labourer"; break;
        case secretary : cout << "secretary"; break;
        case manager : cout << "manager"; break;
        case accountant : cout << "accountant"; break;
        case executive : cout << "executive"; break;
        case researcher : cout << "researcher"; break;
    }

    return 0;
}
