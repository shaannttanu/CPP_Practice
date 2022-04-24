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

static int tilt=0;  //Variable that gives value of tilt.

int Tilt(BinaryTree *root){

    if(root==NULL){
        return 0;
    }

    int ls=Tilt(root->left);    //sum of left subtree
    int rs=Tilt(root->right);   //sum of right subtree
    int ts=ls+rs+root->data;    //

    tilt=abs(ls-rs);            // tilt = |(sum of left subtree)-(sum of right subtree)|

    return ts;                  /*Funtion returns sum NOT tilt as sum of the left and right subtree are needed to calculate the value of tilt.
                                */
                                
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
    
    
    return 0;
}