/*
Write a function to add 2 number
*/

#include<iostream>
using namespace std;


int getSum(int a, int b){
    return a + b;
}

int main(){
    int a;
    cout << "Enter the first number : ";
    cin >> a;

    int b;
    cout << "Enter the second number : ";
    cin >> b;

    int result = getSum(a,b);
    cout << "Sum is " << result << endl;
    return 0;
}