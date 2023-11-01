#include<iostream>
using namespace std;
class A {
    public: 
 void abc(){
    cout<<"Calling fuction1"<<endl;
 }
};
class B {
    public: 
    void abc(){
        cout<<"Calling function2"<<endl;
    }

};
class C : public A, public B{
    public :
    void abc2(){
        cout<<"Calling functio3"<<endl;
    }
};

int main(){
    C obj1;
    obj1.A ::abc();
    C obj2;
    obj2.B ::abc();
    return 0;
}