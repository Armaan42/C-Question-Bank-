#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a1;
    cout << "Enter the size of an array : ";
    cin >> a1;

    int sum = 9;
    vector<int> a(a1);

    for(int i=0; i<a.size(); i++){
        cin >> a[i];
    }

    for(int i=0; i<a.size(); i++){
        int element = a[i];

        for(int j=i+1; j<a.size(); j++){
            if(element + a[j] == sum ){
                cout << "pair : " << "( " << element <<"," <<  a[j] << " )" << endl;
            }
        }
    }

}