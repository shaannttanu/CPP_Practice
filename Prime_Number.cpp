#include<iostream>
using namespace std;

int main()
{
    int num;
    bool flag=false;
    cout<<"Enter number : "<<endl;
    cin>>num;
    for(int i=2;i<num;i++){
        if(num%i==0){
            flag=true;
            break;
        }
    }
    if(flag==true){
        cout<<"NOT Prime";
    }
    else{
        cout<<"Prime";
    }
    return 0;
}