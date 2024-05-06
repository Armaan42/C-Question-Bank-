#include<bits/stdc++.h>
using namespace std;

string remove_all_adjacent_duplicate(string str){
    string ans = "";
    int i = 0;

    while (i < str.length()) {
        if (ans.length() > 0 && ans[ans.length() - 1] == str[i]) {
            ans.pop_back();
        } 
        else {
            ans.push_back(str[i]);
        }
        i++; 
    }
    return ans; 
}

int main(){
    string str;
    cout << "Enter the string : ";
    getline(cin, str);

    string result = remove_all_adjacent_duplicate(str);
    cout << result << endl;

    return 0;
}
