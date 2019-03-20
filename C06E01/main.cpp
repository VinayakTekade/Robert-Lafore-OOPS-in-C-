//C06E01.cpp

#include <iostream>

using namespace std;

class Int
{
private:
    int number;
public:
    Int() : number(0)
    {}
    Int(int n1) : number(n1)
    {}
    void show()
    {cout << number;}
    Int add(Int n2)
    {
        Int tmp;
        tmp.number = number + n2.number;
        return tmp;
    }
};
int main()
{
    Int numb1(2), numb2(5), numb3;
    numb3 = numb1.add(numb2);
    numb3.show();
    return 0;
}
