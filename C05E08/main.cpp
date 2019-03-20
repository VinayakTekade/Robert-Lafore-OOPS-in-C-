//C05E08.cpp

#include <iostream>

using namespace std;

void Swap(int&, int&);

int main()
{
    int numb1, numb2;
    cout << "Enter First Number: ";
    cin >> numb1;
    cout << "Enter Second Number: ";
    cin >> numb2;
    Swap(numb1, numb2);
    cout << "The values after swapping is \nFirst: " << numb1 << "\nSecond: " << numb2;
    return 0;
}


void Swap(int& n1, int& n2)
{
    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}
