#include<iostream>
#include<vector>
using namespace std;

int linear_search(vector<int> arr, int key){
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr{1,2,3,4,5};

    int key;
    cout << "Enter the key : ";
    cin >> key;

    int result = linear_search(arr, key);
    cout << result << endl;
}   