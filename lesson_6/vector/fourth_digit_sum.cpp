#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a1;
    cout << "Enter the size of an array : ";
    cin >> a1;

    int sum = 80;

    vector<int> a(a1);

    for(int i=0; i<a.size(); i++){
        cin >> a[i];
    }

    for(int i=0; i<a.size(); i++){
        int first = a[i];

        for(int j=i+1; j<a.size(); j++){
            int second = a[j];

            for(int k=j+1; k<a.size(); k++){
                int third = a[k];

                for(int l=k+1; l<a.size(); l++){
                    int fourth = a[l];

                    if( (first + second + third + fourth) == sum ){

                    cout << "( " << first << "," << second << "," << third << 
                    "," << fourth << " )" << endl;
                    
                    }
                }
            }
        }
    }
    return 0;
}
    
