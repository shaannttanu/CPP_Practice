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

BinaryTree * searchBST(BinaryTree *root,int key){
    
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(root->data>key){
        return searchBST(root->left,key);
    }
    if(root->data<key){
        return searchBST(root->right,key);
    }
    return root;
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

    BinaryTree * ans=searchBST(root,10);
    if(ans==NULL)
    {
        cout<<"NOT FOUND!"<<endl;
    }
    else{
        cout<<"FOUND!"<<endl;
    }
    return 0;
}