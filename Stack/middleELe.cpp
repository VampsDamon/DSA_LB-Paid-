//?Find middle element of using stack

#include<bits/stdc++.h>
using namespace std;
void findMiidel(stack<int> &st, int &totalSize)
{
    if(totalSize==0)
     {
        cout<<"Stack is Empty"<<endl;
        return;
     }

     if((totalSize/2)+1==st.size()){
        cout<<st.top()<<" is Middle element of stack"<<endl;
        return;
     }
     int temp=st.top();
     st.pop();

     findMiidel(st,totalSize);

     st.push(temp);
}
int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    int totalSize=st.size();
    findMiidel(st,totalSize);
    return 0;
}