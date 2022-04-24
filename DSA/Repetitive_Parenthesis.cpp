#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<char> st;
    string str="((a+b))";
    bool ans=false;

    for(int i=0;i<str.size();i++){
        char ch=str[i];
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='1' && ch<='9')){
            st.push(ch);
        }
        else if(ch=='('){
            st.push(ch);
        }
        else if(ch==')'){
            if(st.top()!='('){
                while(st.top()!='(' && !st.empty()){
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