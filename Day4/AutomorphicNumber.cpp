// An automorphic number is a natural number whose square ends in the same digits as the number itse

#include <iostream>
using namespace std;

bool isAutomorphicNumber(int number)
{
    //  First find the square of the number
    int square = number * number;

    // Now Check how many digit are there in number
    int digitCount = 0;
    int tempNumber = number; // Store the original number to avoid modifying it
    while (tempNumber > 0)
    {
        tempNumber /= 10;
        digitCount++;
    }

    // Now number of digit from the square ;

    int rem = 0;
    int reverseNumber = 0;
    while (digitCount > 0)
    {
        rem = square % 10;
        square /= 10;
        reverseNumber = reverseNumber * 10 + rem;
        digitCount--;
    }

    int reverse = 0;

    while (number > 0)
    {
        rem = number % 10;
        reverse = reverse * 10 + rem;
        number /= 10;
    }
    if (reverseNumber == reverse)
    {
        return 1;
    }

    else
        return false;
}

int main()
{
    int number;
    cin >> number;

    if (isAutomorphicNumber(number))
        cout << "Given number is Automorphic Number" << endl;
    else cout <<"Given number is not Automorphic Number" << endl;
}