#include<bits/stdc++.h>
using namespace std;

int main(){
    char name[100];
    cout << "Enter the name : ";
    cin.getline(name, 100);

    int count=0;

    while(name[count] != '\0'){
        count++;
    }

    cout << "Your name is " << name << endl;
    cout << count << endl;

    //method_2
    // cout << "Length is " << strlen(name) << endl;

}