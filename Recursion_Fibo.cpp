#include<iostream>
using namespace std;

int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}

int main()
{
    int n;
    cout<<"Enter a number to print that term of fibonacci series : "<<endl;
    cin>>n;
    cout<<"Term is : "<<fibo(n);
    return 0;
}