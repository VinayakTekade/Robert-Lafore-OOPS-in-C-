//C03E05.cpp

#include <iostream>

using namespace std;

int main()
{
    for(int i=0;i<20;i++)
       {
            for(int j= 20- i;j>0;j--)
                cout << " ";
            for(int k =0;k<2*i+1;k++)
                cout<< "X";
            cout << endl;
       }

    return 0;
}
