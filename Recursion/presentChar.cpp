#include<bits/stdc++.h>
using namespace std;
bool checkStr(string name,char check,int i){
    if(name.size()<=i) 
    return false;

    if(name[i]==check)
     return true;

   return checkStr(name,check,++i);

    
}

int main()
{
    string name="ShahisdK";
    char check='k';
  cout<<  checkStr(name,check,0);
    return 0;
}