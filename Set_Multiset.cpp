#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={12,3,9,6,34,25};
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter target : "<<endl;
    int target;
    cin>>target;

    sort(arr,arr+len);
    bool ans=false;
    for(int i=0;i<len;i++)
    {
        int low=i+1;
        int high=len-1;
        int current=arr[i]+arr[low]+arr[high];

        while(low<high){
            if(current==target){
                ans=true;
                break;
            }
            else if(current>target){
                high--;
            }
            else{
                low++;
            }
        }
    }
    if(ans){
        cout<<"Found!"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}