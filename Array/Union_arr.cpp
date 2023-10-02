#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

bool present(int num, vector<int> arr,int size)
{
    for(int i=0;i<size;i++)
    {
        if(num==arr[i])
         return true;
    }
    return false;
} 

int main()
{
    vector<int> b{2,4,5,8,9,10,20,21,34,35};
    vector<int> a{6,7,2,12,1,4,9,10};
    vector<int> ans;
        for(int i=0;i<a.size();i++)
         ans.push_back(a[i]);

        for(int i=0;i<b.size();i++)
        {
            if(!present(b[i],a,a.size()))
            {
             
             ans.push_back(b[i]);
            }
        } 
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<"  ";
    }
    cout<<endl;
        return 0;
}