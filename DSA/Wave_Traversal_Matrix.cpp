#include<iostream>
using namespace std;

int main()
{
    int mat[3][4]={{11,12,13,14},{21,22,23,24},{31,32,33,34}};

    int row_start=0;
    int row_end=2;

    for(int column=0;column<4;column++){
        if(column%2==0){
            for(int row=row_start;row<=row_end;row++){
                cout<<mat[row][column]<<" ";
            }
        }
        else{
            for(int row=row_end;row>=row_start;row--){
                cout<<mat[row][column]<<" ";
            }
        }
    }
    return 0;
}