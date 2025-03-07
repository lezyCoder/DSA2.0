// Write a program where user provide a binary number we have to find the decimal equivalent of that  number

#include <iostream>
using namespace std;

int findDecimal(int num){
    int pow = 1;
    int decimalNumber = 0;

    while(num > 0)
    {
        decimalNumber += (num%10) * pow;
        pow*=2;
        num /= 10;
    }
    return decimalNumber;
}

int main(){

    int number;
    cout <<"Enter a binary number : ";
    cin>> number;

    cout <<"Decimal number is : "<< findDecimal(number)<<endl;
}