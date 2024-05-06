/*
Write a C++ program that takes an integer input from the user and prints all the even numbers from 1 to that input. However, if the program encounters a number that is divisible by 5, it should skip that number and continue to the next one.
*/

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    for(int i=1; i<=num; i++){
        if( i % 2 == 0){
            if( i % 5 == 0){
                continue;
            }
        cout<< i <<endl;
        }
    }
    return 0;
}