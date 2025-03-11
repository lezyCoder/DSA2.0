// Calculate the average of all elements in the array.

#include <iostream>
using namespace std;

float  averageofArray(int arr[] , int size)
{
    float average = 0;

    int sum = 0;
    for(int i = 0 ; i < size ; i++)
    {
        sum += arr[i];
    }

    average = sum /size;

    return average;
}


int main() {
    int size ;
    cout<<"Enter the size of array - >";
     cin>>size;
     
     int arr[size];
    //  Taking input in array;
    
      cout<<"taking input in the array -> " ;
     for (int i = 0; i < size ;i++)
     {
         cin>> arr[i];
     }
     
     float average= averageofArray( arr, size);
     cout<<" Average of array element is -> " << average <<endl;
  
}