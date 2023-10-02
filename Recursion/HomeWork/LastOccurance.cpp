#include<bits/stdc++.h>
using namespace std;
//Left to Right
void findLastL(string & s,int & ans,int i,char ch){
   if(i>=s.size())
    return ;

   if(ch==s[i])
    ans=i;

   findLastL(s,ans,i+1,'d');
   
}

//From right to Left
void findLastR(string & s,int & ans,int i,char ch){
   if(i<0)
    return ;

   if(ch==s[i]){
    ans=i;
     return ;
   }

   findLastR(s,ans,i-1,'d');
   
}

int main()
{
    string s="aandsdjaaa";
    int ans;
    int n=s.size();
     findLastR(s,ans,n-1,'d');
     cout<<"Last Occurance at index :- "<<ans<<endl;
    return 0;
}