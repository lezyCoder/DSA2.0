// Write a program to find the duplicate in the array

#include <iostream>
using namespace std;

// Time complexity -> O (N^2)
int find_duplicate_bruteforce(int arr[], int size)
{
    // Loop over each element
    for (int i = 0; i < size; i++)
    {
        // Compare arr[i] with all subsequent elements
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j]) // Found a duplicate
            {
                return arr[i]; // Return the duplicate value
            }
        }
    }
    return -1; // No duplicate found
}

int main()
{
    int size;
    cout << "Enter size of the array -> ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array -> ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int duplicate = find_duplicate_bruteforce(arr, size);
    if (duplicate != -1)
        cout << "Duplicate value in the array is -> " << duplicate;
    else
        cout << "No duplicate found in the array!";

    return 0;
}
