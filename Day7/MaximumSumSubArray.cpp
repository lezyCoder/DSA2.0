/*
Given an integer array nums, find the subarray with the largest sum, and return its sum.



Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.

  * Kisi bhi array me maximum subarray niklne ka formula ->( n * ( n+1) /2) where n is number of element

*/

#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach (O N^2)
int maximum_subarray(int arr[], int size)
{

  int maxSum = INT_MIN;

  for (int start = 0; start < size; start++)
  {
    int currSum = 0;
    for (int end = start; end < size; end++)
    {
      currSum += arr[end];
      maxSum = max(maxSum, currSum);
    }
    cout << endl;
  }

  return maxSum;
}

// Kaden's Algorihms approach (O (N))

int maximumSubArray(int arr[], int size){

  int maxSum = INT_MIN;
  int currSum = 0;

  for(int i = 0; i < size; i)
  {
    currSum += arr[i];
    maxSum = max(maxSum, currSum);
    //  Note => watch this first (https://www.youtube.com/watch?v=9IZYqostl2M&list=PLfqMhTWNBTe137I_EPQd34TsgV6IO55pt&index=10&ab_channel=ApnaCollege)
    if(currSum < 0)
    {
      currSum = 0;
    }
  }

  return maxSum;
}

int main()
{
  int size;
  cout << "Enter the size of array : ";
  cin >> size;

  int arr[size];
  cout << "Enter the element of array : ";
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  cout << "Printing SubArray elemet in the array : " << endl;

  // time complexity -> O(n^3)
  // Start and end are denoting the range of element
  for (int start = 0; start < size; start++)
  {
    for (int end = start; end < size; end++)
    {
      for (int i = start; i <= end; i++)
      {
        cout << arr[i];
      }
      cout << " ";
    }
    cout << endl;
  }

  cout << "Maximum Subarray Sum using brute force algorithm" << maximum_subarray(arr, size);
}