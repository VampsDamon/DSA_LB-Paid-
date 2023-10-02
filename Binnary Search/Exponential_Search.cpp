#include<bits/stdc++.h>
using namespace std;
int exponential_search(vector<int> & arr,int target)
{
    if(arr[0]==target)
     return 0;
   
    
        int i=1;
        while(i< arr.size() && arr[i]<target)
        {
            i=i*2;
        }
        
      return   i;
    
}
int binary_search(vector<int> & arr,int s,int e,int target)
{
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==target)
         return mid;
        else if(arr[mid]>target)
        e=mid-1;
        else
        s=mid+1; 
      mid=s+(e-s)/2;  
    }
    return -1;
}

int main()
{
    vector<int>arr{3,4,5,6,11,13,14,15,56};
    int n=arr.size();
    int i=exponential_search(arr,13);
    if(i==0)
    cout<<"Elemnt at Zero Index";
    else
    {
    int index = binary_search(arr,(i/2),min(i,n-1),13);
    cout<<"Index is :- "<<index<<endl;
    }
    return 0;
}