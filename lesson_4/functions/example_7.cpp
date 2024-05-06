/*
sum of all even numbers upto num
*/

#include<iostream>
using namespace std;

// METHOD - 2
// int sum_of_even( int num ){
//     int sum = 0;
//     for(int i=0; i<=num; i++){
//         if( i % 2 == 0){
//             sum = sum + i;
//         }
//     }
//     return sum;
// }

int sum_of_even( int num ){
    int sum = 0;
    for( int i=2; i<=num; i=i+2){
        sum = sum + i;
    }
    return sum;
}

int main(){
    int num;
    cout << "Enter the of number : ";
    cin >> num;

    int result = sum_of_even(num);
    cout << "sum upto "<< num << " is " << result << endl;
}