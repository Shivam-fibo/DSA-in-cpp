#include<iostream>
using namespace std;
bool pldm(string str, int s, int e)
{
    // base case 
    if(s>e)
      return true;

    if(str[s]!=str[e])
     return false;
    else{
      return pldm(str, s++, e--);

    }
}

int main(){
    // i/p : 121
    //o/p : true;
     string str = "aba";
  bool ispldm  = pldm(str, 0, str.length()-1);
  if(ispldm)
  {
    cout<<"Yes";
  }
  else{
    cout<<"No";
  }
     

    

    return 0;
}