#include<bits/stdc++.h>
using namespace std;

bool is_valid_anagram(string s, string t){
    int frequency_table[256] = {0};

    for(int i=0; i<s.size(); i++){
        frequency_table[s[i]]++;
    }

    for(int i=0; i<t.size(); i++){
        frequency_table[t[i]]--;
    }

    for(int i=0; i<256; i++){
        if(frequency_table[i] != 0){
            return false;
        }
    }
    return true;

}

int main(){
    string s, t;
    cout << "Enter first string : ";
    getline(cin, s);
    cout << "Enter second string : ";
    getline(cin, t);

    if(is_valid_anagram(s ,t)){
        cout << "valid anagram" << endl;
    }
    else{
        cout << "not a valid anagram" << endl;
    }
    return 0;
}