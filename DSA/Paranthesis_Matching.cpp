#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;
    string temp;
    int pushCount=0,popCount=0;
    string str="(((((((((((((((((((((((((((((((((((()))))))))))))))))))))))))))))))))))";
    for(int i=0;i<str.size();i++)
    {
        if(str.at(i)=='(')
        {   
            temp=to_string(str.at(i));
            s.push(temp);
            pushCount++;
        }
        else if(str.at(i)==')')
        {
            if(s.empty())
            {
                cout<<"NOT A BALANCED PARANTHESIS CASE !"<<endl;
                break;
            }
            else{
                s.pop();
                popCount++;
            }
        }
    }
    if(s.empty())
    {
        cout<<"BALANCED!"<<endl;
    }
    else{
        cout<<"NOT A BALANCED PARANTHESIS CASE !"<<endl;
    }
    cout<<"PUSH COUNT : "<<pushCount<<endl;
    cout<<"POP COUNT : "<<popCount<<endl;
    return 0;
}