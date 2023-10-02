#include<iostream>
#include<string.h>
using namespace std;
int sqrt(int n)
{
    int ans;
   int  s=1;
    int e=n;
while(s<=e)
    {
      int mid=s+(e-s)/2;
      if(mid*mid==n)
      {
        ans=mid;
        break;
      }
      else if(mid*mid>n)
       e=mid-1;
      else
      {
      ans=mid;
      s=mid+1;  
      }
    }
    return ans;
}

int main()
{
    int n=10;
    int s=1,e=100;
    
    double finalans=sqrt(n);
    double step=0.1;
    for(int i=0;i<5;i++)
    {
        for(double j=finalans;j*j<=n;j=j+step)
        {
            finalans=j;
        }
        step=step/10;
    }
    cout<<"Final ans :- "<<finalans<<endl;
    return 0;
}