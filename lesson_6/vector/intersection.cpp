#include<iostream>
#include<limits>
#include<vector>
using namespace std;

int main(){

    vector<int> a{1,2,3,4};
    vector<int> b{1,2,7,8};
    vector<int> ans;

    for(int i=0; i<a.size(); i++){
        int element = a[i];
        for(int j=0; j<b.size(); j++){
            int mark = INT32_MIN;
            if(element == b[j]){
            ans.push_back(element);
            }
        }
    }
    
    for(auto value:ans){
        cout << value << " ";
    }
    return 0;
}