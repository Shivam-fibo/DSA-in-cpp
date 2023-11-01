#include<iostream>
using namespace std;
class Hero{
 // Data membership
private:
int health;
public:
char level;
int getHealth(){
  return health;
}
char getLevel(){
  return level;
}
void setHelth(int h){
  health= h;
}
void setLevel(char ch){
  level = ch;
}
};
int main(){
    // creteted object
    Hero Ramesh;
    Ramesh.setHelth(90);
    Ramesh.setLevel(99);
    // Ramesh.sethealth=70;
    // Ramesh.setlevel='b'
    // cout<<"Size : "<<sizeof(Ramesh)<<endl;
   // to acces the properties of ramesh  use the dot operator
   cout<<"Health is "<< Ramesh.getHealth()<<endl;
   cout<<"level is "<< Ramesh.getLevel()<<endl;
    return 0;
}