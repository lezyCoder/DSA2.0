//  Take a two number from user lets say x and y find x to the power y equal to how much without using inbuilt functions.

#include <iostream>
using namespace std;

int power(int base, int exponent)
{
    int result =1;

    for (int i = 1; i <=exponent; i++)
    {
        result *= base;
    }
    return result;
}


int main()
{

    int x, y;

    cout << "Enter base value : ";
    cin >> x;

    cout << "Enter exponent value : ";
    cin >> y;

    cout<<"X to the power Y equal to : " << power(x,y) << endl;
} 