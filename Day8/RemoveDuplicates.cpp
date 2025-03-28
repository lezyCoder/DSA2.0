// Write a program to Remove duplicates from Sorted array

#include <iostream>
#include <set>
using namespace std;

//  Brute Force approach - Using set  -> T.C O(NlogN + N) and S.C -> O(N)

void removeDuplicateUsingSet(int arr[], int size)
{
    set<int> st;
    for (int i = 0; i < size; i++)
    {
        st.insert(arr[i]); // Insertion operation take N log N TC
    }

    // Printing all the element of set

    for (auto i : st)
    {
        cout << i << " ";
    }
}

// Optimal approach - > Two Pointer Approach  -> T.C O (N ) -> S.C  -> O (1)

void removeDuplicateOptimalApproach(int arr[], int size)
{
    int i = 0;

    for (int j = 1; j < size; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }

}
int main()
{
    int size;
    cout << "Enter the size of array - > ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of array - > ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    removeDuplicateUsingSet(arr, size);
}