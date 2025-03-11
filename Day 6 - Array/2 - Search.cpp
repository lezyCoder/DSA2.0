// Linear Search -   Find if a particular element exists in the array if number exist return the true else false ;


#include <iostream>
using namespace std;

bool linearSearch(int arr[] , int size, int target)
{
    for(int i= 0 ; i <size ; i ++)
    {
        if(arr[i] == target)
        {
            return true;
        }
        
    }
    return false ;
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

     int target ; 
     cout<<"Enter number to search -> " ;
     cin>> target;

     cout<<"Target exist or not : "<<linearSearch(arr , size , target);
  
}