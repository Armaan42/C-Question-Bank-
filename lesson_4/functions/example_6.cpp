/*
Grading Mechanism
*/

#include<iostream>
using namespace std;

char print_grading( int marks ){
    switch( marks ){
        case 0 ... 33 : return 'D';break;
        case 34 ... 59 : return 'C';break;
        case 60 ... 79 : return 'B';break;
        case 80 ... 100 : return 'A';break;
        default:
            cout << "Wrong Input" <<  endl;
    }
}

int main(){
    int marks;
    cout << "Enter the marks : ";
    cin >> marks;

    char result = print_grading(marks);
    cout << result <<  endl;
}