//C03E09.cpp

#include <iostream>

using namespace std;

int main()
{
    int chairs, guests, ways=1;
    cout << "Enter the number of guests: ";
    cin >> guests;
    cout << "Enter the number of chairs: ";
    cin >> chairs;
    for(int i = guests; i> (guests-chairs) ; i-- )
    ways*=i;
    cout<<"The number of ways guests can sit: " << ways;
    return 0;
}
