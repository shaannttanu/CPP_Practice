#include<iostream>
#include<queue>
#include<cmath>
using namespace std;

int main()
{
    priority_queue<pair<int,pair<int,int>>> maxHeap;
    int arr[4][2]={{1,3},{-2,2},{5,8},{0,1}};
    int k=2;

    for(int i=0;i<4;i++){

        maxHeap.push(make_pair(arr[i][0]*arr[i][0]+arr[i][1]*arr[i][1],make_pair(arr[i][0],arr[i][1])));
        if(k<maxHeap.size()){
            maxHeap.pop();
        }
    }
    
    while(maxHeap.size()>0){

        int x=maxHeap.top().second.first;
        int y=maxHeap.top().second.second;
        cout<<x<<","<<y<<endl;
        maxHeap.pop();

    }
    return 0;
}