#include<iostream>
using namespace std;

int fact(int num,int fact=1){
    for(int i=num;i>=1;i--){
        fact*=i;
    }
    return fact;
}

int main()
{
    int row,column;
    cout<<"Enter number of rows : "<<endl;
    cin>>row;
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}