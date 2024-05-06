// Deleting any one character from the string and convert that string into Palindrome

#include<bits/stdc++.h>
using namespace std;

bool check_palindrome(string s, int i, int j){
    while(i <= j){
        if(s[i]!=s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

bool valid_palindrome(string s){
    int i = 0;
    int j = s.length()-1;

    while(i <= j){
        if(s[i]!=s[j]){
            return check_palindrome(s, i+1, j) || check_palindrome(s, i, j-1);
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main(){
    string s;
    cout << "Enter the string : ";
    getline(cin, s);

    if(valid_palindrome(s)){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
}