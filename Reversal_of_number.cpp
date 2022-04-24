#include<iostream>
using namespace std;

int main()
{
    int num,rev=0,rem;
    cout<<"ENTER NUMBER : "<<endl;
    cin>>num;
    int n=num;
    while(num>0){
        rem=num%10;
        rev=(rev*10)+rem;
        num/=10;
    }
    if(n==rev){
        cout<<"Pallindrom!"<<endl;
    }
    else{
        cout<<"NO!"<<endl;
    }
    return 0;
}