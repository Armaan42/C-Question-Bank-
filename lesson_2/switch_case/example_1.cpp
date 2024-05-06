/*
Write a C++ program using a switch case to display the day of the week based on the user input (1 for Monday, 2 for Tuesday, etc.).
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of week : ";
    cin>>n;

    switch(n){
        case 1:cout<<"Monday"<<endl;break;
        case 2:cout<<"Tuesday"<<endl;break;
        case 3:cout<<"Wednesday"<<endl;break;
        case 4:cout<<"Thrusday"<<endl;break;
        case 5:cout<<"Friday"<<endl;break;
        case 6:cout<<"Saturday"<<endl;break;
        case 7:cout<<"Sunday"<<endl;break;
        default:
            cout<<"Wrong choice"<<endl;
    }
    return 0;
}