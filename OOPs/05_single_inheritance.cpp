#include<iostream>
using namespace std;
class Animal{
public :
int age;
int weight;

public :
void speak(){
    cout<<"Speking"<<endl;
}
};
 class Dog: public Animal{
   
 };
 // multilevel Inheritance
 class GermanShepherd : public Dog{

 };
int main(){
    GermanShepherd d;
    d.speak();
    return 0;
}