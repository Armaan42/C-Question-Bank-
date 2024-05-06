/*
Write a function to check if a given number is prime or not.
*/

#include<iostream>
using namespace std;

bool check_prime_number(int num, int count){
    for(int i=1; i<num; i++){
        if( num % i == 0 ){
            count++;
        }
    }
    if( count == 2 ){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int num, count=0;
    cout<<"Enter the number : ";
    cin>>num;

    bool a = check_prime_number(num, count);
    if( a == 0){
        cout << " Non Prime Number " << endl;
    }
    else{
        cout << " Prime Number " << endl;
    }
}