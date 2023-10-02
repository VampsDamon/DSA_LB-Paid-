#include<bits/stdc++.h>
using namespace std;
void printForward(int n){
    if(n==0) return;
    printForward(n-1);
    cout<<n<<"  ";
}
void printBackward(int n){
     if(n==0)
    return ;
    cout<<n<<"  ";
    printBackward(n-1);
}
int main()
{
    cout<<"Counting in Forward Direction :- "<<endl;
    printForward(5);
    cout<<endl<<"Counting in Backward Direction :- "<<endl;
    printBackward(5);
    return 0;
}