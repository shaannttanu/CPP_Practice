#include<iostream>
#include<unordered_set>
using namespace std;

//print all subsets : 
unordered_set<string> st;

void solve(string inp,string op){

    if(inp.size()==0){
        st.insert(op);
        return;
    }

    string op1=op;
    string op2=op;

    op2.insert(op2.end(),inp[0]);
    inp.erase(inp.begin()+0);
    solve(inp,op1);
    solve(inp,op2);


}

int main()
{
    string str="aab";
    solve(str," ");
    for(auto i=st.begin();i!=st.end();i++){
        cout<<*i<<endl;
    }
    return 0;
}