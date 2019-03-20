//Call_By_Reference.cpp
//Demonstrates Call by Reference

#include <iostream>

using namespace std;

int main()
{
    void intfrac(float, float&, float&);
    float number, intpart, fracpart;

    do
    {
        cout << "\nEnter a real nuumber: ";
        cin >> number;
        intfrac(number, intpart, fracpart);
        cout << "Integer part is " << intpart;
        cout << ", fraction part is " << fracpart << endl;
    }while(number != 0.0);

    return 0;
}


//intfrac()
//finds integer and fractional part of a real number
void intfrac(float n, float& intp, float& fracp)
{
    long temp = static_cast<long>(n);                   //convert to long,
    intp = static_cast<float>(temp);                    //back to float
    fracp = n - intp;

}
