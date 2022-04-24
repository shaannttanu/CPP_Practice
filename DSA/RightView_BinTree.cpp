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

void rightView(BinaryTree *root){
    if(root==NULL){
        return;
    }
    queue<BinaryTree *> q1;
    q1.push(root);

    while(!q1.empty()){
        int count=q1.size();

        for(int i=0;i<count;i++){
            BinaryTree *node=q1.front();
            q1.pop();

            if(i==0){
                cout<<node->data<<" ";
            }
            // if(i==count-1){         ---> LEFT VIEW CONDITION 
            //     cout<<node->data<<" ";
            // }

            if(node->left!=NULL)
                q1.push(node->left);

            if(node->right!=NULL)
                q1.push(node->right);
        }
    }
    cout<<endl;
}

void sumReplacement(BinaryTree *root){
    
    if(root==NULL){
        return ;
    }

    sumReplacement(root->left);
    sumReplacement(root->right);

    if(root->left!=NULL){
        root->data = root->data + root->left->data;
    }
    if(root->right!=NULL){
        root->data = root->data + root->right->data;
    }
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

    levelOrder(root);    
    
    return 0;
}