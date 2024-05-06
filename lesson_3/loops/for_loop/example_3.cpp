/*
Write a C++ program to print the multiplication table of a given number. The program should take an integer input from the user and use a for-loop to display the multiplication table up to 10.
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    for(int i=1; i<=10; i++){
        cout<<number<<" X "<<i<<" = "<<number*i<<endl;
    }
    return 0;
}