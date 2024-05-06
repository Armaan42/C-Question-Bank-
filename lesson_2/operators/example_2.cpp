/*
Write a C++ program to swap two numbers without using a temporary variable. The program should take two integer inputs from the user, and you should use arithmetic operators to swap the values of the variables. Display the swapped values on the screen.
*/

#include<iostream>
using namespace std;

int main(){
    int first_number;
    cout<<"Enter the first number : ";
    cin>>first_number;

    int second_number;
    cout<<"Enter the second number : ";
    cin>>second_number;

    cout<<"Before Swapping"<<endl;
    cout<<first_number;
    cout<<", ";
    cout<<second_number;

    cout << endl; 

    cout<<"After Swapping"<<endl;
    first_number = first_number + second_number;
    second_number = first_number - second_number;
    first_number = first_number - second_number;

    cout<<first_number;
    cout<<", ";
    cout<<second_number;
}