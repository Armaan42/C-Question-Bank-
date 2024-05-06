#include<bits/stdc++.h>
using namespace std;

int main(){
    string name_1;
    string name_2;
    cout << "Enter your first string : ";
    getline(cin, name_1);

    cout << "Enter your second string : ";
    getline(cin, name_2);

    // cout << name_1.find(name_2) << endl; 
    // basic function or syntax to find substing is above line


    if(name_1.find(name_2) == string::npos){
        cout << "No position found" << endl;
    }
    else{
        cout << "Position found" << endl;
        cout << name_1.find(name_2) << endl;
    }
}