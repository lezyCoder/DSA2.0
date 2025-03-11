//  find the largest and smallest number in the array.

#include <iostream>
#include <climits>
using namespace std;

int find_largest(int arr [], int size)
{
    int maxElement = INT_MIN;
    
    for(int i = 0 ; i < size; i ++)
    {
        if ( maxElement < arr[i])
        {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int find_smallest(int arr [], int size)
{
    int minElement = INT_MAX;
    
    for(int i = 0 ; i < size; i ++)
    {
        if ( minElement > arr[i])
        {
            minElement = arr[i];
        }
    }
    return minElement;
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
     
     int largest  = find_largest(arr , size);
     int smallest = find_smallest(arr , size);
     
     cout <<"Largest element in array ->" << largest << endl;
     cout <<"Smallest element in array -> "<< smallest << endl;
  
}