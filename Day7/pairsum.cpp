/*
 Leetcode - 182 - Two Sum

 Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

*/
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach
vector<int> twoSum(int nums[], int target, int size)
{
    // Method 1 - Using nested loops  timeComplexity is O(N^2)

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)  // Start from i + 1 to avoid duplicate indices
        {
            if (nums[i] + nums[j] == target)
            {
                return {i, j};  // Directly return the result when found
            }
        }
    }

    return {};  // In case no solution is found
}

// Better Approach - using sorting and loops and timeComplexity is O(N logn);

vector<int> twoSumUsingSortingAndLoop(int nums[], int target, int size)
{
    vector<pair<int, int>> indexed_nums;
    
    // Store original indices along with numbers
    for (int i = 0; i < size; i++)
    {
        indexed_nums.push_back({nums[i], i});
    }

    // Sort the array based on the numbers
    sort(indexed_nums.begin(), indexed_nums.end());

    int left = 0;
    int right = size - 1;

    // Two-pointer technique
    while (left < right)
    {
        int sum = indexed_nums[left].first + indexed_nums[right].first;

        if (sum == target)
        {
            return {indexed_nums[left].second, indexed_nums[right].second};  // Return original indices
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return {};  // Return empty vector if no solution is found
}



int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int nums[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    int target;
    cout << "Enter the target: ";
    cin >> target;

    vector<int> result = twoSum(nums, target, size);
    vector<int> result2 = twoSumUsingSortingAndLoop(nums, target, size);
    if (!result.empty())
    {
        cout << "Two Sum available at indices: ";
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }
    }
    else
    {
        cout << "No solution found!";
    }

    return 0;
}


