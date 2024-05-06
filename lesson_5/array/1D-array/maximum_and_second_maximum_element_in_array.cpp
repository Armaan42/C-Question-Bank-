#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int i;
    int arr[n] = {1,5,3,2,4};
    
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;
    
    std::sort(arr, arr+n);
    
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;
    
    cout << "Maximum Element : "<<  arr[i-1] << endl;
    cout << "Second Maximum Element : " << arr[i-2] << endl;
}