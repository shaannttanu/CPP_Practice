#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

vector<int> ans;

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

void kLevelsDown(BinaryTree *root,int k){

    if(root==NULL || k<0){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
    }
    kLevelsDown(root->left,k-1);
    kLevelsDown(root->right,k-1);
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

    kLevelsDown(root,1);
    return 0;
}