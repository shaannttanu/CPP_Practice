#include<iostream>
using namespace std;

int LastOcc(int *arr,int index,int key){

    if(index==10){
        return -1;
    }    
    int lastOcc=LastOcc(arr,index+1,key);
    if(lastOcc==-1){
        if(arr[index]==key){
            return index;
        }
        else{
            return -1;
        }
    }
    else{
        return lastOcc;
    }
}

int main()
{   
    int arr[]={2,7,1,7,8,9,0,2,7,1};
    cout<<LastOcc(arr,0,7);
    return 0;
}