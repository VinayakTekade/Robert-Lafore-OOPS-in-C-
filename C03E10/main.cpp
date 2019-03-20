//C03E10
#include <iostream>

using namespace std;

int main()
{
   long princ, rate, interest, reqamt=0;
    int time= -1;
    cout << "Enter the \nPrincipal Amount: ";
    cin >> princ;
    cout << "Final Amount: ";
    cin >> reqamt;
    cout << "Rate: ";
    cin >> rate;
    while(princ <= reqamt)
    {

        interest= (princ*rate)/100;
        princ += interest;
        time++;

    }
    cout << "\ntime is " << time << endl;
    return 0;
}
