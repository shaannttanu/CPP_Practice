#include<iostream>
using namespace std;

bool isPrime(int num){
    for(int j=2;j<num;j++){
        if(num%j==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int num1,num2;
    cout<<"Enter starting number of range : "<<endl;
    cin>>num1;
    cout<<"Enter ending number of range : "<<endl;
    cin>>num2;
    for(int i=num1;i<=num2;i++){
        if(isPrime(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}