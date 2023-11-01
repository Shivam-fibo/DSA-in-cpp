#include<iostream>
using namespace std;
class A {
public:
void func1(){
    cout<<"Calling functionA"<<endl;
}
};
class C: public A {
public :
 void func2(){
    cout<<"Calling functionC"<<endl;
 }
};
class F {
void func3(){
    cout<<"Calling functionF"<<endl;
}
};
class B : public A , public F {
void func4(){
    cout<<"Calling functionB"<<endl;
}
};
class D: public C {
void func5(){
    cout<<"Calling functionD"<<endl;
}
};
class E: public C {
void func6(){
    cout<<"Calling functionE"<<endl;
}
};



int main(){
    A obj1;
    obj1.func1();
    B obj2;
   
    obj2.func1();
    return 0;
}