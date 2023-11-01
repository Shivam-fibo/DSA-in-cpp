#include<iostream>
using namespace std;
// Function Signautre
 void printCoutning(int n)
 {
    // Function Body
    for ( int i =1; i<n; i++)
    {
        cout<<i<<endl;
    }
 }
    int main(){
        int n;
        cin>>n;
    // Function Call

    printCoutning(n);
    return 0;
}