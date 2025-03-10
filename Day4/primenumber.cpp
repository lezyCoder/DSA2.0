#include <iostream>
#include <cmath> // For sqrt function

using namespace std;

bool isPrime(int number) {
    // Handle edge cases
    if (number <= 1) {
        return false; // 0 and 1 are not prime
    }
    
    // Check divisibility from 2 to sqrt(number)
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return false; // If divisible by any number in this range, it's not prime
        }
    }
    
    return true; // If no divisors were found, it's a prime number
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
