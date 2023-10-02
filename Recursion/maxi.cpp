#include<bits/stdc++.h>
using namespace std;
int maxi(int arr[],int n,int Max){
   if(n<0)
   return Max;

   Max=max(Max,arr[0]);
   return maxi(arr+1,n-1,Max);
   
}
int main()
{
    int arr[6]={20,140,89,90,23,1};
    cout<<"Maxi :- "<<maxi(arr,5,INT_MIN);
    return 0;
}