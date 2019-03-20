//Increment counter variable with ++ operator overloaded, and return the value simultaneously
//uses unnamed temporary object


#include <iostream>

using namespace std;

class Counter
{
private:
    unsigned int count;
public:
    Counter() : count(0)
    {}
    unsigned int get_count()
    {
        return count;
    }

    Counter operator++()
    {
        ++count;
        return Counter(count);  // temporary nameless object initialized with count
    }


};

int main()
{
    Counter c1,c2;

    cout << "\nc1=" <<c1.get_count();
    cout << "\nc2=" <<c2.get_count();
    ++c1;
    c2=++c1;                           // if previous program it was not possible to do it due to void function type
    cout << "\nc1=" <<c1.get_count();
    cout << "\nc2=" <<c2.get_count();
    return 0;
}
