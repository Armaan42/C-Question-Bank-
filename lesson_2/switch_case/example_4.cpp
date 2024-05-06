/*
Implement a C++ program that reads a character from the user and determines if it's a vowel (a, e, i, o, u) or a consonant using a switch case.
*/

#include<iostream>
using namespace std;

int main(){
    char num;
    cout<<"Enter the character : ";
    cin>>num;

    switch(num){
        case 'a':case 'A':cout<<"Vowel"<<endl;break;
        case 'e':case 'E':cout<<"vowel"<<endl;break;
        case 'i':case 'I':cout<<"vowel"<<endl;break;
        case 'o':case 'O':cout<<"vowel"<<endl;break;
        case 'u':case 'U':cout<<"vowel"<<endl;break;
        default:
            cout<<"consonant"<<endl;
    }
    return 0;
}