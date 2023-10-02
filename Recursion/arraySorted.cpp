#include<bits/stdc++.h>
using namespace std;
bool checkSorted(int arr[],int size,int i){
    if(arr[i]>arr[i+1])
    return false;
    if(i>size)
     return true;
  return checkSorted(arr,size,i+1);
}
int main()
{ 
    int array[6]={1,2,3,4,5,-6};
  cout<<  checkSorted(array,5,0);
    
    return 0;
}