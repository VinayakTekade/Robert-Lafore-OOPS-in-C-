//circlearea.cpp
//demonstrates floating point variables
#include <iostream>

using namespace std;

int main()
{
    float rad;                                                  //variable of type float
    const float Pi = 3.14159F;                                  //type const float
    cout << "Enter the radius of the circle: ";                 //prompt
    cin >> rad;                                                 //get radius
    cout << "The area of the circle is :" << Pi*rad*rad << endl;//display answer
    return 0;
}

/*  #define Pi 3.14159
    this statement replaces Pi with 3.14159 in the whole program
    however using #define directive for constants may cause bugs in the program
    so it is recommended to use const
*/
