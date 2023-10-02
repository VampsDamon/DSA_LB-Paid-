#include<bits/stdc++.h>
using namespace std;
void selection(vector<int> & arr)
{
    for(int i=0;i<arr.size-1();i++)
    {
        int min=i;
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[j]<arr[min])
            min=j;
        }
        swap(arr[min],arr[i]);
    }
}
void print(vector<int> & arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

int main()
{
    vector<int>arr{7,4,10,3,1};
    cout<<"Array Before sorting :-  ";
    print(arr);
    selection(arr);
    cout<<"Array After sorting :-  ";
    print(arr);

    
    return 0;
}