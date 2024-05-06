/*
Write a C++ program to print the ASCII values of all Upper-case and lowercase letters. Use a for-loop to iterate through the lowercase letters and display their corresponding ASCII values.
*/

#include<iostream>
using namespace std;

int lower_case_ASCII(){
    for(char i='a'; i<='z'; i++){
        cout<<i<<" = "<<(int)i<<endl;
    }
}

int upper_case_ASCII(){
    for(char i='A'; i<='Z'; i++){
        cout<<i<<" = "<<(int)i<<endl;
    }
}
int main(){
    int choice;
    cout<<"ASCII value\n1: Lowercase\n2: Uppercase\nEnter the choice : ";
    cin>>choice;

    switch(choice){
        case 1:cout<<lower_case_ASCII();break;
        case 2:cout<<upper_case_ASCII();break;
    }
}