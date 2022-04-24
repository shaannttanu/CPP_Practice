#include<iostream>
using namespace std;

int main()
{
    int arr[]={3,4,0,2,1};
    int ans[5];
    for(int i=0;i<5;i++){
        ans[arr[i]]=i;
    }
    for(int i=0;i<5;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}