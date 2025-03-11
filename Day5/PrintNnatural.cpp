// Take a number let say n  from user and print the n natural number

#include<iostream>
using namespace std;

int main()
{
    int number ;
    cin >> number;

    for(int i = 1; i <= number ; i++)
    {
        cout<< i <<" ";
    }
    cout <<endl;
}