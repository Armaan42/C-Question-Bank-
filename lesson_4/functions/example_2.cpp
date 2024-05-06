/*
Write a function that takes a string as input and returns its length.
*/

#include <iostream>
using namespace std;

int stringLength(string str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    int length = stringLength(inputString);
    cout << "Length of the string: " << length << endl;

    return 0;
}
