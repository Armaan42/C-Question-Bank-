#include <iostream>
#include <vector>
using namespace std;

// Function to multiply a number represented as a vector of digits by an integer
void multiply(vector<int>& result, int multiplier) {
    int carry = 0;
    for (int i = 0; i < result.size(); i++) {
        int product = result[i] * multiplier + carry;
        result[i] = product % 10; // Store the digit
        carry = product / 10;    // Carry over to the next digit
    }
    while (carry) {
        result.push_back(carry % 10); // Add any remaining carry as new digits
        carry /= 10;
    }
}

// Function to calculate factorial of a given number
string factorial(int n) {
    vector<int> result;
    result.push_back(1); // Initialize the result with 1 (factorial of 0)

    for (int i = 2; i <= n; i++) {
        multiply(result, i); // Multiply the result by i
    }

    // Convert the result to a string
    string factorialStr;
    for (int i = result.size() - 1; i >= 0; i--) {
        factorialStr += to_string(result[i]);
    }

    return factorialStr;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        string result = factorial(n);
        cout << "Factorial of " << n << " is:\n" << result << endl;
    }

    return 0;
}
