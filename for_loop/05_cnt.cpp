// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++)
//       {
//         cout<<"Hi"<<endl;
//         cout<<"Hey"<<endl;
//         continue;
//         cout<<"Hello"<<endl;
//       }
//     return 0;
// }
#include<iostream>
using namespace std;

int main(){
    for(int i=0; i<=15; i+=2)
    {
        cout<<i<<" ";
        if(i&1)
        {
            continue;
        }
        i++;
    }
    return 0;
}