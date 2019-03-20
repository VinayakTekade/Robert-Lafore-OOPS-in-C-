#include <iostream>

using namespace std;

class safearay
{
    int ar[50];
public:
    void putel(int index, int item)
    {
        if(index>=0 && index<=49)
        {
            ar[index] = item;
        }
    }

    int getel(int index)
    {
        return ar[index];
    }
};

int main()
{
    safearay sal;
    int a;
    int tmp=1234;
    sal.putel(7, tmp);
    a=getenv(7);
    cout >> a;
    return 0;
}
