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

int levelSum(BinaryTree *root,int K){

    if(root==NULL){
        return -1;
    }
    queue<BinaryTree*> q1;
    q1.push(root);

    int sum=0,level=0;
    while(!q1.empty()){

        int count=q1.size();
        for(int i=0;i<count;i++){
            BinaryTree* node=q1.front();
            q1.pop();

            if(level==K){
                sum+=node->data;
            }
            if(node->left!=NULL){
                q1.push(node->left);
            }
            if(node->right!=NULL){
                q1.push(node->right);
            }
        }
        level++;
    }
    return sum;

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

    cout<<levelSum(root,1);
    return 0;
}