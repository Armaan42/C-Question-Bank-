#include<iostream>
#include<vector>
using namespace std;


int find_unique(vector<int> arr){
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the elements of an array : ";

    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }

    int unique_element = find_unique(arr);
    cout << "unique element in an array : " << unique_element << endl;
    return 0;
}