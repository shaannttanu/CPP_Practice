#include<iostream>
#include<queue>

using namespace std;

int main()
{
    int arr[]={5,6,7,8,9};
    int x=7;  //-->the number from which closest numbers are to be found
    int k=3;  //-->how many closest numbers to be found

    priority_queue<pair<int,int>> mxh;  //-->max heap formation

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        mxh.push(make_pair(abs(x-arr[i]),arr[i]));

        if(mxh.size()>k){
            mxh.pop();
        }
    }

    while(!mxh.empty()){
        cout<<mxh.top().second<<" ";
        mxh.pop();
    }
    return 0;
}