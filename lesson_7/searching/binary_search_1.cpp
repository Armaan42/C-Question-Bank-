#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// using vectors
// int main(){
//     vector<int> a{1,2,3,4,5};

//     if(binary_search(a.begin(), a.end(), 4 )){
//         cout << "found" << endl;
//     }
//     else{
//         cout << "not found" << endl;
//     } 
// }

//using array
int main(){
    int size = 6;
    int arr[] = {1,2,3,4,5,6};
                     //(base address , base address + size , key )                           
    if(binary_search(arr, arr + size, 3)){
        cout << "found" << endl;
    }
    else{
        cout << "not found" << endl;
    }
}