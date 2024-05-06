/*
Write a C++ program that takes two integer inputs from the user and performs the following operations using arithmetic operators: addition, subtraction, multiplication, and division. Display the results on the screen.
*/
#include<iostream>
using namespace std;

int main(){
    int first_number;
    cout<<"Enter the first number : ";
    cin>>first_number;

    int second_number;
    cout<<"Enter the second number : ";
    cin>>second_number;

    cout << endl;

again:
    int choice;
    cout<<"1: Addition\n2: Subtraction\n3: Multiplication\n4: Division\n"<<endl<<"Enter your choice : ";
    cin>>choice;

    switch(choice){
        case 1:cout<<"Additon : "<<(first_number+second_number);break;
        case 2:cout<<"Subtraction : "<<(first_number-second_number);break;
        case 3:cout<<"Multiplication : "<<(first_number*second_number);break;
        case 4:cout<<"Division : "<<(first_number/second_number);break;
        default:
            cout<<"Wrong choice"<<endl;
            char t;
            cout<<endl;
            cout<<"Wants to try again [y|n] : ";
            cin>>t;
            if (t == 'y'){
                goto again;
            }
            else if ( t == 'n'){
                break;
            }
    }
}