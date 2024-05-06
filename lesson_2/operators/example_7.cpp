/*
Write a C++ program to check whether a year is a leap year. The program should take a year as input from the user and use logical operators to check if the year is divisible by 4 but not by 100, or if it is divisible by 400. Display the result on the screen.
*/

#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter the year : ";
    cin>>year;

    if((year%4==0) && (year%100!=0) && (year%400!=0)){
        cout<<"Leap year";
    }
    else{
        cout<<"Not a leap year";
    }
}