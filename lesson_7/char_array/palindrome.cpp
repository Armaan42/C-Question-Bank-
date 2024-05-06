#include<bits/stdc++.h>
using namespace std;

bool check_palindrome(char name[]){
    int start = 0;
    int end = strlen(name)-1;

    while(start <= end){
        if(name[start] != name[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}

int main(){
    char name[100];
    cout << "Enter the name : ";
    cin.getline(name, 100);

    bool result = check_palindrome(name);
    if(result == false){
        cout << "Non-palindrome";
    }
    else{
        cout << "Palindrome";
    }   
}