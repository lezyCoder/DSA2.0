// Write the program to check the program is Armstrong or not

#include <iostream>
using namespace std;

int findArmstorng(int number)
{
    int sum = 0;
    int rem = 0;

    while (number > 0)
    {
        rem = number % 10;
        sum += rem * rem * rem;
        number = number / 10;
    }
    return sum;
}
int main()
{
    int number;
    cout << " Enter a number : ";
    cin >> number;

    if (number == findArmstorng(number))
    {
        cout << "Number is Armstrong "<<endl;
    }
    else {
        cout <<"Number is not an Armstrong "<<endl;
    }
}