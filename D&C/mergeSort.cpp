#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"   ";
    }
    cout<<endl;
}
void merge(int arr[],int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int k=s;

    int leftPart[len1];
    int rightPart[len2];

    //Copy Left Part
    for(int i=0;i<len1;i++){
        leftPart[i]=arr[k++];
    }
    //Copy RoghtPart
    k=mid+1;
    for(int i=0;i<len2;i++){
        leftPart[i]=arr[k++];
    }

    //Now Merge these to array 

    int i=0,j=0;k=s;
    while(i<len1 && j<len2){
        if(leftPart[i]<rightPart[j]){
            arr[k++]=leftPart[i++];
        }else{
            arr[k++]=rightPart[j++];    
        }
    }

    //Now Remaing Part copied to main Array
    while(i<len1){
        arr[k++]=leftPart[i++];
    }
    while(j<len2){
        arr[k++]=rightPart[j++];
    }

}
void mergeSort(int  arr[],int s,int e){
    if(s>=e)
    return;
    int mid=(s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);

}

int main()
{
    int arr[6]={23,45,21,11,34,19};
    int s=0;
    int e=5;
    cout<<"Array before Sorting :- ";print(arr,6);cout<<endl;
    mergeSort(arr,s,e);
    cout<<"Array After Sorting :- ";print(arr,6);cout<<endl;
    return 0;
}