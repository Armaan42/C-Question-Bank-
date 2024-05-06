/*
To find the minimum and maximum number from an array
*/

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int max = arr[0];
    int min = arr[0];

    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        if(arr[i] > max){
            max = arr[i];
        }
        else if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << max << endl;
    cout << min << endl;
}