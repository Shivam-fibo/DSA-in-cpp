#include<iostream>
using namespace std;
 void update(int n)
  {
    n++;
    cout<<n<<endl;
  }
int main(){
//     int i =5;
//     int &j =i;
//     cout<<i<<endl;
//     i++;
//     cout<<j<<endl;
//     cout<<i<<endl;
//     j++;
//     cout<<i<<endl;
//     ++j;
//     cout<<i<<endl;
 int num =5;
 // Before update
cout<<num<<endl;
// After update
 update(num);
    return 0;
}