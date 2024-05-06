/*
Write a C++ program to check whether a given number is positive and even. The program should take an integer input from the user and use logical operators to check if the number is both positive and even. Display the result on the screen.
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    if((number>0 && number%2==0)){
        cout<<"Yes, number is positive and even";
    }
    else{
        cout<<"Not satisfying";
    }
}