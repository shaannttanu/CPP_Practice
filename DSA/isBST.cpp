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

class BST{                //PAIR METHOD FOR SOLVING 
    public:
        bool isBST;
        int mx,mn;
};

BST isBST(BinaryTree *root){

    if(root==NULL){
        BST obj=BST();
        obj.mx=INT32_MIN;
        obj.mn=INT32_MAX;
        obj.isBST=true;
        return obj;
    }
    BST lt=isBST(root->left);
    BST rt=isBST(root->right);

    BST myobj=BST();
    myobj.isBST= lt.isBST && rt.isBST && (root->data>lt.mx && root->data<rt.mn);
    myobj.mx=max(root->data,max(lt.mx,rt.mx));
    myobj.mn=min(root->data,min(lt.mn,rt.mn));

    return myobj;
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
    BinaryTree *node1=new BinaryTree(6);
    BinaryTree *node2=new BinaryTree(11);
    BinaryTree *node3=new BinaryTree(4);
    BinaryTree *node4=new BinaryTree(7);
    BinaryTree *node5=new BinaryTree(14);

    root->left=node1;
    root->right=node2;

    node1->left=node3;
    node1->right=node4;

    node2->right=node5;

    inOrder(root);

    BST ans=isBST(root);
    cout<<endl<<ans.isBST;
    return 0;
}