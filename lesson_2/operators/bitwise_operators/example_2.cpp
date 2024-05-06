/*
Write a C++ program to find the bitwise AND, OR, and XOR of two given integers.
*/

#include<iostream>
using namespace std;

int main(){
    int num_1;
    cout<<"Enter the first number : ";
    cin>>num_1;

    int num_2;
    cout<<"Enter the second number : ";
    cin>>num_2;

    cout<<(bool)(num_1 & num_2)<<endl;
    cout<<(bool)(num_1 | num_2)<<endl;
    cout<<(bool)(~num_1)<<endl;

}