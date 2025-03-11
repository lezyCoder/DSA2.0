//  calculate the sum of array element

#include <iostream>
using namespace std;

int sumofArray(int arr[] , int size)
{
    int sum = 0;
    for(int i = 0 ; i < size ; i++)
    {
        sum += arr[i];
    }
    return sum;
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
     
     int sum = sumofArray( arr, size);
     cout<<" Sum of array element is -> " << sum <<endl;
  
}