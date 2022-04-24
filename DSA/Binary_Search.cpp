#include<iostream>
using namespace std;

int binarySearch(int *arr,int size,int key){

    int start=0;
    int end=size-1;

    while(start<=end){
        
        int mid=start+(end-start)/2;   //--> PREVENTS INTEGER OVERFLOW!

        if(key==arr[mid]){
            return mid;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main()
{
    int arr[]={1,5,6,9,12,34,45,46,51,56}; //--> sorted array
    int len=sizeof(arr)/sizeof(arr[0]);

    cout<<binarySearch(arr,len,9);
    return 0;
}