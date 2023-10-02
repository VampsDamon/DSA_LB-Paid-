#include<bits/stdc++.h>
using namespace std;

int main()
{
    char name[100];
    string arr;
    // cout<<"Enter your (using cin) Name :- ";
    // cin>>name;
    // cout<<"Your name is :- "<<name<<endl;
    cin>>name[2];
    cin>>name[49];
    cout<<"Enter your (using getline) Name :- ";
   // getline(cin,arr);
    cin.getline(name,50);
    cout<<"Your name is :- "<<name<<endl;
    return 0;
}