#include<bits/stdc++.h>
using namespace std;
void reverse(string & sid,int s,int e){
    if(s>=e)
     return;
    swap(sid[s],sid[e]);
   reverse(sid,s+1,e-1);
}

int main()
{
    string sid="abc";
    int s=0;
    int e=sid.size()-1;
    cout<<"Before Reverse :- "<<sid<<endl;
    reverse(sid,s,e);
    cout<<"After Reverse :- "<<sid<<endl;
    return 0;
}