// prequesities condition of exponential search is that array should be sorted.
// This is used on large sorted array.
#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int> arr, int start, int end, int target){
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int exponential_search(vector<int> arr, int size, int target){
    if(arr[0] == target){
        return 0;
    }
    int i=1;
    while(i<size && arr[i] <= target){
        i*=2;
    }
    return binary_search(arr, i/2, min(i, size-1), target);
}

int main(){
    vector<int> arr{3,4,5,6,11,13,14,15,56,70};
    int size = arr.size(); 
    int target;
    cin >> target;

    int ans = exponential_search(arr, size, target);
    if (ans != -1) {
        cout << "Element " << target << " found at index " << ans << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }
    return 0;
}
