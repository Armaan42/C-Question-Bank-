#include<bits/stdc++.h>
using namespace std;

int main(){
    char name[100];
    cout << "Enter your name : ";
    cin.getline(name, 100);

    int start = 0;
    int end = strlen(name) - 1;

    for(int i=0; i<end; i++){
        if(name[i] == ' '){
            name[i] = '#';
        }
    }
    cout << name << endl;
    
}