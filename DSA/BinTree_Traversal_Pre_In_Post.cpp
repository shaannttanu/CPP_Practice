#include<iostream>
using namespace std;

class BinaryTree{
    
    public:
        int data;
        BinaryTree *left;
        BinaryTree *right;


        BinaryTree(int data){
            this->data=data;
            left=NULL;
            right=NULL;
        }
};

void preorder(BinaryTree *root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(BinaryTree *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

void postorder(BinaryTree *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

int main()
{
    BinaryTree *root=new BinaryTree(2);
    BinaryTree *node1=new BinaryTree(1);
    BinaryTree *node2=new BinaryTree(4);
    BinaryTree *node3=new BinaryTree(11);
    BinaryTree *node4=new BinaryTree(12);
    BinaryTree *node5=new BinaryTree(3);

    root->left=node1;
    root->right=node2;

    node1->left=node3;
    node1->right=node4;

    node2->right=node5;

    cout<<"PreOrder Traversal : ";
    preorder(root);
    cout<<endl;
    cout<<"InOrder Traversal : ";
    inorder(root);
    cout<<endl;
    cout<<"PostOrder Traversal : ";
    postorder(root);
    cout<<endl;
    return 0;
}