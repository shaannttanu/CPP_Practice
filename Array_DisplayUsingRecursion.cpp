#include<iostream>
using namespace std;

int * AllOccurance(int *arr,int index,int key,int count,int size){
    if(index==size){
        return new int[count];
    }
    if(arr[index]==key){
        int *occurances=AllOccurance(arr,index+1,key,count+1,size);
        occurances[count]=index;
        return occurances;
    }
    else{
        int *occurances=AllOccurance(arr,index+1,key,count,size);
        return occurances;
    }

}

int main()
{
    int arr[]={1,2,3,1,2,3,1,2,3,4,5,3,2,1};
    int len=sizeof(arr)/sizeof(arr[0]);
    int *ans=AllOccurance(arr,0,1,0,len);
    
    for(int i=0;i<5;i++){
        cout<<*ans<<" ";
    }
    return 0;
}