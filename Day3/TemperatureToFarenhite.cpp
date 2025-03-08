#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit
float calculateFahrenheit(int temperature)
{
    float fahrenheit = (9.0 / 5.0) * temperature + 32;
    return fahrenheit;
}

// Function to convert Fahrenheit to Celsius
float calculateCelsius(int temperature)
{
    float celsius = (temperature - 32) * 5.0 / 9.0;
    return celsius;
}

int main()
{
    int temperature;
    char choice;

    cout << "Enter temperature: ";
    cin >> temperature;

    cout << "Convert to (F)ahrenheit or (C)elsius? ";
    cin >> choice;

    if (choice == 'F' || choice == 'f') {
        float fahrenheit = calculateFahrenheit(temperature);
        cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;
    } 
    else if (choice == 'C' || choice == 'c') {
        float celsius = calculateCelsius(temperature);
        cout << "Temperature in Celsius: " << celsius << "°C" << endl;
    }
    else {
        cout << "Invalid choice! Please enter 'F' or 'C'." << endl;
    }

    return 0;
}
