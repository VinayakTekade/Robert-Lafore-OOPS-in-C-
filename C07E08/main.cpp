#include <iostream>

using namespace std;

class safearay
{
    int ar[50];
public:
    void putel(int index, int item)
    {
        if(index>=0 && index<=49)
            ar[index] = item;
        else cout<<"Overflow\n";
    }

    int getel(int index)
    {
        if(index>=0 && index<=49)
            return ar[index];
        else cout<<"Overflow\n";
    }
};

int main()
{
    safearay sal;
    int a, b=1234;
    sal.putel(7,b);
    a=sal.getel(7);
    cout<<a;
    return 0;
}
