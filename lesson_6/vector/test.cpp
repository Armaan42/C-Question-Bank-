#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    int ans = sizeof(a)/sizeof(int);
    cout << ans << endl;

    cout << a.size() << endl;
    cout << a.capacity() << endl;

    //Before poping back
    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }

    a.pop_back();
    cout << endl;

    //After poping back
    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }cout << endl;

    int n;
    cout << "Enter the size of an array : " ;
    cin >> n;

    vector<int> brr(n);

    cout << "size of brr : " << brr.size() << endl;
    cout << "capacity of brr : " << brr.capacity() << endl;

    for(int i=0; i<brr.size(); i++){
        cout << brr[i] << " ";
    }cout << endl;

    vector<int> crr{1,2,3,4,5};

    for(int i=0; i<crr.size(); i++){
        cout << crr[i] << " ";
    }cout << endl;

    // 0 -> empty nahi hain
    // 1 -> empty  hain
    cout << crr.empty() << endl;
    
    return 0;
}