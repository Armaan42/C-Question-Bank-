#include <bits/stdc++.h>
using namespace std;

void reverse_only_letters(string &s) {
    int start = 0;
    int end = s.length() - 1;

    while (start < end) {
        if (!isalpha(s[start])) {
            start++;
        } 
        else if (!isalpha(s[end])) {
            end--;
        } 
        else {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
}

int main() {
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    reverse_only_letters(s);

    cout << "String with reversed letters: " << s << endl;
}
