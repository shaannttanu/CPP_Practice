#include <iostream>
#include <string>
#include <stack>
using namespace std;

string reverser(string str)
{   
    string newWord="";
    stack<string> st;
    for(int i=0;i<str.length();i++)
    {
        string word="";
        while(str[i]!=' ' && i<str.length())
        {
            word+=str[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty())
    {
        newWord+=st.top();
        newWord+=" ";
        st.pop();
    }
    return newWord;
}

int main()
{
    string str = "how are you?";
    string newstr;
    newstr = reverser(str);
    cout << newstr;
    return 0;
}