#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int &b=a;
    b=30;
    int *ptr1;
    ptr1=&a;
    int *ptr2=&b;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    return 0;
}