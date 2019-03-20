//Class.cpp
//demonstrates a simple class

#include <iostream>

using namespace std;

class smallobj                                              //class declaration
{
private:                                                    //not visible to other classes or function
    int somedata;
public:
    void setdata(int d)
    {
        somedata = d;
    }
    void showdata()
    {
        cout << "Data is " << somedata << endl;
    }
};
int main()
{
    smallobj s1, s2;                                        //object definition (class only gives blueprint, objects allocates memory)

    s1.setdata(1250);                                        //Public function call
    s2.setdata(7897);

    s1.showdata();                                          //public function call
    s2.showdata();

    return 0;
}
