//C04E11.cpp

#include <iostream>

using namespace std;

struct time
{
    int hours, minutes, seconds;
}t1,t2,t3;

int main()
{
    long total;
    cout << " Enter time 1 (24 hours format) \nHours: ";
    cin >> t1.hours;
    cout << "Minutes: ";
    cin >> t1.minutes;
    cout << "Seconds: ";
    cin >> t1.seconds;
    cout << " Enter time 2 (24 hours format) \nHours: ";
    cin >> t2.hours;
    cout << "Minutes: ";
    cin >> t2.minutes;
    cout << "Seconds: ";
    cin >> t2.seconds;
    total = (t1.hours + t2.hours)*3600 + (t1.minutes + t2.minutes)*60 + t1.seconds + t2.seconds;
    cout << "Total Seconds : " << total;
    t3.hours = total/3600;
    t3.minutes = (total- t3.hours*3600)/60;
    t3.seconds = total - t3.hours*3600 - t3.minutes*60;
    if(t3.hours>12)
        t3.hours -= 12;
    cout << " Sum of two time is : " << t3.hours << ":" << t3.minutes << ":" <<  t3.seconds;
    return 0;
}
