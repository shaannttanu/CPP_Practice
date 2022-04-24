#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void slidingWindowMaximum(vector<int> v1,vector<int> nge,int k){

    for(int i=0;i<=v1.size()-k;i++){

        int j=i;

        while(nge[j]<i+k){
            j=nge[j];
        }
        cout<<v1[j]<<" ";
    }
}

int main()
{
    vector<int> v1{2,9,3,8,1,7,12,6,14,4,32,0,7,19,8,12,6};
    vector<int> nge(v1.size());
    stack<int> st;

    nge[v1.size()-1]=v1.size();
    st.push(v1.size()-1);

    for(int i=v1.size()-2;i>=0;i--){

        while(!st.empty() and v1[i]>=v1[st.top()]){
            st.pop();
        }

        if(st.empty()){
            nge[i]=v1.size();
        }
        else{
            nge[i]=st.top();
        }
        st.push(i);
    }
    slidingWindowMaximum(v1,nge,4);
    return 0;
}