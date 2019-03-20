#include <iostream>

using namespace std;

class Distance
{
private:
    float feet;
    float inches;
public:
    Distance(): feet(0), inches(0) {}
    void getdist()
    {
        cout<<"Enter Feet : ";
        cin>>feet;
        cout<<"Enter Inches : ";
        cin>>inches;
    }
    void add_dist(Distance d2, Distance d3)
    {
        inches=d2.inches+d3.inches;
        feet=0;
        if(inches>=12.0)
        {
            inches-=12.0;
            feet++;
        }
        feet+=d2.feet+d3.feet;
    }
    void div_dist(Distance d2, int divisor)
    {
        float fltfeet=d2.feet+d2.inches/12.0;
        fltfeet/=divisor;
        feet=int(fltfeet);
        inches=(fltfeet-feet)*12.0;
    }
    void show_dist()
    {
        cout<<"The average Distance is: "<<feet<<"\""<<inches<<"\'";
    }
};

int main()
{
    int n;
    cout<< "Enter the number of distances: ";
    cin>>n;
    Distance d[100],sum;

    for(int i=0;i<n;i++)
    {
        d[i].getdist();
        sum.add_dist(sum,d[i]);
    }
    sum.div_dist(sum,n);
    sum.show_dist();
    return 0;
}

