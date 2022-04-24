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

// O(n^2) Solution : 

// int height(BinaryTree *root){

//     if(root==NULL){
//         return -1;
//     }
//     int lh=height(root->left);
//     int rh=height(root->right);
//     int th=max(lh,rh)+1;
//     return th;

// }

// int diameter(BinaryTree *root){
//     if(root==NULL){
//         return 0;
//     }
//     int ld=diameter(root->left);
//     int rd=diameter(root->right);
//     int f=height(root->left)+height(root->right)+2;
//     int total=max(max(ld,rd),f);
//     return total;
// }

//O(n) Solution : 

// class Diameter{
//     public:
//         int height;
//         int diameter;
// };

// Diameter getDiameter(BinaryTree *root){
//     if(root==NULL){
//         Diameter obj;
//         obj.diameter=0;
//         obj.height=-1;
//         return obj;
//     }

//     Diameter lt=getDiameter(root->left);
//     Diameter rt=getDiameter(root->right);

//     Diameter my_obj=Diameter();

//     my_obj.height=max(lt.height,rt.height)+1;
//     my_obj.diameter=max(max(lt.diameter,rt.diameter),lt.height+rt.height+2);

//     return my_obj;
// }

int main()
{
    BinaryTree *root=new BinaryTree(2);
    BinaryTree *node1=new BinaryTree(1);
    BinaryTree *node2=new BinaryTree(4);
    BinaryTree *node3=new BinaryTree(11);
    BinaryTree *node4=new BinaryTree(12);
    BinaryTree *node5=new BinaryTree(3);
    BinaryTree *node6=new BinaryTree(8);

    root->left=node1;
    root->right=node2;

    node1->left=node3;
    node1->right=node4;

    node2->right=node5;
    node3->left=node6;
    // Diameter obj=getDiameter(root);
    // cout<<obj.diameter;
    return 0;
}