#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={1,2,3,1,2,3,4,5,5,4,1,2,3,3,2,1};
    int len=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+len);
    int count=0;
    for(int i=0;i<len;){
        if(arr[i]==arr[i+1])
        {
            i+=2;
            count++;
        }
        else{
            i++;
        }
    }
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<count;
    return 0;
}