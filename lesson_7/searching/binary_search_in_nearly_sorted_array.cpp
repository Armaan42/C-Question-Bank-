#include<iostream>
#include<vector>
using namespace std;

int binary_search_in_nearly_sorted_array(vector<int> arr, int target){
    int start=0;
    int end=arr.size()-1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(arr[mid] == target){
            return mid;
        }
        if((mid-1 >=0) && arr[mid-1] == target){
            return mid-1;
        }
        if((mid+1 < arr.size()) && arr[mid+1] == target){
            return mid+1;
        }
        else if(arr[mid] > target){
            end = mid - 2;
        }
        else{
            start = mid + 2;
        }
    }
    return -1;
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

    int target;
    cout << "Enter the target : ";
    cin >> target;

    int result = binary_search_in_nearly_sorted_array(arr,target);
    cout << target << " found at index " <<result << endl;
    return 0;
}