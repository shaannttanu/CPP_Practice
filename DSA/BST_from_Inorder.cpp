#include<iostream>
using namespace std;

class BST
{
    public:
        int data;
        BST *left,*right;

        BST(int data){
            this->data=data;
            left=right=NULL;
        }
};

BST *constructBST(int inorder[],int start,int end){

    if(start>end){
        return NULL;
    }
    int mid=(start+end)/2;

    BST *node=new BST(inorder[mid]);

    node->left=constructBST(inorder,start,mid-1);
    node->right=constructBST(inorder,mid+1,end);

    return node;
}

void inOrder(BST *root){
    if(root!=NULL){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

int main()
{
    int inorder[]={6,8,9,10,12,14};
    BST *root=constructBST(inorder,0,5);
    inOrder(root);
    return 0;
}