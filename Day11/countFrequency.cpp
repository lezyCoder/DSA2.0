// Write a cpp program to count the frequency of number in the array

/*
 If we say the definition of hashing in a naive way, it is nothing
  but the combination of the steps, pre-storing, and fetching.
*/ 

#include<iostream>
using namespace std;

// This is the Brute Force approach having time complexity O(N) 
int countFrequency(int arr[] ,int size , int number )
{
    int count =0;
    for(int i = 0; i <size ; i++)
    {
        if (arr[i] == number)
        {
            count+=1;
        }
    }
    return count ;

}

// This is optimal approach using Hashing 

int  countFrequencyOptimalApproach(int arr[], int size, int number )
{
    int hashArray[size]  = {0};
    // // Traverse the array and store the frequency of each element
    for(int i = 0 ; i <size ; i++)
    {
        hashArray[arr[i]]++;
    }

    let frequency = hashArray[number];
    return frequency;
    
}


int main(){
    int size ;
    cout<<"Enter size of the array -> " ;
    cin>>size;

    int arr[size];
    cout<<"Enter elements of the array -> ";
    for(int i =0 ; i<size; i++)
    {
        cin>>arr[i];
    }
    
    int number ;
    cout<<"Show the frequency of - > ";
    cin>>number;
    cout<<number << " is present "<< countFrequencyOptimalApproach(arr ,size,number ) <<" times in the array";
}