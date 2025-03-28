// Write a program to check if the array is sorted or not. */
//  Input -> {2, 3, 4, 5, 6, 7}
// Output -> Yes
// Input -> {1, 2, 3, 5, 4}
// Output -> No

#include <iostream>
using namespace std;

// This is the simple approach ( O (N))
bool ArraySorted(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i - 1] <= arr[i])
        {
            return true;
        }
    }

    return false;

}
    int main()
    {
        int size;
        cout << "Enter the size of array: ";
        cin >> size;
        int arr[size];
        cout << "Enter the elements of array: ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        bool isArraySorted = ArraySorted(arr, size);
        if (isArraySorted)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        return 0;
    }