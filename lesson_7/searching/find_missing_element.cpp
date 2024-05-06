#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{1,2,3,4,5,7,8,9,10};

    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        ans = ans + arr[i];
    }
    // cout << ans << endl;

    int lans = 0;
    for(int i=1; i<11; i++){
        lans = lans + i;
    }
    // cout << lans << endl;

    cout << "Missing number : " << lans - ans << endl;

    return 0;
}