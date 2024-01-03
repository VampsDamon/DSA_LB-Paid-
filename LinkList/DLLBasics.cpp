#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *prev;
    int data;
    Node *next;

    Node(int data=0){
        this->data=data;
        this->next=this->prev=NULL;
    }

};
void printData(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "   ";
        temp = temp->next;
    }
    cout << endl;
}

int length(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
int main()
{
    Node *first=new Node(10);
    Node *second=new Node(20);
    Node *thired=new Node(30);

    first->next=second;
    
    second->prev=first;
    second->next=thired;

    thired->prev=second;
    
    printData(first);
    cout<<"Length of List is :- "<<length(first)<<endl;
    
    return 0;
}