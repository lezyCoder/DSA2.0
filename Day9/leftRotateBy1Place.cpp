// Given a integer array left rotate the array by 1 place
//  Input - > 2 3 4 5 6
//  output ->  3 4 5 6 2 ;

#include <iostream>
using namespace std;

int leftRotateBy1Place(int arr[], int size)
{
    // 1 -> We will store the first element into the temp variable
    // 2 -> Move every element to left
    // 3 -> put the temp variable value to the last index

    int temp = arr[0];

    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
}
int main()
{
    int size;
    cout << "Enter a size of the Array -> ";
    cin >> size;

    int arr[size];
    cout << "Enter the element of the array -> ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Before Rotatetion Array element  " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "After Rotatetion  Array Element " << endl;
    leftRotateBy1Place(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
