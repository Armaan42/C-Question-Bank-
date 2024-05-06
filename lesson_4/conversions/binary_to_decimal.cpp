#include<iostream>
using namespace std;

int decimal_to_binary( int num ){
    while( num > 0 ){
        int bit = num % 2;
        cout << bit;
        num = num / 2;
    }
    return 0;
}

int main(){
    int num;
    cout << "Enter the number : ";
    cin >> num;

    int result = decimal_to_binary(num);
    cout << result << endl;
}