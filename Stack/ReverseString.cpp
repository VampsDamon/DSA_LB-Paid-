#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="shahid";
    stack<char>st;
    cout<<"String before reverse :- ";
    for(int i=0;i<str.length();i++){
      st.push(str[i]);
      cout<<str[i]<<"  "; 
    }
    cout<<endl;

    cout<<"String After reverse :- ";
    while(!st.empty()){
        cout<<st.top()<<"  ";
        st.pop();
    }
    cout<<endl;

    return 0;
}