//How to create Node And Print Data

#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int data;
   Node *next;

   Node(){
    this->data=-1;
    this->next=NULL;

   }
   Node(int data){
    this->data=data;
    this->next=NULL;
   }
};

void print(Node*node){
    while(node!=NULL){
    cout<<node->data<<"    ";
    node=node->next;
    }
    cout<<endl;
}

int main()
{
    Node* First=new Node(4);
    Node* Secoond=new Node(5);
    Node* Thired=new Node(6);
    Node* Fourth=new Node(7);
    Node* Fifth=new Node(8);
    Node* Sixth=new Node(9);

    First->next=Secoond;
    Secoond->next=Thired;
    Thired->next=Fourth;
    Fourth->next=Fifth;
    Fifth->next=Sixth;
    print(Sixth);
    return 0;
}