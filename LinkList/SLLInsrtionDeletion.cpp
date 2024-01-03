// Insertion in SLL
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data = -1)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
       cout<<"Node deleted and it's value is :- "<<this->data<<endl;
       free(this);
    }
};


// Insertion IN SLL
int length(Node *start)
{
    Node *temp = start;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}
void printData(Node *Head)
{
    Node *temp = Head;
    if (Head == NULL)
    {
        cout << "List is Empty\n";
        return;
    }
    while (temp != NULL)
    {
        cout << temp->data << "   ";
        temp = temp->next;
    }
    cout << endl;
}
void insertElementAtHead(Node *&Head, Node *&Tail, int data)
{

    Node *newNode = new Node(data);
    if (Head == NULL)
    {
        Head = newNode;
        Tail = newNode;
        return;
    }

    newNode->next = Head;
    Head = newNode;
}
void insertElementAtTail(Node *&Tail, Node *&Head, int data)
{
    Node *newNode = new Node(data);
    if (Head == NULL)
    {
        Head = newNode;
        Tail = newNode;
        return;
    }

    Tail->next = newNode;
    Tail = newNode;
}

void insertAtPosition(int pos, Node *&head, Node *&Tail, int data)
{
    if (pos > length(head))
    {
        cout << "Position is greater then Length so insertion can not possible " << endl;
        return;
    }
    if (pos == 0)
    {
        insertElementAtHead(head, Tail, data);
        return;
    }
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        Tail = newNode;
        return;
    }
    int i = 1;
    Node *temp = head;
    while (i < pos)
    {
        temp = temp->next;
        i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

// Deletion IN SLL

void deleteNode(int pos, Node *&Head, Node *Tail)
{   
    int len = length(Head);
    if (Head == NULL || pos > len)
    {
        cout << "No any Item to delete";
        return ;
    }
    if (1 == pos)
    {
        Node *temp = Head;
        Head = temp->next;
        delete temp;
        return;
    }
    if (len ==pos)
    {
        
        int i = 1;
        Node *prev = Head;
        while (i < pos - 1)
        {
            prev = prev->next;
            i++;
        }
        Node *cur = prev->next;
        prev->next = NULL;
       
        Tail = prev;
       delete cur;
       return ;
    }
    
    
        int i = 1;
        Node *prev = Head;
        while (i < pos -1)
        {
            prev = prev->next;
            i++;
        }
        Node *cur = prev->next;
        
     
        prev->next = cur->next;
        delete cur;
    return;

}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    // int n,data;
    // cout<<"Enter number of element insert in LL:- ";
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<"Enter "<<i+1<<" element :- ";
    //     cin>>data;
    //     insertElement(start,data);
    // }

    insertElementAtHead(head, tail, 10);
    insertElementAtHead(head, tail, 20);
    insertElementAtHead(head, tail, 30);
    insertElementAtTail(tail, head, 40);
    insertElementAtTail(tail, head, 50);
    insertElementAtTail(tail, head, 60);
    // insertAtPosition(0,head,tail,100);
    // insertAtPosition(0,head,tail,100);
    insertAtPosition(0, head, tail, 100);
    printData(head);
    deleteNode(1, head, tail) ;
    deleteNode(length(head), head, tail) ;
    deleteNode(2, head, tail) ;
    // cout<<"Deleted Item :- "<<deleteNode(3,head,tail)<<endl;
    printData(head);
    return 0;
}
