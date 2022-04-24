#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

int Priority(char ch){
    if(ch=='^'){
        return 3;
    }
    else if(ch=='*' || ch=='/'){
        return 2;
    }
    else if(ch=='+' || ch=='-'){
        return 1;
    }
    else{
        return -1;
    }
}

string infixToPostfix(string str){
    stack<char> st;
    string answer="";

    for(int i=0;i<str.size();i++){
        char ch=str[i];

        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='1' && ch<='9')){
            answer+=ch;
        }

        else if(ch=='('){
            st.push(ch);
        }
        else if(ch==')'){
            while(st.top()!='('){
                answer+=st.top();
                st.pop();
            }
            if(!st.empty())
            {
                st.pop();
            }
        }
        else{
            while(!st.empty() && Priority(ch)<=Priority(st.top())){
                answer+=st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while(!st.empty())
    {
        answer+=st.top();
        st.pop();
    }
    return answer;
}

string infixToPrefix(string str){
    reverse(str.begin(),str.end());

    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='(')
        {
            str[i]=')';
        }
        else if(str[i]==')'){
            str[i]='(';
        }
    }

    string postfix=infixToPostfix(str);
    reverse(postfix.begin(),postfix.end());
    return postfix;
}

int main()
{
    string str="(A+B)*(C+D)";
    string postfix=infixToPostfix(str);
    cout<<postfix<<endl;
    string prefix=infixToPrefix(str);
    cout<<prefix<<endl;
    return 0;
}