#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr{1,2,3,7,7,7,7,7,7,7,8,9};
    int target = 7;

    auto lresult = lower_bound (arr.begin(), arr.end(), target);
    auto result = upper_bound (arr.begin(), arr.end(), target);

    cout << "first occurence : " << (lresult - arr.begin()) << endl;
    cout << "last occurence : " << (result - arr.begin()) << endl;
    
    return 0;
}