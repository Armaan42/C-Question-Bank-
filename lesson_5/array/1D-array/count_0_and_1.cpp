#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,1,1,1,0,0,0,1,0,0,3};

    int zero = 0;
    int one = 0;

    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        if(arr[i] == 1){
            one++;
        }
        if(arr[i] == 0){
            zero++;
        }
    }

    cout << "number of one : " <<  one << endl;
    cout << "number of zero : " << zero << endl;

}