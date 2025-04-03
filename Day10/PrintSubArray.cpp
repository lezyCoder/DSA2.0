#include <iostream>
using namespace std;

// Time complexity:  O(N^3)

//Space complexity: O(1)


void printSubarrays(int arr[], int n) {
    // Loop to iterate over all possible starting points of subarrays
    for (int start = 0; start < n; start++) {
        // Loop to iterate over all possible ending points of subarrays
        for (int end = start; end < n; end++) {
            // Print the subarray starting from 'start' to 'end'
            for (int i = start; i <= end; i++) {
                cout << arr[i] << " ";
            }
            cout << endl; // Move to the next line after printing a subarray
        }
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    
    cout << "Subarrays of the given array are: " << endl;
    printSubarrays(arr, n); // Call the function to print subarrays
    
    return 0;
}
