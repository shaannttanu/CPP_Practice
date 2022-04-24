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
    int n,r,nCr;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    cout<<"Enter the value of r : "<<endl;
    cin>>r;
    nCr=fact(n)/(fact(n-r)*fact(r));
    cout<<endl;
    cout<<nCr;
    return 0;
}