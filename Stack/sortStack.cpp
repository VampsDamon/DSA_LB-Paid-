//? Sort the Stack 

#include<bits/stdc++.h>
using namespace std;
void insertSortedOrder(stack<int> &st,int target)
{
   if(st.empty()){
    st.push(target);
    return ;
   }
   if(st.top()>=target){
     st.push(target);
     return ;
   }
   int a=st.top();
   st.pop();
   insertSortedOrder(st,target);
   st.push(a);
}
void sortStack(stack<int> &st){
   if(st.empty()){
     return ;
   }
   int top=st.top();
   st.pop();
   sortStack(st);
   insertSortedOrder(st,top);
} 
int main()
{
    stack<int>st;
    st.push(34);
    st.push(54);
    st.push(41);
    st.push(24);
    st.push(14);
    st.push(9);
    sortStack(st);
    while(!st.empty()){
        cout<<st.top()<<"  ";
        st.pop();
    }
    cout<<endl;
    return 0;
}