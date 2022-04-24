#include<iostream>
#include<vector>
using namespace std;

void solve(int o,int c,string op,vector<string> &ans){

    if(o==0 && c==0){
        ans.push_back(op);
        return;
    }

    if(o!=0){

        string op1=op;
        op1.push_back('(');
        solve(o-1,c,op1,ans);
    }

    if(c>o){
        string op2=op;
        op2.push_back(')');
        solve(o,c-1,op2,ans);
    }
    return;

}

vector<string> balancedParanthesis(int num){

    vector<string> ans;

    int o=num;
    int c=num;
    string op="";

    solve(o,c,op,ans);
    return ans;

}

int main()
{
    balancedParanthesis(3);
    return 0;
}