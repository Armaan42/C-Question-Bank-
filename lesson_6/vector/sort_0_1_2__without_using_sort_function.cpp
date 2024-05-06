#include<bits/stdc++.h>
using namespace std;

void sort_1_2(vector<int> arr, int size){
    int zeros, ones, twos;
    zeros=ones=twos=0;

    for(int i=0; i<arr.size(); i++){
        if(arr[i] == 0){
            zeros++;
        }
        else if(arr[i] == 1){
            ones++;
        }
        else{
            twos++;
        }
    }

     int i=0;
        while(zeros--){
            arr[i] = 0;
            i++;
        }
        while(ones--){
            arr[i] = 1;
            i++;
        }
        while(twos--){
            arr[i] = 2;
            i++;
    }
    for(auto i:arr){
        cout << i << " ";
    }
}
int main(){
    vector<int> arr{2,0,2,1,1,0};
    int size = arr.size()-1;

    sort_1_2(arr,size);

}