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

int leastCommonAncestor(BinaryTree *root,int d1,int d2){

    if(root==NULL){
        return 0;
    }
    if(root->data< d1 && root->data<d2){
        return leastCommonAncestor(root->right,d1,d2);
    }
    else if(root->data>d1 && root->data>d2){
        return leastCommonAncestor(root->left,d1,d2);
    }
    else{
        return root->data;
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

    cout<<leastCommonAncestor(root,9,14);
    
    return 0;
}