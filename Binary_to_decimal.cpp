//Binary to decimal conversion : 
#include<iostream>
using namespace std;

int binary_to_decimal(int bnum){
    int sum=0,x=1,rem;
    while(bnum!=0){
        rem=bnum%10;
        sum+=rem*x;
        x*=2;
        bnum/=10;
    }
    return sum;
}

int main()
{   
    int bnum;
    cout<<"Enter a binary number : "<<endl;
    cin>>bnum;
    cout<<"DECIMAL : "<<binary_to_decimal(bnum)<<endl;
    return 0;
}