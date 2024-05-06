/*
Write a C++ program to perform basic arithmetic operations (addition, subtraction, multiplication, division) based on user input using a switch case.
*/

#include<iostream>
using namespace std;

int main(){
    double first_number;
    double second_number;

    cout<<"Enter the first number : ";
    cin>>first_number;
    cout<<"Enter the second number : ";
    cin>>second_number;

    int choice;
    cout<<endl;
    cout<<"1.Addition\n2:subtraction\n3.Multiplication\n4.Division\n";
    cout<<"Enter the choice : ";
    cin>>choice;

    switch(choice){
        case 1:cout<<"sum is "<<(first_number + second_number)<<endl;break;
        
        case 2:cout<<"Difference is "<<(first_number - second_number)<<endl;break;
        
        case 3:cout<<"Multiplication is "<<(first_number * second_number)<<endl;break;
        
        case 4:cout<<"Division is "<<(first_number / second_number)<<endl;break;

        default:    
            cout<<"Wrong Input"<<endl;
    }
    return 0;
}