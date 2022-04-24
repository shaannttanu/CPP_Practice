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

Node *reversalIterative(Node *head){
    Node *prev=NULL;
    Node *curr=head;
    Node *nxt;
    while(curr!=NULL){
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    return prev;
}

Node *reversalRecursive(Node * &head){
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node *newhead=reversalRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
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
void displayReverse(Node *head)
{
    if(head==NULL){
        return;
    }
    displayReverse(head->next);
    cout<<head->data<<"->";
}
int main()
{
    Node *head=NULL;
    InsertAtBeginning(head,1000);
    InsertAtTail(head,29);
    InsertAtTail(head,37);
    InsertAtTail(head,15);
    display(head);
    Node *newhead=reversalRecursive(head);
    display(newhead);
    // displayReverse(head);
    // cout<<"NULL";
    // Node *newhead=reversal(head);
    // display(newhead);
    return 0;
}