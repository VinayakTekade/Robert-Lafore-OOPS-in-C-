//constructor.cpp

#include <iostream>

using namespace std;

class Counter
{
private:
    unsigned int cnt;
public:
    Counter() : cnt(0)
    {}
    void inc_cnt()
    {
        cnt++;;
    }
    int get_cnt()
    {
        return cnt;
    }
};

int main()
{
    Counter c1, c2;

    cout << "\nc1 = " << c1.get_cnt();
    cout << "\nc2 = " << c2.get_cnt();

    c1.inc_cnt();
    c2.inc_cnt();
    c2.inc_cnt();

    cout << "\nc1 = " << c1.get_cnt();
    cout << "\nc2 = " << c2.get_cnt();
    return 0;
}


/*
Different forms constructors
1. single variable in full form
Counter()
{
    cnt = 0;
}

2.multiple list
someclass() : m1(7), m2(33), m2(4)
{}
