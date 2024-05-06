/*
what is Typecasting?>>>Typecasting is the prcoess of change the one datatype into
another datatype.Also known as type-conversion.

type of typecasting>>1.implicit and explicit

Implicit > automatic type casting
         > it is only use in the program if both variable are comptaible with each other

Explicit > manually type casting
         > it doesn't requires the comptability with other variables.
         > it uses the cast () operator to change the type of variable

*/



#include<iostream>
using namespace std;

int main(){
    // here we turn char into int datatype
    char ch=97;
    cout << ch <<endl; //automatically > Implicit
    cout<< (int)ch << endl; //manually > Explicit

    cout << endl;

    // here we turn int into char datatype
    int bh = 'a';
    cout << bh <<endl; // automatically > Implicit
    cout<< (char)bh << endl; // manuallu > Eplicit

    cout << endl;

    float x = 4.5;
    int y = int(x) + 2;
    cout << "value of y is "<<y<<endl;
}