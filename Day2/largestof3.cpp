// Take 3 number from user and find the largest number .

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter 3 numbers : ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << "Largest number is : " << num1;
    }
    else if (num2 < num1 && num2 > num3)
    {
        cout << "Largest number is :  " << num2;
    }
    else
    {
        cout << "Largest number is : " << num3 << endl;
    }
}