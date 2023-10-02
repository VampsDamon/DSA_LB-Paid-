#include<iostream>
#include<string.h>
using namespace std;
int division(int num,int n)
{
    int s=1;
    int e=num;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e)
    {
        if(n*mid==num)
        {
         ans=mid;
         break;
        }
        else if(n*mid> num)
        {
            e=mid-1;
        }
        else
        {
           ans=mid;
           s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}


int main()
{
   float q=division(10,3);
    float step=.1;
    
    // cout<<"Q :- "<<division(10,3)<<endl;
    for(int i=0;i<3;i++)
    {
        for(float j=q;j*3<=10;j=j+step)
        {
            q=j;
        }
        step=step/10;
    }
    cout<<"Upto 3 decimal :- "<<q<<endl;
    return 0;
}