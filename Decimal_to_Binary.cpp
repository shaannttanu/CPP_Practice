#include<iostream>
using namespace std;

string binary(int num){
    string ans;
    while(num!=0){
        if(num%2==0){
            ans.insert(ans.begin(),'0');
            num/=2;
        }else{
            ans.insert(ans.begin(),'1');
            num/=2;
        }
    }
    return ans;
}

int main()
{   
    cout<<"Enter decimal number : "<<endl;
    int num;
    cin>>num;
    cout<<"Binary of "<<num<<" = "<<binary(num);
    return 0;
}