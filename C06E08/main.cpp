//C06E08.cpp

#include <iostream>

using namespace std;


class product
{
private:
    int serial;
    static int cnt;
public:
    product()
    { cnt++;}

    void showserial()
    {
        serial = cnt;
        cout << "Serial Number: " << serial << endl;
    }
};

int product :: cnt = 0;


int main()
{
    product p1, p2, p3, p4;
    p1.showserial();
    p2.showserial();
    p3.showserial();
    return 0;
}
