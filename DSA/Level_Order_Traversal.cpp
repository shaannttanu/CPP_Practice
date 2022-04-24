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

void levelOrder(BinaryTree *root){
    queue<BinaryTree*> q1;
    q1.push(root);

    while(!q1.empty()){
        int count=q1.size();

        for(int i=0;i<count;i++){
            BinaryTree *node=q1.front();
            q1.pop();
            cout<<node->data<<" ";

            if(node->left!=NULL){
                q1.push(node->left);
            }
            if(node->right!=NULL){
                q1.push(node->right);
            }
        }
        cout<<endl;
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

    // levelOrder(root);
    cout<<sum(root);
    return 0;
}