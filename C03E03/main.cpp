//C03E03.cpp

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i=0;
    long op =0;
    char ip;

	cout<<"Enter a number (Maximum six characters): ";
	while((ip=getche()) != 13 && i<6)       //ASCII('\r') == 13
    {

		op = 10* op + (ip - 48);
		i++;
    }
	cout<< endl <<"Number is: "<< op ;

    return 0;
}
