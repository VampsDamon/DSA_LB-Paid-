#include<bits/stdc++.h>
using namespace std;

int main()
{
     char name[50];
    cin>>name;
    cout<<name<<endl;
    for(int i=0;i<strlen(name);i++)
    {
        if(name[i]>='a' && name[i]<='z')
        name[i]=name[i]-'a'+'A';
    }
    cout<<name;
    return 0;
}