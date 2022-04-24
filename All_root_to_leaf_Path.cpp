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

void RootToLeafPath(BinaryTree *root,string path){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        cout<<path+to_string(root->data)<<" | ";
    }
    RootToLeafPath(root->left,path+to_string(root->data)+"->");
    RootToLeafPath(root->right,path+to_string(root->data)+"->");
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

    root->left=node1;
    root->right=node2;

    node1->left=node3;
    node1->right=node4;

    node2->right=node5;
    RootToLeafPath(root,"");
    return 0;
}