#include<bits/stdc++.h>
using namespace std;

string remove_substring_from_main_string(string str, string sub_string){
    int pos = str.find(sub_string);

    while(pos != string::npos){
        str.erase(pos, sub_string.length());
        pos = str.find(sub_string);
    }
    return str;
}

int main(){
    string str;
    cout << "Enter the string : ";
    getline(cin ,str);

    string sub_string;
    cout << "Enter the sub-string : ";
    getline(cin ,sub_string);

    string result = remove_substring_from_main_string(str, sub_string);
    cout << result << endl;
    return 0;
}