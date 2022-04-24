#include<iostream>
using namespace std;
int a=10;
int main()
{   
    int a=20;
    cout<<"LOCAL a : "<<a;
    cout<<endl;
    cout<<"GLOBAL a : "<<::a+5;
    return 0;
}