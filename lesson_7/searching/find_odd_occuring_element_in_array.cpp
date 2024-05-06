#include<iostream>
#include<vector>
using namespace std;

int find_odd_occuring_element(vector<int> arr, int size){
    int result = 0;
    for(int i=0; i<size; i++){
        result = result ^ arr[i];
    }
    return result;
}

int main(){
    int size;
    cout << "Enter the size : ";
    cin >> size;

    vector<int> arr;

    for(int i=0; i<size; i++){
        int element;
        cin >> element;
        arr.push_back(element);
    }

    int result = find_odd_occuring_element(arr,size);
    cout << result << endl;

}