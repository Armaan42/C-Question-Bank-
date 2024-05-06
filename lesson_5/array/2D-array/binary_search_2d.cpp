#include<bits/stdc++.h>
using namespace std;

pair<int, int> binary_search_2d(int arr[][3], int row, int col){
    int start=0;
    int end=(row*col)-1;
    
    int target;
    cout << "Enter the target : ";
    cin >> target;

    while(start <= end){
        int mid=start+(end-start)/2;
        int midvalue = arr[mid/col][mid%col];
        
        if(midvalue == target){
            return make_pair(mid/col, mid%col); // Found the target
        }
        else if(midvalue < target){
            start = mid + 1; // Search the right half
        }
        else{
            end = mid - 1; // Search the left half
        }
    }
    
    return make_pair(-1, -1); // Target not found
}

int main(){
    int arr[3][3] = 
    {{1,2,3},
    {4,5,6},
    {7,8,9}
    };

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    pair<int, int> result = binary_search_2d(arr, 3, 3);

    if(result.first != -1 && result.second != -1) {
        cout << "Element found at index " << "( "<< result.first << "," << result.second << " )" << endl;
    } else {
        cout << "Element not found in the 2D array." << endl;
    }

    return 0;
}
