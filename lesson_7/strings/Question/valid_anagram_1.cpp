#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cout << "Enter the first string : ";
    getline(cin, s);

    cout << "Enter the second string : ";
    getline(cin ,t);

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if(s == t){
        cout << "equal" << endl;
    }
    else{
        cout << "not equal" << endl;
    }
    return 0;
}