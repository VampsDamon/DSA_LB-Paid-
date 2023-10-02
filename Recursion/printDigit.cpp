#include<bits/stdc++.h>
using namespace std;
void printDigit(int n){
   if(n==0)
   {
    return;
   }
   printDigit(n/10);
   cout<<n%10<<"  "; 
}
int main()
{
    int num=123900897;
    printDigit(num);
    return 0;
}