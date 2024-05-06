// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    switch (num) {
        case 0 ... 9:
            cout << "It's a single-digit number." << endl;
            break;
        case 10 ... 99:
            cout << "It's a double-digit number." << endl;
            break;
        case 100 ... 999:
            cout << "It's a three-digit number." << endl;
            break;
        default:
            cout << "Invalid input! Please enter a valid integer." << endl;
            break;
    }

    return 0;
}
