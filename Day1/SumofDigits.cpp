//  Take a input from user and take a sum of all the digits in the input.


#include<iostream>
using namespace std;

int sumofdigit(int num){

    int sum = 0;
    int rem;
    while(num > 0){
        rem = num %10;
        sum += rem;
        num /= 10;
    }
    return  sum;
}

int main(){
    int  digit ;
    cout<< " Enter digit : " <<endl;
    cin>>digit;

    cout<< " Sum of digits : "<< sumofdigit(digit)<<endl;
}