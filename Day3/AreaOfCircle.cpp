// Write a program in which user will provide the radius of circle and you have to print the Area of circle.

#include <iostream>
using namespace std;

int main()
{
    float radius;
    cout << "Radius of circle : ";
    cin >> radius;

    float AreaOfCircle = 3.14 * radius * radius;

    cout << "Area of circle : " << AreaOfCircle << endl;
}