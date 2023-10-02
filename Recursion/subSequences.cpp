#include<bits/stdc++.h>
using namespace std;
void subString(vector<vector<int>>&ans,vector<int>&arr,int i,vector<int>tempAns){
    
    if(i>=arr.size())
     {
        ans.push_back(tempAns);
        return;
     }
    
     //For Exclude
     subString(ans,arr,i+1,tempAns);

     //For Include
     tempAns.push_back(arr[i]);
     subString(ans,arr,i+1,tempAns);

    
}
int main()
{
    vector<int>arr={1,2,3};
    vector<vector<int>>ans;
    vector<int>tempAns;
    subString(ans,arr,0,tempAns);
    for(auto i:ans)
    {
        for(auto k:i)
        cout<<k<<"   ";
     cout<<endl;
    }

    return 0;
}