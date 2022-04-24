#include<iostream>
#include<string>
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

bool isBal=true;
int isBalanced(BinaryTree *root){
    if(root==NULL){
        return 0;
    }
    bool isBal=true;
    int lh=isBalanced(root->left);
    int rh=isBalanced(root->right);
    int th=max(lh,rh)+1;

    int gap=abs(lh-rh);

    if(gap>1){
        isBal=false;
    }
    return th;
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

    int ans=isBalanced(root);
    cout<<isBal;
    return 0;
}