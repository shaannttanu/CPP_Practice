#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

// Max heap works similar to stack

int main()
{
    priority_queue<int> max_heap;//Time complexity --> O(nlogk) better than sorting technique [O(nlogn)]

    int arr[]={34,53,12,67,89,91,3,14,15,19,24,52,13};
    int len=sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+len);   //Sorting the array

    cout<<"Enter the value of K to get Kth smallest element of the array : "<<endl;
    int k;
    cin>>k;

    for(int i=0;i<len;i++){
        max_heap.push(arr[i]);    //Pushing elements to max heap

        if(max_heap.size()>k){
            max_heap.pop();       //If the count becomes > k then pop the top element of max heap
        }
    }

    cout<<max_heap.top();
    return 0;
}