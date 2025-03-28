// Write a programm to find the  second largest elemet in the positive array without sorting.

//  Input - > [2, 4, 5, 9 ,7,10];
// Output - > 9

#include <iostream>
using namespace std;

// This is the Better Approach ( O (2N))
int findSecondLargest(int arr[], int size)
{

    //  Will find the largest first
    // then just run another loop to check if the current element is smaller then the largest
    //  and also check if it is not matching the largest then it will be smallest

    int max = arr[0];
    int secondMax = -1;
    // Finding largest
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Finding second Largest

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != max && (arr[i] > secondMax || secondMax == -1))
        {
            secondMax = arr[i];
        }
    }

    return secondMax;
}

//  Optimal Approach (O (N)) -> Single Pass

int findSecondMax(int arr[], int size)
{
    // Initial values for max and secondMax
    int max = arr[0];
    int secondMax = -1; // Assuming no valid second max initially

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max; // Update secondMax to the previous max
            max = arr[i];    // Update max to the new larger value
        }
        else if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i]; // Update secondMax if it's smaller than max
        }
    }

    return secondMax;
}

int main()
{
    int size;
    cout << "Enter the size of array - > ";
    cin >> size;

    int arr[size];
    //  Taking input in array;

    cout << "taking input in the array -> ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int secondMax = findSecondLargest(arr, size);
    cout << " Second Largest in the array is : " << secondMax << endl;
}