#include<iostream>
using namespace std;

void print_row_wise_sum(int arr[][3], int row, int cols){
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<cols; j++){
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int cols=3;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    print_row_wise_sum(arr,row,cols);
}