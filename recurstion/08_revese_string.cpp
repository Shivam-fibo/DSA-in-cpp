#include<iostream>
using namespace std;
void reveser(string &str, int i, int j )
 {
    // base condition
    if(i>j)
      return ;

      swap( str[i], str[j]);
       i++;
       j--;
       // recursive call
      reveser(str, i, j);
 }
int main(){
    string name = "shivam";
    reveser(name, 0, name.length()-1);
    cout<<name;
    return 0;
}