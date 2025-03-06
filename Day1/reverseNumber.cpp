// Take a number from the user and try to reverse it.
//  Like number is  1234 so output will be 4321

#include <iostream>
using namespace std;

int reverseNumber(int number)
{
    int rem;
    int reverse = 0;

    while (number > 0)
    {
        rem = number % 10;
        reverse = reverse * 10 + rem;
        number /= 10;
    }

    return reverse;
}

int main()
{
    int num;
    cout << " Enter a number : " ; 
    cin >> num;

    cout << "Reverse of number is : " << reverseNumber(num) << endl;
}