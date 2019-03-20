//C02E11.cpp
//Chapter 2 Exercise 11
//WAP to left justify the output
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setiosflags(ios::left) <<setw(10) << "Last name" << setw(11) << "First Name" << setw(18) << "Street Address" << setw(11) << "Town" << setw(6) << "State" << endl
         <<setw(10) << "Jones" << setw(11) << "Bernard" << setw(18) << " 109 Pine Lane" << setw(11) << "Littletown" << setw(6) << "MI" << endl
         <<setw(10) << "O'Brian" << setw(11) << "Coleen" << setw(18) << "42 E. 99th Ave." << setw(11) << "Bigcity" << setw(6) << "NY" << endl
         <<setw(10) << "Wong" << setw(11) << "Harry" << setw(18) << "121 A Albama St." << setw(11) << "Lakeville" << setw(6) << "IL" << endl;
    return 0;
}
