#include<bits/stdc++.h>
using namespace std;

//Sort a stack

void inserter(stack<int> &st,int temp){

    if(st.size()==0 || st.top()>=temp)
    {
        st.push(temp);
        return;
    }

    int val=st.top();
    st.pop();
    inserter(st,temp);
    st.push(val);

}

void sorter(stack<int> &st){

    if(st.size()==1)
        return;

    int temp=st.top();
    st.pop();
    sorter(st);
    inserter(st,temp);

}

int main()
{
    stack<int> st;
    st.push(23);
    st.push(17);
    st.push(11);
    st.push(42);

    sorter(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}