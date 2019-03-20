#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;

void reversit(char str[])
{
	char tmp;
    int k=strlen(str);
	for(int i=0; i<(k/2); i++)
        {
            tmp=str[i];
            str[i]=str[k-i-1];
            str[k-i-1]=tmp;
        }
}

int main()
{
    char mystr[80];
	cout<<"Enter a string: ";
	cin.get(mystr,80);
	reversit(mystr);
	cout<<mystr;
	return 0;
}
