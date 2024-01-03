#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    Node(int data = 0)
    {
        this->data = data;
        this->next = this->prev = NULL;
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
void insertHead(Node *&head ,Node* &tail,int data){
    Node *newNode=new Node(data);
    if(head==NULL){
        head=tail=newNode;
        return;
    }
    head->prev=newNode;
    newNode->next=head;
    head=newNode;
}
void insertTail(Node *&head ,Node* &tail,int data){
    Node *newNode=new Node(data);
    if(head==NULL){
        head=tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
void insertByPosition(Node *&head ,Node* &tail,int data,int pos){
    if(head==NULL){
        Node *newNode=new Node(data);
        head=tail=newNode;
        return;
    }
    if(pos==1){
        insertHead(head,tail,data);
        return;
    }
    if(pos>length(head)){
        insertTail(head,tail,data);
        return;
    }

    int i=1;
    Node *temp=head;
    while(i<pos){
      temp=temp->next;
      i++;
    }
    Node *newNode=new Node(data);
    newNode->next=temp;
    newNode->prev=temp->prev;
    temp->prev->next=newNode;
}
int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *thired = new Node(30);
    Node *head=first;
    Node *tail=thired;
    first->next = second;

    second->prev = first;
    second->next = thired;

    thired->prev = second;

    printData(first);
    // insertHead(head,tail,101);
    // insertHead(head,tail,201);
    // insertTail(head,tail,101);
    insertByPosition(head,tail,201,3);
    printData(head);
    // cout << "Length of List is :- " << length(first) << endl;

    return 0;
}