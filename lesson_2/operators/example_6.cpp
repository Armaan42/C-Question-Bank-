/*
Write a C++ program to check whether a number is within a specific range. The program should take an integer input from the user and use logical operators to check if the number is between 10 and 50 (inclusive). Display the result on the screen.
*/

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    if((num>=10) && (num<=50)){
        cout<<"satisfactory";
    }
    else{
        cout<<"unsatisfactory";
    }
}