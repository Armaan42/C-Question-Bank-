#include<bits/stdc++.h>
using namespace std;

int main(){
    char name[100];
    cout << "Enter your name : ";
    cin.getline(name, 100);

    int start = 0;
    int end = strlen(name) - 1;

    while(start <= end){
        swap(name[start], name[end]);
        start++;
        end--;
    }cout << endl;

    cout << name << endl;
    return 0;
}