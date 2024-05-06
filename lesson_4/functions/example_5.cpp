/*
Grading mechanism
*/

#include<iostream>
using namespace std;

char printGrading(int a){
    if (a >= 90){
        return 'A';
    }
    else if ((a < 90) && (a > 80)){
        return 'B';
    }
    else if ((a < 80) && (a > 60)) {
        return 'C';
    }
    else{
        return 'D';
    }
}
int main(){
    int a;
    cout<<"Enter the number : ";
    cin>>a;

    char result = printGrading(a);
    cout <<"Grade : " << result;
}