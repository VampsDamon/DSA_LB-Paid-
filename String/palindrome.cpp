#include<bits/stdc++.h>
using namespace std;
bool checkPalin(char name[],int n)
{
   int i=0;
   int j=strlen(name)-1;
   while(i<=j)
   {
     if(name[i]!=name[j])
     return false;
     i++;
     j--;
   }
   return true;

}
void converIntosame(char name[])
{
  int n=strlen(name);
  for(int i=0;i<n;i++)
  {
    if(name[i]>= 'a' && name[i]<= 'z')
    name[i]=name[i]-'a'+'A';
  }
}
int main()
{
    char name[50];
    cin>>name;
    int i=0;
    converIntosame(name);
    cout<<"Is palindrome -> "<<checkPalin(name,50);
    return 0;
}