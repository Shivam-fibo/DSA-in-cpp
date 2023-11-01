#include<iostream>
using namespace std;
class Human{
    public:
     int height;
     int weight;
     int age;
     public:
      int getAge(){
        return this->age;
      }
      int setWeight(int w)
      {
        this->weight =w;
      }
};

class Male : public Human{
   public   : 
   string color;

   void sleep(){
    cout<<"Male is sleeping"<<endl;
   }
};
int main(){
    Male Shivam;
     
    cout<<Shivam.age<<endl;
    cout<<Shivam.weight<<endl;
    cout<<Shivam.height<<endl;


    cout<<Shivam.color<<endl;
    Shivam.sleep();
    
    return 0;
}