// Write a progragm to Count frequency of each element in the array


#include<iostream>
using namespace std;

//  Using For loop (Find and learn the approach)

// https://takeuforward.org/data-structure/count-frequency-of-each-element-in-the-array/

// Time Complexity: O(N*N)

// Space Complexity:  O(N)

void countFreq(int arr[], int n)
{
    vector<bool> visited(n, false);
 
    for (int i = 0; i < n; i++) {
 
        // Skip this element if already processed
        if (visited[i] == true)
            continue;
 
        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}

// Solution 2 - > Using Map
// Time Complexity: O(N)

// Space Complexity: O(n)
void Frequency(int arr[], int n)
{
    unordered_map<int, int> map;
 
    for (int i = 0; i < n; i++)
        map[arr[i]]++;
 
    // Traverse through map and print frequencies
    for (auto x : map)
        cout << x.first << " " << x.second << endl;
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

}