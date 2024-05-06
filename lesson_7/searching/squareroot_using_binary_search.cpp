#include<iostream>
using namespace std;

int findsqrt(int num){
    int start = 0;
    int end = num;
    int mid = start + (end - start)/2;
    int target = num;
    int ans = -1;

    while( start <= end){
        if( mid*mid == target ){
            return mid;
        }
        else if( mid*mid > target ){
            end = mid - 1;
        }
        else{
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int num;
    cout << "Enter the number : ";
    cin >> num;

    int result = findsqrt(num);
    // cout << result << endl;
    
    int precision;
    cout << "Enter the digit you want after integer : ";
    cin >> precision;

    double step = 0.1;
    double final_ans = result;

    for(int i = 0; i<precision; i++){
        for( double i = 0; i*i <= num; i = i + step){
            final_ans = i;
        }
    step = step/10;
    }
    
    cout << final_ans << endl;

}