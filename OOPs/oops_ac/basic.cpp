#include<iostream>
using namespace std;
class A{
    public:
    void funcA(){
        cout<<"Function A"<<endl;
    }
};
class B : public A{
    public:
    void funcB(){
        cout<<"Function B"<<endl;
    }
};
class C {
    public:
    void funcC(){
        cout<<"Function C"<<endl;
    }
};
class D : public A, public B{
    public: 
    void funcD(){
        cout<<"Function D"<<endl;
    }
};


int main(){
    D d;
    d.funcD();

    return 0;
}