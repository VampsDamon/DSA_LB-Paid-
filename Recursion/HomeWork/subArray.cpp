#include<bits/stdc++.h>
using namespace std;
void printSubPart(int  arr[],int i,int n,int len){
 if(n>len)
   return;
   for(int j=i;j<n;j++){
     cout<<arr[j]<<"   ";

   }
    cout<<endl; 

  printSubPart(arr,i,n+1,len);
}
void print(int arr[],int i,int len){
    if(i>len)
     return ;
    printSubPart(arr,i,i,len);
    print(arr,i+1,len);
}
int main()
{
    int arr[4]={1,2,3,4};
    print(arr,0,4);
    return 0;
}