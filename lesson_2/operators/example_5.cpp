/*
Write a C++ program to implement a basic login system. The program should take a username and password as input from the user. If the username is "admin" and the password is "password123", display a success message; otherwise, display an error message. Use logical operators to check both conditions.
*/

#include<iostream>
using namespace std;

int main(){
    string correct_username = "admin";
    string correct_password = "password123";

    string username;
    cout<<"Enter the username : ";
    cin>>username;

    string password;
    cout<<"Enter the password : ";
    cin>>password;

    if((username == correct_username) && (password == correct_password)){
        cout<<"success";
    }
    else{
        cout<<"reject";
    }
}