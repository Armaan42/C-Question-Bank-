#include<iostream>
using namespace std;

int binary_search(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = ( start + (end - start)/2);

    while(start <= end){
        if( arr[mid] == key){
            return mid;
            
        }
        
        else if( arr[mid] > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    int mid = ( start + (end - start)) / 2;
    }
    return -1;
}

int main(){
    int size;
    cout << "Enter the size of an array : ";
    cin >> size;
    
    int arr[size];

    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key : ";
    cin >> key;

    int result = binary_search(arr, size, key);
    if(result == -1){
        cout << "NOT FOUND" << endl;
    }
    else{
        cout << "FOUND at index "<< result << endl;
    }
}