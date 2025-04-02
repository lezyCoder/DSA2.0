//  Find the second smallest element of the array

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//  this is the optimal approach time complexity is O(N)
int find_secondSmallest(int arr[], int size)
{
    //  If array have 1 value then there is no second smallest or largest
    if (size < 2)
    {
        return -1;
    }

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
    }

    return secondSmallest;
}

int findSecondSmallest(int arr[], int size)
{

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;
    //1- Find the smallest
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    // 2  Find the second smallest

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
    }

    return secondSmallest;
}
int main()
{
    int size;
    cout << "Enter the size of the array ->";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array ->";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int secondSmallest = findSecondSmallest(arr, size);

    cout << "Second Smallest in the array is : " << secondSmallest;
}