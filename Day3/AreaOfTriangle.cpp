#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Enter the lengths of the three sides of the triangle: ";
    std::cin >> a >> b >> c;

    // Check if the sides form a valid triangle using the triangle inequality theorem
    if (a + b > c && a + c > b && b + c > a) {
        // Calculate the semi-perimeter
        double s = (a + b + c) / 2;

        // Calculate the area using Heron's formula
        double area = sqrt(s * (s - a) * (s - b) * (s - c));

        std::cout << "The area of the triangle is: " << area << std::endl;
    } else {
        std::cout << "The given sides do not form a valid triangle." << std::endl;
    }

    return 0;
}
