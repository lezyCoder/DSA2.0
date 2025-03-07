// Write a program where user provide a number we have to find the binary equivalent of that decimal number

#include <iostream>
using namespace std;

int findBinary(int num){
    int pow = 1;
    int binaryNumber = 0;

    while(num > 0)
    {
        binaryNumber += (num%2) * pow;
        pow*=10;
        num /= 2;
    }
    return binaryNumber;
}

int main(){

    int number;
    cout << " Enter a positive number : ";
    cin>> number;

    cout << findBinary(number)<<endl;
}