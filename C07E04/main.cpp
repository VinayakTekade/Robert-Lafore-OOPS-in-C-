#include <iostream>

using namespace std;

int maxint(int a[],int k)
{
    int maximum=0, index;
    for(int i=0;i<k;i++)
        {
            if(maximum<a[i])
            {
                maximum=a[i];
                index=i+1;
            }
        }

    return index;
}

int main()
{
    int n,m,ar[50];
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>ar[i];
    }
    m=maxint(ar,n);
    cout<<"The largest element is at element number "<<m;
    return 0;
}
