// Take a input into the array and print the array.

#include <iostream>
using namespace std;

int main() {
    int size ;
    cout<<"Enter the size of array - >";
     cin>>size;
     
     int arr[size];
    //  Taking input in array;
    
      cout<<"taking input in the array " ;
     for (int i = 0; i < size ;i++)
     {
         cin>> arr[i];
     }
     
    //  printing the  element in the array'
    
    cout<<"printing the array element" <<endl;
     for (int i = 0; i < size ;i++)
     {
         cout<< arr[i] << " ";
     }
}