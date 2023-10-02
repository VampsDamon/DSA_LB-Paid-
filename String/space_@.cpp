#include<bits/stdc++.h>
using namespace std;
void space_remove(char str[])
{
    int n=strlen(str);
    for(int i=0;i<n;i++)
    {
        if(str[i]==' ')
        str[i]='@';
    }
}

int main()
{
    cout<<"Enter the String :- ";
    char str[100] ;
    cin.getline(str,100);
    cout<<"You Enterd :- "<<endl<<str<<endl;
    space_remove(str);
    cout<<"After removing sapec wit @ :- "<<endl<<str<<endl;
    return 0;
}