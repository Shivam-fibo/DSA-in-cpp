#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row= 1;
      while(row<=n)
        {
            int clmn= 1;
              while(clmn<=row)
               {
                cout<<row;
                clmn=clmn+1;
                
               }
               cout<<endl;
               row=row+1;

        }
    return 0;
}