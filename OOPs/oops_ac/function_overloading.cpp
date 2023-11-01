#include<iostream>
using namespace std;
class coding{
    public:

    void fun(){
        cout<<"Function without any argument"<<endl;
    }
    void fun(int n)
    {
        cout<<"Function with int argument"<<endl;
    }
    void fun(double)
     {
        cout<<"Function with float argument"<<endl;
     }
};
int main(){
    coding obj;
    obj.fun();
    obj.fun(12);
    obj.fun(12.5);
    return 0;
}