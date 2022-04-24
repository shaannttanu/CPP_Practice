#include<iostream>
#include<stack>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    string str="-+7*45+20";
    stack<int> st;
    int op1,op2;

    for(int i=str.size()-1;i>=0;i--){
        char ch=str[i];

        if(ch>='0' && ch<='9'){
            st.push(ch-'0');
        }
        else{
            op1=st.top();
            st.pop();
            op2=st.top();
            st.pop();

            switch (ch)
            {
            case '+':st.push(op1+op2);
                break;
            case '-':st.push(op1-op2);
                break;
            case '*':st.push(op1*op2);
                break;
            case '/':st.push(op1/op2);
                break;
            case '^':st.push(pow(op1,op2));
                break;
            default:
                break;
            }
        }
    }
    cout<<st.top();
    return 0;
}