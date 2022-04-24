#include<iostream>
using namespace std;

void waveSort(int * arr,int len){

    for(int i=1;i<len;i+=2){
        if(arr[i]>arr[i-1]){
            swap(arr[i],arr[i-1]);
        }

        if(arr[i]>arr[i+1] && i<=len-2){
            swap(arr[i],arr[i+1]);
        }
    } 
}

int main()
{
    int arr[]={1,3,4,7,5,6};
    int len=sizeof(arr)/sizeof(arr[0]);

    waveSort(arr,len);

    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}