#include<iostream>
#include<queue>
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

void Inorder(BinaryTree *root){
    if(root!=NULL){
        Inorder(root->left);
        cout<<root->data<<" ";
        Inorder(root->right);
    }
}

int search(int inorder[],int val,int start,int end){
    for(int i=start;i<=end;i++){
        if(inorder[i]==val){
            return i;
        }
    }
    return -1;
}

BinaryTree * construction(int preoder[],int inorder[],int start,int end){
    
    if(start>end){
        return NULL;
    }

    static int index=0;
    int val=preoder[index];
    index++;

    BinaryTree *node=new BinaryTree(val);

    int pos=search(inorder,val,start,end);

    if(start==end){
        return node;
    }

    node->left=construction(preoder,inorder,start,pos-1);
    node->right=construction(preoder,inorder,pos+1,end);

    return node;
}

int main()
{
    int inorder[]={11,1,12,2,4,3};
    int preorder[]={2,1,11,12,4,3};

    BinaryTree *node=construction(preorder,inorder,0,5);
    Inorder(node);
    
    return 0;
}