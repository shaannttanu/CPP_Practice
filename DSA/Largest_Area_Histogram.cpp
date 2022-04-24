#include<bits/stdc++.h>
using namespace std;

vector<int> SmallestToRight(vector<int> v1){
    vector<int> ans(v1.size());

    stack<int> st;

    st.push(v1.size()-1);
    ans[v1.size()-1]=v1.size();

    for(int i=v1.size()-2;i>=0;i--){
        while(!st.empty() && v1[i]<v1[st.top()]){
            st.pop();
        }
        if(st.empty()){
            ans[i]=v1.size();
        }
        else{
            ans[i]=st.top();
        }
        st.push(i);
    }
    return ans;
}

vector<int> SmallestToLeft(vector<int> v1){
    vector<int> ans(v1.size());

    stack<int> st;

    st.push(0);
    ans[0]=-1;

    for(int i=1;i<v1.size();i++){
        while(!st.empty() && v1[i]<v1[st.top()]){
            st.pop();
        }
        if(st.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=st.top();
        }
        st.push(i);
    }
    return ans;
}

int main()
{
    vector<int> v1{6,2,5,4,5,1,6};
    
    vector<int> ub=SmallestToRight(v1);
    vector<int> lb=SmallestToLeft(v1);

    int maxArea=0;
    for(int i=0;i<v1.size();i++){
        int width=ub[i]-lb[i]-1;
        int area=width*v1[i];

        if(area>=maxArea){
            maxArea=area;
        }
    }

    cout<<maxArea;
    return 0;
}