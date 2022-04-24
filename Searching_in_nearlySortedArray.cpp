#include<iostream>
using namespace std;

int modifiedBinarySearch(int arr[],int size,int key){

    int low=0;
    int high=size-1;

    while(low<=high){

        int mid=low+(high-low)/2;

        if(arr[mid]==key)
            return mid;
        else if(arr[mid-1]==key && mid-1>=0)
            return mid-1;
        else if(arr[mid+1]==key && mid+1<=size-1)
            return mid+1;

        else if(arr[mid]>key)
            high=mid-2;
        else
            low=mid+2;
    }
    return -1;
}

int main()
{
    int arr[]={5,10,30,20,40};
    cout<<modifiedBinarySearch(arr,sizeof(arr)/sizeof(arr[0]),20);
    return 0;
}