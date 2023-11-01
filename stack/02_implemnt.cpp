#include <iostream>
using namespace std;
class stack
{
public:
    int *arr;
    int top;
    int size;

    // constructor
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
    };

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    };
    void pop()
    {
        if (top >= 0)
        {
            cout << "Stack underflow" << endl;
        }
    };

    int peek()
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    };

    bool isEmpty(){
        if(top==-1)
         {
            return true;
         }
         else{
            return false;
         }
    };

};
int main()
{
    stack st(10);
    st.push(10);
    st.push(23);
    st.push(26);

    cout<<st.peek()<<endl;

    return 0;
}