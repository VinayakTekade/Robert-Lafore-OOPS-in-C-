//Enumeration.cpp

#include <iostream>

using namespace std;

enum Days{Sun, Mon, Tue, Wed, Thu, Fri, Sat};

int main()
{
    Days day1 = Mon, day2 = Thu;
    int diff = day2 - day1;
    cout << "Days between = " << diff << endl;
    if(day1 < day2)
        cout << "day1 comes before day2\n";
    return 0;
}
