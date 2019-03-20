//C05E06.cpp

#include <iostream>

using namespace std;

struct time
{
    int hours, minutes, seconds;
}t1,t2,t3,t4;

long time_to_secs(time, time);
time secs_to_time(long);

int main()
{
    long total=0;
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
    t4 = secs_to_time(total);
    cout << " Sum of two time is : " << t4.hours << ":" << t4.minutes << ":" <<  t4.seconds;
    return 0;
}


long time_to_secs(time tt1, time tt2)
{
    return (tt1.hours + tt2.hours)*3600 + (tt1.minutes + tt2.minutes)*60 + tt1.seconds + tt2.seconds;
}
time secs_to_time(long)
{
    long total=0;
    total = time_to_secs(t1, t2);
    cout << "Total Seconds : " << total;
    t3.hours = total/3600;
    t3.minutes = (total- t3.hours*3600)/60;
    t3.seconds = total - t3.hours*3600 - t3.minutes*60;
    if(t3.hours>12)
        t3.hours -= 12;
    return t3;
}
