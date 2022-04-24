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

void singleChild(BinaryTree *root){

    if(root==NULL){
        return;
    }

    if((root->left!=NULL && root->right==NULL) || (root->left==NULL && root->right!=NULL))
        cout<<root->data<<" ";

    singleChild(root->left);
    singleChild(root->right);

}

void inOrder(BinaryTree *root){
    if(root!=NULL){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

int main()
{
    BinaryTree *root=new BinaryTree(10);
    BinaryTree *node1=new BinaryTree(8);
    BinaryTree *node2=new BinaryTree(12);
    BinaryTree *node3=new BinaryTree(6);
    BinaryTree *node4=new BinaryTree(9);
    BinaryTree *node5=new BinaryTree(14);
    BinaryTree *node6=new BinaryTree(17);

    root->left=node1;
    root->right=node2;

    node1->left=node3;
    node1->right=node4;

    node2->right=node5;
    node5->right=node6;
    singleChild(root);
    return 0;
}