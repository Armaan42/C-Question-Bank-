#include<bits/stdc++.h>
using namespace std;

int main(){
    string name_1, name_2;
    cout << "Enter your first string : ";
    getline(cin , name_1);

    cout << "Enter your second string : ";
    getline(cin ,name_2);

    cout << name_1.replace(1,3 ,name_2);  //(starting index, how many index after starting index, string)

}