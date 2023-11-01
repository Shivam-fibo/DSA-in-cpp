// WAP to check that the given number is prime or not
#include<iostream>
using namespace std;
// 1- prime number
// 0 - not prime number
bool isPrime(int n)
 {
    for(int i =2; i<n; i++)
      {
        if(n%i==0)
         {
            return 0;
         }
      }
      return 1;
 }
int main(){
    int n;
    cin>>n;
    if (isPrime(n))
    {
        cout<<"Yes "<<n<<" is a   prime  number "<<endl;
    }
else
{
    cout<<"The "<<n<< " is not a prime number"<<endl;
}

    return 0;
}