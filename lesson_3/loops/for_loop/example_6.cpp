/*
Write a C++ program to display the Fibonacci series up to a given number. The program should take an integer input from the user and use a for-loop to generate and print the Fibonacci series.
*/

#include<iostream>
using namespace std;

int main(){
    int first_number=0,second_number=1,append;
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    for(int i=1; i<number; i++){
        cout<<first_number<<" ";
        
        append = first_number + second_number;
        first_number = second_number;
        second_number = append;
    }
}