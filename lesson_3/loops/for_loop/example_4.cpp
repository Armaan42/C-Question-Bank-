/*
Write a C++ program to find the factorial of a given number. The program should take an integer input from the user and use a for-loop to calculate and display the factorial.
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    int factorial = 1;
    for(int i=1; i<=number; ++i){
        factorial = factorial * i;
    }
    cout<<factorial;
}