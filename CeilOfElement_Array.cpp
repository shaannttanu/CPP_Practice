#include<iostream>
using namespace std;

int getCeil(int arr[],int size,int key){

    int low=0;
    int high=size-1;
    int res;

    while(low<=high){

        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            res=arr[mid];
            break;
        }
        else if(arr[mid]>key){
            res=arr[mid];
            high=mid-1;
        }
        else{
            
            low=mid+1;
        }
    }
    return res;

}

int main()
{
    int arr[]={1,2,3,4,8,10,10,12,14};
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<getCeil(arr,len,13);
    return 0;
}