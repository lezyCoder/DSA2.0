//  Reverse the array without using built-in methods.

#include <iostream>
#include <cmath>
using namespace std;

void reverseArray(int arr[], int size)
{
    int i = 0;
    int j = size - 1;

    while (i < j)  // Continue until i is less than j
    {
        swap(arr[i], arr[j]);  // Swap elements
        i++;  // Increment i
        j--;  // Decrement j
    }
}

int main() {
    int size;
    cout << "Enter the size of array -> ";
    cin >> size;

    int arr[size];
    // Taking input in array;
    cout << "Taking input in the array -> ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Original Array -> ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, size);

    cout << "Reversed Array -> ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
