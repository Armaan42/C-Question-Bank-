/*
Write a C++ program to calculate the sum of the first 100 natural numbers using a for-loop.
*/

#include<iostream>
using namespace std;

int main(){
    int sum=0;
    for(int i=1;i<=100;i++){
        sum = sum + i;
    }
    cout<<sum;
    return 0;
}