#include<iostream>
using namespace std;

int power(int n,int p){
    if(p==1){
        return n;
    }
    return n*power(n,p-1);
}
int main()
{
    int n,p;
    cout<<"Enter number & power : "<<endl;
    cin>>n>>p;
    cout<<"n raised to power p: "<<power(n,p);
    return 0;
}