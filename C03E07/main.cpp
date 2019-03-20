//C03E07

#include <iostream>

using namespace std;

int main()
{
    long princ, rate, interest;
    int time;
    cout << "Enter the \nPrincipal Amount: ";
    cin >> princ;
    cout << "Time: ";
    cin >> time;
    cout << "Rate: ";
    cin >> rate;
    for(int i=0; i<time; i++)
    {
        interest= (princ*rate)/100;
        princ = princ + interest;
        cout << "\nAt the end of "<< i+1 << " years you will have " << princ << "Rupees.\n";

    }
    return 0;
}
