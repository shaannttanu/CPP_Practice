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
Node* mergeLL(Node *head1,Node *head2)
{
    Node *dummy=new Node(-1);
    Node *ptr=dummy;
    Node *ptr1=head1;
    Node *ptr2=head2;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->data<ptr2->data)
        {
            ptr1=ptr->next;
            ptr->next=ptr1;
        }
        else
        {
            ptr->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr=ptr->next;
    }
    while(ptr1!=NULL)
    {
        ptr->next=ptr1;
        ptr=ptr->next;
        ptr1=ptr1->next;
    }
    while(ptr2!=NULL)
    {
        ptr->next=ptr2;
        ptr=ptr->next;
        ptr2=ptr2->next;
    }
    return dummy->next;
}
int main()
{
    Node *head1=NULL;
    Node *head2=NULL;
    insertAtTail(head1,1);
    insertAtTail(head1,3);
    insertAtTail(head1,7);
    insertAtTail(head2,5);
    insertAtTail(head2,0);
    insertAtTail(head2,11);
    Node *newhead=mergeLL(head1,head2);
    display(head1);
    display(head2);
    display(newhead);
    return 0;
}