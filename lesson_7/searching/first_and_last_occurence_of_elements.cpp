/*
find first and last occurence of elements in mono-tonic elements of array
*/

#include <iostream>
#include <vector>
using namespace std;

int first_occurence(vector<int> arr, int target){
    int start = 0;
    int end = arr.size() - 1;
    int mid = ( start + end) / 2;
    int ans = -1;

    while( start <= end ){
        if( arr[mid] == target){
            ans = mid;
            end = mid - 1;
        }    
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        mid = ( start + end ) / 2;
    }
    return ans;
}

int last_occurence(vector<int> arr, int target){
    int start = 0;
    int end = arr.size() - 1;
    int mid = ( start + end ) / 2;
    int lans = -1;

    while( start <= end){
        if(arr[mid] == target){
            lans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else if( arr[mid] > target){
            end = mid - 1;
        }
        mid = ( start + end ) / 2;
    }
    return lans;
}

int main() {
    vector<int> arr = {1,2,3,7,7,7,7,7,7,7,7,7,7,7,77,78,78,79};
    int target = 7;

    int result = first_occurence(arr, target);
    int lresult = last_occurence(arr,target);
    cout << "first occurence of target is at " << result << endl;
    cout << "last occurence of target is at " << lresult << endl;
    return 0;
}
