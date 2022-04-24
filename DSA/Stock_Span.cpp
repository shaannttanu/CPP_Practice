#include<iostream>
#include<stack>
using namespace std;

int * span(int *arr,int size){
    stack<int> st;
    int *ans=new int[size];

    st.push(0);
    ans[0]=1;

    for(int i=1;i<size;i++){
        while(!st.empty() and arr[i]>arr[st.top()]){
            st.pop();
        }
        if(st.empty()){
            ans[i]=i+1;
        }
        else{
            ans[i]=i-st.top();
        }
        st.push(i);
    }

    return ans;
}

int main()
{
    stack<int> st;
    int arr[]={2,5,9,3,1,12,6,8,7};
    int len=sizeof(arr)/sizeof(arr[0]);

    int *spanArr=span(arr,len);

    for(int i=0;i<len;i++){
        cout<<"Span of "<<arr[i]<<" : "<<spanArr[i]<<endl;
    }
    return 0;
}