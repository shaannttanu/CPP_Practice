#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int val):data(val),next(NULL){}
};

int searchLL(Node *head,int key)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}

void insertAtBeginning(Node * &head,int val){
    Node *node=new Node(val);
    node->next=head;
    head=node;
}

void insertAtTail(Node* &head,int data)
{
    Node *node=new Node(data);
    if(head==NULL)
    {
        head=node;
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
    cout<<"NULL";
}

int numberOfElements(Node *head)
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

void  deleteAtBeginning(Node * &head){
    if(head==NULL)
    {
        cout<<"EMPTY!!!"<<endl;
        return;
    }
    Node *temp=head;
    head=head->next;
    delete temp;
}

void  deleteAtTail(Node * head){
    if(head==NULL)
    {
        cout<<"EMPTY!!!"<<endl;
        return;
    }
    Node *temp1=head;
    Node *temp2=head->next;
    while(temp2->next!=NULL){
        temp1=temp1->next;
        temp2=temp2->next;
    }
    temp1->next=NULL;
    delete temp2;
}

void deleteUsingValue(Node *head,int val){
    if(head==NULL)
    {
        cout<<"EMPTY!"<<endl;
        return;
    }
    if(head->next==NULL){
        deleteAtBeginning(head);
        return;
    }

    Node *temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    Node *todelete=temp;
    temp->next=temp->next->next;
    delete todelete;
}

int main()
{
    Node *head=NULL;
    int getval;
    insertAtBeginning(head,1000);
    insertAtTail(head,29);
    insertAtTail(head,37);
    insertAtTail(head,15);
    // deleteAtBeginning(head);
    // deleteAtTail(head);
    // deleteUsingValue(head,37);
    display(head);
    cout<<endl<<searchLL(head,10000);
    return 0;
}