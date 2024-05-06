#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;

    int arr[size];
    int sum=0;

    for(int i=0;i<size;i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }

    cout<<"sum : "<<sum<<endl;
    return 0;
}
