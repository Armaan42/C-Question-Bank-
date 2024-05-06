/*
Write a C++ program to check whether a student is eligible for admission to a university. The program should take two inputs from the user: the student's age and the marks obtained in a qualifying exam. The student must be at least 18 years old and have scored 60 marks or more to be eligible for admission. Use logical operators to determine eligibility and display the result on the screen.
*/

#include<iostream>
using namespace std;

int main(){
    int student_age;
    cout<<"Enter the student age : ";
    cin>>student_age;

    int marks;
    cout<<"Enter the marks : ";
    cin>>marks;

    if((student_age >=18) && (marks >= 60)){
        cout<<"Eligible for admission";
    }
    else{
        cout<<"Not satisfying the required eligibility";
    }
}