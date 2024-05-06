#include<bits/stdc++.h>
using namespace std;

int main(){
    string name1;
    string name2;
    cout << "Enter your first name : ";
    getline(cin, name1);

    cout << "Enter your second name : ";
    getline(cin, name2);


    // If entered two string are equal then it will return 0
    // Otherwise it will return less or more than 0

    // The algorithm is followed is very simple
    // it will compare the ascii value of first character then second character upto null character
    // if they both are equal then answer will be 0 otherwise different output will be reflected

    if(name1.compare(name2) == 0){
        cout << "Equal" << endl;
    }
    else{
        cout << "Not equal" << endl;
    }
    return 0;
}