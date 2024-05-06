#include<iostream>
using namespace std;

int linear_search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if( key == arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int size;
    cin >> size;

    int arr[size];

    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to be searched : ";
    cin >> key;

    int result = linear_search(arr, size, key);
    cout << "Element found at index " << result << endl;
}