// string::erase
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str ("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
  cout << str << '\n';
    cout << endl;                                 
  // str.erase (0,4);                        
  // cout << str << '\n';
                                           
  str.erase (str.begin()+9);               
  cout << str << '\n';
                                           
//   str.erase (str.begin()+5, str.end()-9);  
//   cout << str << '\n';
                                           
  return 0;
}