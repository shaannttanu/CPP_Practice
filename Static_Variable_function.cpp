#include<iostream>
using namespace std;

void table(int a){
    static int num=0;
    num+=1;
    cout<<num*a<<endl;
}

int main()
{
    int a=5;
    for(int i=1;i<=10;i++){
        table(a);
    }
    return 0;
}