#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int row = 3;
    int cols = 3;

    int arr[row][cols] = {{1,2,3}, {4,5,6}, {7,8,9}};

    int max_num = INT_MIN;
    int min_num = INT_MAX;

    for(int i=0; i<row; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] < min_num){
                min_num = arr[i][j];
            }
            else if(arr[i][j] > max_num){
                max_num = arr[i][j];
            }
        }
    }
    cout <<"Minimum Element : " <<  min_num << endl;
    cout << "Maximum Element : " << max_num << endl;
}