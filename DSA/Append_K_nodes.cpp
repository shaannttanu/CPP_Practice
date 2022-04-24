#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data=data;
            next=NULL;
        }
};
void insertAtBeginning(Node * &head,int val){
    Node *node=new Node(val);
    if(head==NULL)
    {
        head=node;
        return;
    }
    node->next=head;
    head=node;
}

void insertAtTail(Node* &head,int data)
{
    Node *node=new Node(data);
    if(head==NULL)
    {
        insertAtBeginning(head,data);
        return;
    }
    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=node;
}
void display(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int getLength(Node *head)
{
    Node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
}

Node *AppendKnodes(Node *head,int k){
    Node *newhead=NULL;
    Node *newtail=NULL;
    Node *tail=head;
    int count=1;
    int l=getLength(head);
    while(tail->next!=NULL)
    {
        if(l-k==count)
        {
            newtail=tail;
        }
        if(l-k+1==count)
        {
            newhead=tail;
        }
        count++;
        tail=tail->next;
    }
    newtail->next=NULL;
    tail->next=head;
    return newhead;
}

int main()
{
    Node *head=NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    insertAtTail(head,50);
    insertAtTail(head,60);
    display(head);
    Node *newhead=AppendKnodes(head,3);
    display(newhead);
    return 0;
}