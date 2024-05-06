#include<bits/stdc++.h>
using namespace std;

void lowercase_to_uppercase(char name[]){
    int len=strlen(name)-1;

    for(int i=0; i<=len; i++){
        name[i] = name[i] - 'a' + 'A';
    }
    cout << name << endl;
}

int main(){
    char name[100];
    cout << "Enter your string : ";
    cin.getline(name, 100);

    lowercase_to_uppercase(name);
}


