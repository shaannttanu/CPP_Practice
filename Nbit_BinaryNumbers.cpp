#include<iostream>
#include<vector>
using namespace std;

void solve(int zero,int one,string op,vector<string> &ans,int num){

    if(num==0){
        ans.push_back(op);
        return;
    }

    string op1=op;
    op1.push_back('1');
    solve(zero,one+1,op1,ans,num-1);

    if(one>zero){

        string op2=op;
        op2.push_back('0');
        solve(zero+1,one,op2,ans,num-1);

    }

}

vector<string> nBit(int num){

    vector<string> ans;
    int one=0;
    int zero=0;
    string op="";
    solve(zero,one,op,ans,num);
    return ans;

}

int main()
{
    vector<string> ans=nBit(3);
    for(auto i:ans){
        cout<<i<<endl;
    }
    return 0;
}