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

int mx(BinaryTree *root){
    if(root==NULL){
        return 0;
    }
    if(root->right!=NULL){
        return mx(root->right);
    }
    else{
        return root->data;
    }
}

BinaryTree *deletion(BinaryTree *root,int key){

    if(root==NULL){
        return NULL;
    }
    if(root->data>key){
        root->left=deletion(root->left,key);
    }
    else if(root->data<key){
        root->right=deletion(root->right,key);

    }
    else{
        if(root->left!=NULL && root->right!=NULL){
            int max_of_left_subtree = mx(root->left);           //When root has both the children then replace it with maximum of the left subtree and then delete that node from left subtree
            root->data=max_of_left_subtree;
            root->left=deletion(root->left,max_of_left_subtree);  //Deletes the maximum value from left subtree
            return root;    //returns root
        }
        else if(root->left!=NULL){
            return root->left;              //return root->rigth when node has only right child
        }
        else if(root->right!=NULL){
            return root->right;             //return root->rigth when node has only right child
        }
        else{
            return NULL;    //return NULL when root is a leaf node
        }
    }
    return root;
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
    inOrder(root);
    cout<<endl;
    BinaryTree *newRoot=deletion(root,10);
    inOrder(root);
    
    return 0;
}