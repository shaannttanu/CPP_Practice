#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mat[3][3]={{1,2,3},{7,3,2},{5,8,7}};

    for(int gap=0;gap<3;gap++){
        for(int i=0,j=gap;j<3;j++,i++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}