//C05E05.cpp

#include <iostream>

using namespace std;

long hms_to_secs(int, int, int);


int main()
{
    int hrs, mins, secs, totalsecs;
    do
    {
        cout << "Enter the time enter (0 hrs 0 mins 0 secs to exit)\nHours: ";
        cin >> hrs;
        cout << "Minutes: ";
        cin >> mins;
        cout << "Seconds: ";
        cin >> secs;
        totalsecs = hms_to_secs(hrs, mins, secs);
        cout << "the total time in seconds is " << totalsecs << endl << endl;

    }while(hrs!=0 && mins!=0 && secs!=0);

    return 0;
}


//hms_to_secs()
//Converts hrs mins and secs to totalsecs
long hms_to_secs(int h, int m, int s)
{
    return (h*3600 + m*60 + s);
}
