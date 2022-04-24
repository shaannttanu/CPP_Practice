#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>> min_heap;

    int arr[]={34,53,12,67,89,91,3,14,15,19,24,52,13};
    int len=sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+len);

    cout<<"Enter the value of K to get K largest elements of the array : "<<endl;
    int k;
    cin>>k;

    for(int i=0;i<len;i++){
        min_heap.push(arr[i]);

        if(min_heap.size()>k){
            min_heap.pop();
        }
    }

    cout<<k<<" largest elemets of min heap are : "<<endl;
    while(!min_heap.empty()){
        cout<<min_heap.top()<<" ";
        min_heap.pop();
    }
    return 0;
}