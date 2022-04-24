#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node *prev;
        Node(int val)
        {
            this->data=val;
            next=NULL;
            prev=NULL;
        }
};
void insertAtBeg(Node * &head,int data)
{
    Node *n=new Node(data);
    n->next=head;
    if(head!=NULL)
    {
        head->prev=n;
    }
    head=n;
}
void insertAtTail(Node * &head,int data)
{   
    Node *n=new Node(data);
    if(head==NULL)
    {
        insertAtBeg(head,data);
    }
    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void deleteAtBeg(Node *head)
{

}
void deletePos(Node *head,int pos)
{   
    if(pos==1){
        deleteAtBeg(head);
        return;
    }
    Node *temp=head;
    int i=0;
    while(i!=pos && temp!=NULL)
    {
        temp=temp->next;

    }
    if(temp->next!=NULL)
        temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    delete temp;
}
void display(Node *head)
{
    if(head==NULL)
    {
        return;
    }
    cout<<head->data<<" ";
    display(head->next);
}
int main()
{
    Node *head=NULL;
    insertAtTail(head,21);
    insertAtTail(head,27);
    display(head);
    return 0;
}