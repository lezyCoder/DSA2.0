#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// /Brute Force approach TC -> O (N^2)
int find_uniqueValue(int arr[], int size)
{
    // Loop over each element to find duplicates
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j]) // Found duplicate
            {
                arr[i] = arr[j] = -1; // Replace both with -1
            }
        }
    }

    // Find the max element which is not -1
    int maxElement = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != -1 && arr[i] > maxElement) // Check for non -1 values
        {
            maxElement = arr[i];
        }
    }

    return maxElement; // This is the unique value
}




// Optimal Solution Time complexity O(N)

int finduniqueValue(int arr[], int size) {
    int unique = 0;
    for (int i = 0; i < size; i++) {
        unique ^= arr[i]; // XOR all elements
    }
    return unique; // The result will be the unique number
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

    int uniqueValue = find_uniqueValue(arr, size);
    cout << "Unique value in the array is -> " << uniqueValue;
    return 0;
}
