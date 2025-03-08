// write a program to check the number is paliandrome or not 
// Number is paliandrome only if the reverse of number is equal to the given number;

#include "iostream"
using namespace std;


int reverseNumber(int number)
{
    int rem;
    int reverse = 0;

    while (number > 0)
    {
        rem = number % 10;
        reverse = reverse * 10 + rem;
        number /= 10;
    }

    return reverse;
}


int main(){
    int number ;
    cout<<"Enter a number : " ;
    cin>> number ;

    if(number ==  reverseNumber(number)){
        cout<<"Number is paliandrome";
    }
    else{
        cout<<"Number is not paliandrome";
    }

}