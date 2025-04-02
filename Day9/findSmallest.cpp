// Find the smallest element in the array

#include <iostream>
using namespace std;

int find_smallest(int arr[], int size)
{
    int smallest = arr[0];
    
    for(int i = 1; i < size; i ++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    
    return smallest;
}


int main() {
    int size;
    cout << "Enter the size of array - > ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of array - > ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    int smallest = find_smallest(arr, size);
    cout << "The smallest element in the array is - > " << smallest << endl;
    
    return 0;
}