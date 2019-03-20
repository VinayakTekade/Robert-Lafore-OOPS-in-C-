//C05E09.cpp

#include <iostream>

using namespace std;

struct time
{
    int hrs;
    int mins;
    int secs;
}t1, t2;

void Swap(int& n1, int& n2);
int main()
{
    cout << "Enter time 1\nhours: ";
    cin >> t1.hrs;
    cout << "mins: ";
    cin >> t1.mins;
    cout << "secs: ";
    cin >> t1.secs;
    cout << "Enter time 2\nhours: ";
    cin >> t2.hrs;
    cout << "mins: ";
    cin >> t2.mins;
    cout << "secs: ";
    cin >> t2.secs;

    cout << "\n\nTime 1 is " << t1.hrs <<":" << t1.mins << ":" << t1.secs << endl;
    cout << "Time 2 is " << t2.hrs <<":" << t2.mins << ":" << t2.secs << endl;

    cout << "\n\nSwapping\n\n";
    Swap(t1.hrs, t2.hrs);
    Swap(t1.mins, t2.mins);
    Swap(t1.secs, t2.secs);

    cout << "Time 1 is " << t1.hrs <<":" << t1.mins << ":" << t1.secs << endl;
    cout << "Time 2 is " << t2.hrs <<":" << t2.mins << ":" << t2.secs << endl;
    return 0;
}



void Swap(int& n1, int& n2)
{
    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}
