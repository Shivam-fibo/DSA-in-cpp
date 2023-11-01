#include<iostream>
using namespace std;

int main(){
    string str = "Shivam";
    cout<<str.length()<<endl;
  str.push_back('c');
  cout<<str<<endl;
  str.pop_back();
  cout<<str<<endl;
    return 0;
}