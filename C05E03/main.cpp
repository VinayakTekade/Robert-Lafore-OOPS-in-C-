//C05E03.cpp

#include <iostream>

using namespace std;


void ZeroSmaller(int&, int&);


int main()
{
    int numb1, numb2;
    cout << "Enter two Numbers \n First: ";
    cin >> numb1;
    cout << "Second: ";
    cin >> numb2;
    ZeroSmaller(numb1, numb2);
    cout << "The two numbers after changing the smaller one to zero \nFirst: " << numb1 << "\n Second: " << numb2;
    return 0;
}


//ZeroSmaller()
//Coverts the smaller one to zero
void ZeroSmaller(int& n1, int& n2)
{
    if(n1>n2)
        n2 =0;
    else n1=0;
}
