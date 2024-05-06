/*
Dutch national flag
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums{1,0,0,0,1,1,1,1,0,1,0,1,1,1,0,1};
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end) {
        if (nums[start] == 0) {
            start++;
        } else if (nums[end] == 1) {
            end--;
        } else {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
    for( auto value : nums){
        cout << value << " ";
    }
}

