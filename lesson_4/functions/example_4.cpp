/*
Write a function to find the maximum of three numbers
*/

#include<iostream>
using namespace std;

int find_max(int a, int b, int c){
    if( a > b && a > c){
        return a;
    }
    else if( b > a && b > c){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int a, b, c;
    cout << "Enter the first number : ";
    cin >> a;

    cout << "Enter the second number : ";
    cin >> b;

    cout << "Enter the third number : ";
    cin >> c;

    int result = find_max(a, b, c);
    cout << "Maximum number is " << result << endl;
}