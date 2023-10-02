#include<iostream>
#include<string.h>
using namespace std;
#include<vector>
int binary_search(vector<int> & arr,int target,int s,int e)
{
    int ans_f=-1;
    
    // int ans_l=-1;

    
    while(s<=e)
    {
      int mid=s+(e-s)/2;
      if(arr[mid]==target)
      {
        ans_f=mid;
        e=mid-1;
      }
      else if(arr[mid]>target)
      e=mid-1;
      else
      s=mid+1;
    }
    return ans_f;
}
int Lbinary_search(vector<int> & arr,int target,int s,int e)
{
    int ans_f=-1;
    
    // int ans_l=-1;

    
    while(s<=e)
    {
      int mid=s+(e-s)/2;
      if(arr[mid]==target)
      {
        ans_f=mid;
        s=mid+1;
      }
      else if(arr[mid]>target)
      e=mid-1;
      else
      s=mid+1;
    }
    return ans_f;
}
int main()
{
    vector<int>arr{1,1,1,2,2,3,3,3,4};
    cout<<"First index is :- "<<binary_search(arr,3,0,8);
    cout<<"\nLast index is :- "<<Lbinary_search(arr,3,0,8);
    
    return 0;
}