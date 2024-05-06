/*
Write a program that takes a character as input and determines whether it is an uppercase letter, lowercase letter, or a digit using if-else if-else statements.
*/

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;

    if(ch >= 'a' && ch <= 'z'){
        cout<<"lowercase";
    }
    else if(ch >='A' && ch <= 'Z'){
        cout<<"Uppercase";
    }
    else{
        cout<<"Digit";
    }
}