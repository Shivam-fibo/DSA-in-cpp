// Program to find the maximum and minimum array;
#include<iostream>
using namespace std;
  int getMax(int num[], int n)
   {
    int max = INT16_MIN;
    for(int i =1; i<=n; i++)
       {
        if(num[i]>max)
          {
             max= num[i];
          }
       }
       return max;
   }
   int getMin(int num[], int n)
    {
        int min = INT16_MAX;
         for(int i=1;i<=n; i++)
           {
            if(num[i]<min)
             {
                min= num[i];
             }
           }
           return min;
    }
int main(){
    int size;
    cin>>size;
    int num[100];
    for(int i =0; i<=size; i++)
      {
        cin>>num[i];
      }
      cout<<"The maximum value is "<<getMax<<endl;
      cout<<"The minimum value is "<<getMin<<endl;
    return 0;
}