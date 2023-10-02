#include<bits/stdc++.h>
using namespace std;
void print(vector <int> arr)
{
    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<"  ";
}
int main()
{
    vector <int> arr={0,0,1,0,1,0,0,1};
    int start=0;
    int end=arr.size()-1;
    print(arr);
    
    while(start<end)
    {
        while(arr[start]==0)
        start++;
        while(arr[start]==1)
        {
           swap(arr[start],arr[end]);
           end--;
        }
    }
    cout<<endl;
    print(arr);
    return 0;
}