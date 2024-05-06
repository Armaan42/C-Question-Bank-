/*
Write a C++ program to find the largest of three numbers using if-else statements.
*/

#include<iostream>
using namespace std;

int main(){
    int first_number;
    int second_number;
    int third_number;
    cout<<"Enter the first number : ";
    cin>>first_number;
    cout<<"Enter the second number : ";
    cin>>second_number;
    cout<<"Enter the third number : ";
    cin>>third_number;

    if((first_number > second_number) && (first_number > third_number)){
        cout<<first_number;
    }
    else if((second_number > first_number) && (second_number > third_number)){
        cout<<second_number;
    }
    else if((third_number > first_number) && (third_number > second_number)){
        cout<<third_number;
    }
    else{
        cout<<"unexptected error";
    }
}