/*
Write a C++ program that prompts the user to enter an alphabet and checks if it is a vowel or a consonant using switch statements.
*/

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;

    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout<<"vowel";break;
        default:    
            cout<<"consonant";
    }
}