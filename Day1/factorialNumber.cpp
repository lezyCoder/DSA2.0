// Take a input from user and find the factorial of input number and print the factorial .

#include <iostream>
using namespace std;


int factNumber(int number)
{
    int fact = 1;
     
    for (int i = 1; i <= number; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int num;

    cout << "Enter the number : ";
    cin >> num;

    cout <<"Factrorial of " <<num << " is : " << factNumber(num) << endl; 
}