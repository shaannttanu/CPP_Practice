#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num,sum=0,rem,n;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    n=num;
    while(num!=0){
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num/=10;
    }
    if(n==sum){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}