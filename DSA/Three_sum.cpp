#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={12,3,7,1,6,9};
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter target : "<<endl;
    int target;
    cin>>target;
    bool Ans=false;

    sort(arr,arr+len);

    for(int i=0;i<len;i++){
        int low=i+1,high=len-1;
        while(low<high){
            int ans=arr[low]+arr[high]+arr[i];
            if(ans==target){
                Ans=true;
                break;
            }
            else if(ans>target){
                high-=1;
            }
            else{
                low+=1;
            }
        }
    }
    if(Ans==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}