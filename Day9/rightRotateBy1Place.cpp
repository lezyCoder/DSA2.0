// Writr a program to right rotate the array by 1 place
// input -> 2 3 4 5 6
// output -> 6 2 3 4 5 ;
#include <iostream>
using namespace std;

void rightRotateBy1Place(int arr[], int size)
{
    int temp = arr[size - 1]; // Store the last element
    // Shift all elements to the right by 1 place
    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp; // Place the last element at the first position
}

int main()
{
    int size;
    cout << "Enter a size of the Array -> ";
    cin >> size;

    int arr[size];
    cout << "Enter the element of the array -> ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Before Rotation Array elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "After Rotation Array elements: ";
    rightRotateBy1Place(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
