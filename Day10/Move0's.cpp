// Given a array containing non - zero and zero as array element move all zero to end of the array while mainting the order of the array.
// input -> 4 ,0 ,2 ,5, 0
// output ->  4 2 5 0 0  

#include<iostream>
using namespace std;


// Time complexity = O(N)  Space Complexity = O(1)
void move0s_optimalApproach(int arr[], int size)
{
    int position = 0;  // Position to place the next non-zero element

    // Traverse through the array
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            // Swap if current element is non-zero
            swap(arr[i], arr[position]);
            position++;
        }
    }

    // Output the result
    cout << "Array after moving 0's to the end: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


// Time complexity = O(N)  Space Complexity = O(N)
void move0s_bruteForce(int arr[], int size)
{
    vector<int> temp;

    // Push non-zero elements to the temp vector
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }

    // Add zeroes to the end of the temp vector
    for (int i = temp.size(); i < size; i++) {
        temp.push_back(0);
    }

    // Copy the temp vector back into the original array
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }

    // Output the result
    cout << "Array after moving 0's to the end: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
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

    move0s_optimalApproach(arr, size);

    return 0;
}
