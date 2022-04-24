#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
    string str="46+2/5*7+";
    stack<int> st;
    int op1,op2;

    for(int i=0;i<str.size();i++){
        char ch=str[i];

        if(ch>='1' && ch<='9'){
            st.push(ch-'0');
        }
        else if(ch=='+'){
            op2=st.top();
            st.pop();
            op1=st.top();
            st.pop();
            st.push(op1+op2);
        }   
        else if(ch=='-'){
            op2=st.top();
            st.pop();
            op1=st.top();
            st.pop();
            st.push(op1-op2);
        }
        else if(ch=='*'){
            op2=st.top();
            st.pop();
            op1=st.top();
            st.pop();
            st.push(op1*op2);
        }
        else if(ch=='/'){
            op2=st.top();
            st.pop();
            op1=st.top();
            st.pop();
            st.push(op1/op2);
        }
    }
    cout<<st.top();
    return 0;
}