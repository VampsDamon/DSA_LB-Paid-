#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top;
    Stack(int size){
        arr=new int[size];
        this->size=size;
        top=-1;
    }

    void push(int data){
        if(top<size)
      arr[++top]=data;
      else
      cout<<"Stack is Overflow"<<endl;
    }
    void pop(){
        if(top!=-1)
       top--;
       else
           cout << "Stack is in Underflow, Can not Delete\n";
    }

    int getSize(){
        return top+1;
    }

    int getTop(){
        if(top!=-1)
       return arr[top];
       else{
        cout<<"Stack is Empty";
       }
    }

    bool isEpmty(){
       return top==-1?true:false;
    }

};

int main()
{
    Stack st(5);
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);
    st.push(16);

    cout << "Printing stack" << endl;
    while (!st.isEpmty())
    {
        cout << st.getTop() << "\t";
        st.pop();
    }
    cout << endl;
    if (st.isEpmty())
        cout << "Stack is Empty\n";
    else
        cout << "Stack is not Empty\n";

    cout<<"Size of the Stack :- "<<st.getSize()<<endl;
    return 0;
}