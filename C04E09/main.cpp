//C04E09

#include <iostream>

using namespace std;


struct time
{
    int hours, minutes, seconds;
};
int main()
{
    time t;
    long total;
    cout << " Enter time (24 hours format) \nHours: ";
    cin >> t.hours;
    cout << "Minutes: ";
    cin >> t.minutes;
    cout << "Seconds";
    cin >> t.seconds;
    total = t.hours*3600 + t.minutes*60 + t.seconds;
    cout << "Total seconds is " << total;
    return 0;
}
