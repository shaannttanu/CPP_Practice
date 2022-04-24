#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,8,-17,1,2};
    int len=sizeof(arr)/sizeof(arr[0]);

    int currentMax=arr[0],overallMax=arr[0];
    int mx;
    for(int i=1;i<len;i++){
        currentMax=max(arr[i],currentMax+arr[i]);
        overallMax=max(currentMax,overallMax);
    }
    cout<<overallMax;
    return 0;
}