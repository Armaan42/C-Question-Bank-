#include<bits/stdc++.h>
using namespace std;

pair<int, int> linear_Search_2d(int arr[][3], int target, int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] == target){
                return make_pair(i,j);
            }
        }
    }
    return make_pair(-1, -1);
}

int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "Enter the target : ";
    cin >>target;

    pair<int, int> result = linear_Search_2d(arr, target, 3, 3);
    if(result.first != -1 && result.second != -1){
        cout << "Element found at index " << "(" <<  result.first << " , " << result.second << ")"<< endl;
    }
    else{
        cout << "Elment not found" << endl;
    }
}