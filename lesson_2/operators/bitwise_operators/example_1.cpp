/*
Write a C++ program to check if a given number is even or odd using bitwise operators.
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    if((n&1)==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
}