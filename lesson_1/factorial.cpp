#include<iostream>
using namespace std;

int calculateFactorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }   
    return n * calculateFactorial(n-1);
}

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if(num < 0){
        cout << "Negative number not allowed" << endl;
    }
    else{
        int result = calculateFactorial(num);
        cout << result << endl;
    }
}