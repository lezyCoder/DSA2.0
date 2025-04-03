// Write a program to count the consecutive one's in binary array.

// input  - > 1 , 0 , 0 , 1 , 1 
//Output -> 2 

#include<iostream>
using namespace std;

int consecutive1(int arr[], int size)
{
    int count = 0;           // To count consecutive 1's
    int consecutive = 0;     // To store the maximum consecutive 1's

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            count++;  // Increment count for consecutive 1's
        }
        else
        {
            count = 0;  // Reset count if we encounter a 0
        }

        // Update the maximum consecutive 1's if needed
        consecutive = max(count, consecutive);
    }

    return consecutive;
}

int main() {
    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int consecutive = consecutive1(arr, size);

    cout << "There are max consecutive 1's -> " << consecutive << endl;

    return 0;
}
