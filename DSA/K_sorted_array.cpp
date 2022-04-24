#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;


int main()
{
    int arr[]={6,5,3,2,8,10,9};
    priority_queue<int,vector<int>,greater<int>> minHeap;
    int len=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    for(int i=0;i<len;i++){
        minHeap.push(arr[i]);
        if(minHeap.size()>k){
            arr[i-k]=minHeap.top();
            minHeap.pop();
        }
    }

    for(int i=len-k;i<len;i++){
        arr[i]=minHeap.top();
        minHeap.pop();
    }

    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}