#include <bits/stdc++.h>
using namespace std;

void transpose(int arr[][3], int rows, int cols) {
    int transposed[cols][rows]; // Creating a new array for the transposed matrix

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = arr[i][j]; // Swap rows with columns
        }
    }

    // Printing the transposed matrix
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows = 3;
    int cols = 3;

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transposed Matrix:" << endl;
    transpose(arr, rows, cols);

    return 0;
}
