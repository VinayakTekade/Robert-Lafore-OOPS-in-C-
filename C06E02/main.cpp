//C06E02.cpp

#include <iostream>
#include <conio.h>

using namespace std;

class tollbooth
{
private:
    unsigned int car;
    double total_amt;

public:
    tollbooth() : car(0), total_amt(0.0)
    {}
    void payingcar()
    {
        car++;
        total_amt += 0.50;
    }
    void nopaycar()
    {   car++; }
    void display() const
    {
        cout << "\n\nthe number of cars passed is " << car << " \nthe total amt is " << total_amt << endl << endl;
    }
};


int main()
{
    tollbooth day1;
    char ch;
    cout << "Enter \'p\' for paying car \nEnter \'n\' for non paying car\n" ;
    do
    {
        ch = getche();
        cout << endl;
        if(ch == 'p') day1.payingcar();
        else if(ch == 'n') day1.nopaycar();


    }while(ch != 27);

    day1.display();

    return 0;
}
