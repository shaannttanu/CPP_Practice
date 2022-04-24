#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int * nextGreaterElememt(int *arr,int size)
{
    int *nge =new int[size];
    stack<int> st;

    st.push(arr[size-1]);
    nge[size-1]=-1;

    for(int i=size-2;i>=0;i--){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        if(st.empty()){
            nge[i]=-1;
        }
        else{
            nge[i]=st.top();
        }
        st.push(arr[i]);
    }
    return nge;
}

int main()
{
    int arr[]={2,5,9,3,1,12,6,8,7};
    int len=sizeof(arr)/sizeof(arr[0]);
    int *nge=nextGreaterElememt(arr,len);
    for(int i=0;i<len;i++)
    {
        cout<<"Next greater element to the right of "<<arr[i]<<" is "<<nge[i]<<endl;
    }
    return 0;
}