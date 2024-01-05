//? We have to reverse the stack as I/p 30->20->10  , o/p 10->20->30

#include<bits/stdc++.h>
using namespace std;
void insertBottom(stack<int> &st, int target)
{
    if (st.empty())
    {
        st.push(target);
        return;
    }
    int a = st.top();
    st.pop();
    insertBottom(st, target);
    st.push(a);
}
void reverseStack(stack<int> &st)
{
    if(st.empty()){
        
      return;
    }
    int target=st.top();
    st.pop();
    reverseStack(st);
    insertBottom(st,target);

}
int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    reverseStack(st);
    while (!st.empty())
    {
        cout << st.top() << "   ";
        st.pop();
    }
    cout << endl;
    return 0;
}