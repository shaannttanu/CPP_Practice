#include<iostream>
using namespace std;

int firstOccurance(int *arr,int size,int key){
    int low=0;
    int high=size-1;
    int result=-1;
    while(low<=high){

        int mid=low+(high-low)/2;   //--> PREVENTS INTEGER OVERFLOW!

        if(arr[mid]==key){
            result=mid;
            high=mid-1;
        }
        else if(key>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return result;
}

int main()
{
    int arr[]={1,2,3,10,10,10,10,12,13,15,15,16};
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<firstOccurance(arr,len,10);
    return 0;
}