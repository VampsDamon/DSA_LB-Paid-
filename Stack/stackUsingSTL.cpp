#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Stack creation
    stack<int>st;

    //Insertion in Stack
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);
    st.push(16);
    st.push(17);
    st.push(18);

  //Top of the Stack or peek operation
    cout<<st.top()<<endl;

  //Delete from the stack or POP operation

  st.pop();  

   //Check Stack in empty or not

   if(st.empty())
    cout<<"Stack is Empty\n";
    else 
    cout<<"Stack is not Empty\n";

  //To find out size of the Stack
  cout<<"Size of the stackc :- "<<st.size();

  //Swap operation of stack 
  //!It is Used to swap two stacks 
  stack<int>a,b;
  a.push(10); 
  a.push(20); 
  a.push(30); 
  b.push(100); 
  b.push(200);

  cout<<"Before Swaping :- "<<endl;
  cout<<"Size of a :- "<<a.size()<<endl;
  cout<<"Size of b :- "<<b.size()<<endl;

// *Swap operation
 a.swap(b);

  cout<<"After Swaping :- "<<endl;
  cout<<"Size of a :- "<<a.size()<<endl;
  cout<<"Size of b :- "<<b.size()<<endl;
  

  //Printing Stack 
  cout<<"Printing stack"<<endl;
  while(!st.empty()){
    cout<<st.top()<<"\t";
    st.pop();
  }
  cout<<endl;



    return 0;
}