#include<iostream>
using namespace std;

int sum(int ,int);     //PROTOTYPE
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b);       //CALLING/INVOKATION
    return 0;
}
int sum(int a,int b){     //DEFINITION
    return a+b;
}