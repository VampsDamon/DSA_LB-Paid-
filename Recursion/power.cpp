#include<bits/stdc++.h>
using namespace std;
int power(int num,int p){
    if(p==0)
     return 1;
    return num*power(num,p-1);
}
int main()
{
    cout<<"2 to the Power of 5 is :- "<<power(2,5);
    return 0;
}