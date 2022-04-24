#include<iostream>
using namespace std;

bool sortedMatrixSearch(int mat[3][3],int m,int n,int key){

    int row=0;
    for(int rows=0;rows<m;rows++){
        if(mat[rows][0]==key)
            return true;
        else if(mat[rows][0]>key){
            row=rows-1;
            break;
        }
        else{
            row=rows;
        }
    }

    if(row>=0){
        for(int cols=0;cols<n;cols++){
            if(mat[row][cols]==key){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int mat[][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<sortedMatrixSearch(mat,3,3,5);
    return 0;
}