#include<bits/stdc++.h>
using namespace std;
bool binarySearch(vector<int> &arr,int target,int s,int e){
    int mid=s+(e-s)/2;
    if(e<s)
     return false;
    if(target==arr[mid])
     return true;
     if(target<arr[mid])
     return binarySearch(arr,target,s,mid-1);
    else
     return binarySearch(arr,target,mid+1,e);
}

int main()
{
    vector<int> arr={1,2,3,4,5,6,7,8,9};
    if(binarySearch(arr,20,0,arr.size()-1))
      cout<<"Value is Present";
    else
     cout<<"Value is not present";
    return 0;
}