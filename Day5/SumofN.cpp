// Print sum of n natural numbers


#include <iostream>

int main() {
    int n, sum = 0;

    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    std::cout << "The sum of the first " << n << " natural numbers is: " << sum << std::endl;

    return 0;
}