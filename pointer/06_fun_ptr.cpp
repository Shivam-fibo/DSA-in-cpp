#include<iostream>
using namespace std;
void print(int *p)
  {
    cout<<p<<endl;
  }
 void update(int *p) 
  {
    *p = *p+1;

  }
int main(){
    int value = 5;
    int *p= &value;
    print(p);
    cout<<"Before "<<*p<<endl;
    update(p);
    cout<<"After "<<*p<<endl;
    // When we increse the addres of a p in  a function then it does not change it 
    // While when we change the valuje
    return 0;
}