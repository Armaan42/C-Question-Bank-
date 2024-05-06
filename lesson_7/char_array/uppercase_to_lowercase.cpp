#include<bits/stdc++.h>
using namespace std;

void uppercase_to_lowercase(char name[]){
    int len=strlen(name)-1;

    for(int i=0; i<=len; i++){
        name[i] = name[i] - 'A' + 'a';
    }
    cout << name << endl;
}

int main(){
    char name[100];
    cout << "Enter your string : ";
    cin.getline(name, 100);

    uppercase_to_lowercase(name);
}