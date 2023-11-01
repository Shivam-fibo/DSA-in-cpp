#include <iostream>
using namespace std;
void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)

        {
            cout<<"x";
        }
        cout<<endl;
    }
}
int main()
{
    print1(7);

    return 0;
}