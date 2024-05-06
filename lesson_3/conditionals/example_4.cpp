/*
Create a program that takes an integer as input and checks if it is positive, negative, or zero using if-else if-else statements.
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    if(number > 0){
        cout<<"positive";
    }
    else if(number == 0){
        cout<<"zero";
    }
    else if(number < 0){
        cout<<"negative";
    }
    else{
        cout<<"error";
    }
}