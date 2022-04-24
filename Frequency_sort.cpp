#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int,int> mp;
    priority_queue<pair<int,int>> maxHeap;

    int arr[]={1,2,3,2,1,1,3,4,3,1,2,4};

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        mp[arr[i]]++;
    }

    for(auto i=mp.begin();i!=mp.end();i++){
        maxHeap.push(make_pair(i->second,i->first));
    }

    while(!maxHeap.empty()){
        int frequency=maxHeap.top().first;
        int number=maxHeap.top().second;

        for(int i=0;i<frequency;i++){
            cout<<number<<" ";
        }
        maxHeap.pop();
    }
    return 0;
}