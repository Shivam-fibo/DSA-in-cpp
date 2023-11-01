#include<iostream>
using namespace std;
 void update(int &m)
  {
    m++;
    
  }
 void update2(int n)
  {
    n++;
    
  }
int main(){
    int num =5;
 // Before update
cout<<num<<endl;
// After update
 update(num);
 cout<<num<<endl;
 // After update2
 update2(num);
 cout<<num;
    return 0;
}