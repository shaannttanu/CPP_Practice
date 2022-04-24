#include<iostream>
using namespace std;

void solve(string inp,string out){

    if(inp.size()==0)
    {
        cout<<out<<endl;
        return;
    }

    if(isalpha(inp[0])){
        string op1=out;
        string op2=out;
        op1.push_back(tolower(inp[0]));
        op2.push_back(toupper(inp[0]));
        inp.erase(inp.begin()+0); 

        solve(inp,op1);       
        solve(inp,op2);       
    }
    else{
        string op=out;
        op.push_back(inp[0]);
        inp.erase(inp.begin()+0);
        solve(inp,op);
    }

}

int main()
{
    string str="a1b2";
    solve(str,"");
    return 0;
}