#include <bits/stdc++.h>
using namespace std;
class Stack
{

public:
    int *arr;
    int size;
    int top1;
    int top2;
    Stack(int size)
    {
        arr = new int[size];
        fill(arr, arr + size, 0);
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data)
    {
        if (top1<top2 && top1+1!=size)
        {
            arr[++top1] = data;
        }
        else
        {
            cout << "Stack 1 is OverFlow" << endl;
        }
    }
    void pop1()
    {
        if (top1 == -1)
            cout << "Stack 1 is Underflow" << endl;
        else
        {
            arr[top1] = 0;
            top1--;
        }
    }
    void push2(int data)
    {
        if (top1<top2 && top2-1 !=-1)
        {
            arr[--top2] = data;
        }
        else
        {
            cout << "Stack 2 is OverFlow" << endl;
        }
    }
    void pop2()
    {
        if (top2 == size)
        {
            cout << "Stack 2 is UnderFlow" << endl;
        }
        else
        {
            arr[top2] = 0;
            top2++;
        }
    }

    void print()
    {
        cout<<endl<<endl;
        cout << "Top1 :- " << top1 << endl;
        cout << "Top2 :- " << top2 << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << "  ";
        }
        cout << endl;
    }
};
int main()
{
    Stack st(8);

    st.push1(10);
    st.print();
    st.push1(20);
    st.print();
    st.push1(30);
    st.print();
    st.push1(40);
    st.print();
    st.push2(100);
    st.print();
    st.push2(120);
    st.print();
    st.push2(310);
    st.print();


    st.pop1();
    st.print();
    st.pop1();
    st.print();
    st.pop1();
    st.print();
    st.pop1();
    st.print();

    st.pop1();

    st.push2(111);
    st.print();
    st.push2(121);
    st.print();
    st.push2(222);
    st.print();
    st.push2(333);
    st.print();
    st.push2(444);
    st.print();
    st.push2(555);
    return 0;
}