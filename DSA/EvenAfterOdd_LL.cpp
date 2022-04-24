#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node(int val)
        {
            this->data=val;
            next=NULL;
        }
};
void insertAtBeginning(Node * &head,int val){
    Node *node=new Node(val);
    if(head==NULL){
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
    if(head==NULL)
    {
        return;
    }
    cout<<head->data<<" ";
    display(head->next);
}
void evenAfterOdd(Node *head)
{
    Node *even=head->next;
    Node *evenstart=head->next;
    Node *odd=head;
    while(even->next!=NULL && odd->next!=NULL)
    {
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenstart;
    if(odd->next!=NULL)
    {
        even->next=NULL;
    }
}
int main()
{
    Node *head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    evenAfterOdd(head);
    display(head);

    return 0;
}