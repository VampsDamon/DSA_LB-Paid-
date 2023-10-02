#include<bits/stdc++.h>
using namespace std;
long int fact(int n){
    if(n==0 || n==1)
     return 1;
    return n*fact(n-1);
}

int main()
{
    int n;
    cout<<"Enter value of n :- ";
    cin>> n;
    cout<<"Factorial of n is :- "<<fact(n);
    return 0;
}