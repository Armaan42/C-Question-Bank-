#include<bits/stdc++.h>
using namespace std;

int main(){
    string name;
    cout << "Enter the string : ";
    getline(cin, name);

    // cout << name << endl;

    cout << name.substr(0,3); // (starting position, ending position) and will the return the substring from string {name}
    return 0;
}