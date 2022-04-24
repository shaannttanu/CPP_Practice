#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    if(size==0){
        return true;
    }
    if(arr[0]<arr[1] && isSorted(arr+1,size-1)){
        return true;
    }
    return false;
}

int main()
{
    int arr[]={1,2,3,4,5,6,1};
    if(isSorted(arr,6)){
        cout<<"Array is sorted!";
    }
    else{
        cout<<"Not Sorted";
    }
    return 0;
}