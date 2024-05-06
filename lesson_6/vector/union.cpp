#include<iostream>
#include<limits>
#include<vector>
using namespace std;

int main(){

    int a1;
    cout << "Enter the size of a1 : ";
    cin >> a1;

    int a2;
    cout << "Enter the sizeof a2 : ";
    cin >> a2;

    vector<int> a(a1);
    vector<int> b(a2);
    vector<int> ans;

    for(int i=0; i<a1; i++){
        cin >>  a[i] ; 
    }

    for(int i=0; i<a2; i++){
        ans.push_back(a[i]);
    }

    for(int i=0; i<b.size(); i++){
        cin >>  b[i] ; 
    }

    for(int i=0; i<b.size(); i++){
        int mark = INT32_MIN;
        if(mark != INT32_MIN){
            ans.push_back(b[i]);
        }
    }

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}