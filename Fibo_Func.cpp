#include<iostream>
using namespace std;

void fib(int num){
    int a=1,b=1;
    if(num==1){
        cout<<a<<endl;
    }
    else if(num==2){
        cout<<a<<" "<<b<<endl;
    }
    else{
        
        cout<<a<<" "<<b<<" ";
        for(int i=2;i<=num;i++){
            int c;
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }
    }
}

int main()
{   
    int num;
    cout<<"Enter the number of terms you want to print";
    cin>>num;
    if(num>=1){
        fib(num);
    }
    else{
        cout<<"Enter a valid number!";
    }
    return 0;
}