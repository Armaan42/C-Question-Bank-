#include <iostream>
using namespace std;

bool linear_search_2d(int arr[][3], int rows, int cols, int target) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == target) {
                return true;  // Element found
            }
        }
    }
    return false; // Element not found
}

int main() {
    int rows = 3;
    int cols = 3;

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    bool found = linear_search_2d(arr, rows, cols, target);
    if (found) {
        cout << "Element found in the array." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

