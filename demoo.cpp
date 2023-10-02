#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr{1,2,3,4,5,6,7,8,9};
    for(int i=0;i+1<arr.size();i=i+2)
    {
        cout<<arr[i+1]<<"  "<<arr[i]<<" ";
        
    }

    return 0;
}