#include<iostream>
using namespace std;

int main()
{
    int mat[3][3];
    cout<<"Enter elements : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(j<i){
                int temp=mat[i][j];
                mat[i][j]=mat[j][i];
                mat[j][i]=temp;
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}