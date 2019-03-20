//C05E11.cpp

#include <iostream>
#include <conio.h>

using namespace std;


struct sterling
{
    int pound, shillings, pence;
}s1, s2, s3, s4, s5;



sterling get(sterling&);

sterling add(sterling&, sterling&);

void display(sterling&);


int main()
{
        sterling ss1, ss2, ss3;
        ss1 = get(ss1);
        ss2 = get(ss2);
        ss3 = add(ss1, ss2);
        display(ss3);
        return 0;
}


//gets the amount from user
sterling get(sterling& s1)
{
        cout << "Enter Amount " <<"\nPounds : ";
        cin >> s1.pound;
        cout << "Enter Shillings : ";
        cin >> s1.shillings;
        cout << "Enter Pence : ";
        cin >> s1.pence;
        cout << "The Amount is : "<< '\x9c' << s1.pound <<'.'<< s1.shillings <<'.'<< s1.pence << endl << endl << endl;
        return s1;
}



//adds two amount
sterling add(sterling& s2, sterling& s3)
{

    s4.pound = s2.pound + s3.pound;
    s4.shillings = s2.shillings + s3.shillings;
    s4.pence = s2.pence + s3.pence;
    while(s4.pence >= 12 || s4.shillings >= 20 )
    {
        if (s4.pence >= 12)
        {
        s4.shillings++;
        s4.pence -= 12;
        }
    if (s4.shillings >= 20)
        {
        s4.pound++;
        s4.shillings -= 20;
        }
    }
    return s4;
}


//displays the sum
void display(sterling& s5)
{
    cout << "The Sum is : "<< '\x9c' << s5.pound <<'.'<< s5.shillings <<'.'<< s5.pence << endl;
}
