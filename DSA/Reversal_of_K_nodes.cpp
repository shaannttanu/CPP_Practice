#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int val)
        {
            data=val;
            next=NULL;
        }
};
void InsertAtBeginning(Node * &head,int val)
{   
    Node *n=new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    n->next=head;
    head=n;
}
void InsertAtTail(Node *head,int val)
{   
    Node *n=new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
Node *reverseK(Node *&head,int k)
{
    int count=0;
    Node *prev=NULL;
    Node *current=head;
    Node *nxt;

    while(current!=NULL && count<k)
    {
        nxt=current->next;
        current->next=prev;
        prev=current;
        current=nxt;
        count++;
    }

    if(nxt!=NULL)
    {
        head->next=reverseK(nxt,k);
    }
    return prev;
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

int main()
{
    Node *head=NULL;
    InsertAtBeginning(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    InsertAtTail(head,6);
    display(head);
    Node *newhead=reverseK(head,2);
    display(newhead);
    return 0;
}