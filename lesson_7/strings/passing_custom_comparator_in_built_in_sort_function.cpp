#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// The prase lexographical order means in alphabetical order.

bool cmp(char first, char second){
    return (first > second);
}

bool compare(int first, int second){
    return (first > second);
}

int main(){
    string s = "armaan";
    sort(s.begin(), s.end(), cmp);

    vector <int> v{5,2,4,1,3};
    sort(v.begin(), v.end(), compare);

    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;

    cout << s << endl;
    return 0;
}
