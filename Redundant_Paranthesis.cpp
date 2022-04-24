#include<iostream>
#include<string>
#include<stack>
using namespace std;
//REDUNDANT PARANTHESIS Problem
int main()
{
    string str="(a+b)";
    stack<char> st;
    bool ans=false;
    for(int i=0;i<str.size();i++){
        if(str[i]=='(' or str[i]=='+' or str[i]=='-' or str[i]=='*' or str[i]=='/'){
            st.push(str[i]);
        }
        else if(str[i]==')'){
            if(st.top()!='('){
                while(!st.top()=='('){
                    st.pop();
                }
                st.pop();
            }
            else{
                ans=true;
            }
        }
    }
    cout<<ans;
    return 0;
}