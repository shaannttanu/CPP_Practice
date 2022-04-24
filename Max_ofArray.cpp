#include<iostream>
using namespace std;

int maximum(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[]={1,2,3,11,4,5}; 
    cout<<maximum(arr,5);
    return 0;
}