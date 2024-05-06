#include<iostream>
using namespace std;

void move_all_negative_to_left(int size, int arr[]){
    int start=0;
    int end = size-1;

    while(start<end){
        if(arr[start] < 0){
            start++;
        }
        else if(arr[end] > 0){
            end--;
        }
        else{
            swap(arr[start], arr[end]);
        }
    }
}

int main(){
    int arr[] = {1,2,-1,-4,4,5};
    int size = sizeof(arr)/sizeof(int);
    move_all_negative_to_left(size, arr);

    for(int i=0;i<size; i++){
        cout << arr[i] <<" ";
    }   
    return 0;
}