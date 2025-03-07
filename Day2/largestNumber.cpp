// write a program to find the Largest number of 2 numbers

#include <iostream>
using namespace std;

int main()
{
    int num;
    int num2;
    cin >> num >> num2;
    if (num > num2)
    {
        cout << "Largest number : " << num << endl;
    }
    else
    {
        cout << "Largest number : " << num2 << endl;
    }
}
