//C03E01

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int number;
    cout << "Enter a Number : " ;
    cin >> number;
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<10;j++)
        cout << setw(7) << number*(10*i+j+1);
        cout << endl;
    }
    return 0;
}
