#include<iostream>
#include<stack>
using namespace std;

//Deleting Middle element of stack : 

void solve(stack<int> &st,int k){

    if(k==1){
        st.pop();
        return;
    }

    int val=st.top();
    st.pop();
    solve(st,k-1);
    st.push(val);

}

void delMid(stack<int> &st,int size){

    if(size==0)
        return;
    
    int k=(size/2)+1;
    solve(st,k);

}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    delMid(st,st.size());

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}