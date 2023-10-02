#include<bits/stdc++.h>
using namespace std;
int minCoin_Method2(vector<int>& number,int target,int output=0){
    if(target==output)
     return 0;
    if(target<output)
    return INT_MAX;
    int mini=INT_MAX;
     for(int i=0;i<number.size();i++){
       int ans=minCoin_Method2(number,target,output+number[i]);
       if(ans!=INT_MAX)
       mini=min(ans+1,mini);
   }
   return mini ;

}
int minCoin_Method1(vector<int>& number,int target){

   if(target<0)
    return INT_MAX;
   if(target==0)
    return 0;
   int mini=INT_MAX;
   for(int i=0;i<number.size();i++){
       int ans=minCoin_Method1(number,target-number[i]);
       if(ans!=INT_MAX)
       mini=min(ans+1,mini);
   }
   return mini;
}
int main()
{
    vector<int> number={1,2};
    int target =5;
    cout<<"Min number of Coins :- "<<minCoin_Method1(number,target)<<endl;
    cout<<"Min number of Coins :- "<<minCoin_Method2(number,target);
    return 0;
}