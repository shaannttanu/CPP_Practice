#include<iostream>
using namespace std;

int main()
{
    int m,n,p;
    cout<<"Enter rows and columns of first matrix : "<<endl;
    cin>>m>>n;
    cout<<"Enter rows and columns of second matrix : "<<endl;
    cin>>n>>p;
    int mat1[m][n],mat2[n][p];
    cout<<"Enter first matrix : "<<endl;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter Second matrix : "<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            cin>>mat2[i][j];
        }
    }
    //Multiplication : 
    int mat3[m][p];

    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            mat3[i][j]=0;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            for(int k=0;k<n;k++){
                mat3[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    //Printing matrix after multiplication : 
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
           cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}