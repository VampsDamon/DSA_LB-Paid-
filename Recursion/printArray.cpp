#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int index){
   if(index<0)
    return;
    print(arr,index-1);
    cout<<arr[index]<<"  ";
}
int main()
{
    int arr[5]={1,2,3,5,4};
    print(arr,4);
    return 0;
}