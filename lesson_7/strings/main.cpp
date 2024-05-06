#include<bits/stdc++.h>
using namespace std;

int main(){
    string name;
    cout << "Enter your name : ";
    getline(cin, name);

    cout << "String you entered : " << name << endl;
    cout << "Length of string you entered : " << name.length() << endl; //Gives the length of the string name
    cout << "string Empty or not : " << name.empty() << endl; // It will check your sting is empty or not... 0 -> false, 1 -> true

    cout << "Before push back" << endl;
    name.push_back('@'); // you also do pop back
    cout << "After push back" << endl;
    cout << name << endl;

    return 0;
}