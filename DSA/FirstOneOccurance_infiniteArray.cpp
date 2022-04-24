#include<iostream>
using namespace std;

BinarySearch(int arr[],int size,int low,int high,int key=1){
    
    int res;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key)
            {res=mid;
            high=mid-1;}

        else if(arr[mid]>key){
            high=mid-1;

        }
        else{
            low=mid+1;
        }
    }
    return res;
}

int firstOne(int arr[],int size,int key=1){

    int low=0;
    int high=1;

    while(arr[high]!=1){
        low=high;
        high*=2;
    }

    int index=BinarySearch(arr,size,low,high);
    return index;
}

int main()
{
    int infArr[]={0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};

    cout<<firstOne(infArr,sizeof(infArr)/sizeof(infArr[0]));
    cout<<endl<<sizeof(infArr)/sizeof(infArr[0]);
    
    return 0;
}
