#include<iostream>
#include<cmath>
using namespace std;

void seiveOfEratosthenes(int num){

    int arr[num+1]={0};
    for(int i=2;i<=sqrt(num);i++){
        if(arr[i]==0){
            for(int j=2*i;j<num+1;j+=i){
                arr[j]=1;
            }
        }
    }
    for(int i=2;i<num+1;i++){
        if(arr[i]==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    int num1;
    cout<<"Enter a number to get all prime numbers  : "<<endl;
    cin>>num1;

    seiveOfEratosthenes(num1);

    return 0;
}