/*
Write a C++ program to check if a given number is prime or not. The program should take an integer input from the user and use a for-loop to check if the number is divisible by any other number except 1 and itself.
*/

#include<iostream>
using namespace std;

int main(){
    int number,count=0;
    cout<<"Enter the number : ";
    cin>>number;

    for(int i=1; i<number; i++){
        if(number%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"non-prime_number";
    }
    else{
        cout<<"prime_number";
    }
    
}