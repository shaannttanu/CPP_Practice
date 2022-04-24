#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
    stack<char> st;
    string str="{7+3[6*7*(8/6)]+5}";
    for(int i=0;i<str.size();i++){
        if(str[i]=='{' || str[i]=='(' || str[i]=='['){
            st.push(str[i]);
        }
        else if(str[i]=='}'){
            if(st.top()=='{'){
                st.pop();
            }
            else{
                cout<<"NOT BALANCED!";
                return 0;
            }
        }
        else if(str[i]==')'){
            if(st.top()=='('){
                st.pop();
            }
            else{
                cout<<"NOT BALANCED!";
                return 0;
            }
        }
        else if(str[i]==']'){
            if(st.top()=='['){
                st.pop();
            }
            else{
                cout<<"NOT BALANCED!";
                return 0;
            }
        }
    }
    if(!st.empty()){
        cout<<"NOT BALANCED!"<<endl;
    }
    else{
        cout<<"BALANCED!"<<endl;
    }
    return 0;
}