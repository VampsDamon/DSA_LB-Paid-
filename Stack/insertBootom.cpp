//Insert the 1st element of stack to the Bottom
#include<bits/stdc++.h>
using namespace std; 
void insertBottom(stack<int> &st, int target)
{
    if(st.empty()){
      st.push(target);
      return ;
    }
    int a=st.top();
    st.pop();
    insertBottom(st,target);
    st.push(a);
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
    st.push(70);
    int target=st.top();
    st.pop();
    insertBottom(st,target);
    while (!st.empty())
    {
        cout << st.top() << "   ";
        st.pop();
    }
    cout << endl;
    return 0;
}