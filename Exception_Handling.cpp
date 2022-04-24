#include<iostream>
using namespace std;

int main()
{
    float a,b;
    cout<<"Enter a,b : "<<endl;
    try{
        cin>>a>>b;
        if(b==0){
            throw b;
        }
    }
    catch(float num){
        cout<<"Division by 0 is not defined !"<<endl;
        return 0;
    }
    float result;
    result=a/b;
    cout<<"Answer : "<<result<<endl;
    return 0;
}