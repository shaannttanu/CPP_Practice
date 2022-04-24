#include<iostream>
#include<vector>
using namespace std;

vector<int> AllOccurance(int *arr,int index,int key,int count,int size){

    if(index==size){
        vector<int> v(count);
        return v;
    }

    if(arr[index]==key){
        vector<int> v1=AllOccurance(arr,index+1,key,count+1,size);
        v1[count]=index;
        return v1;
    }
    else{
        vector<int> v1=AllOccurance(arr,index+1,key,count,size);
        return v1;
    }

}

int main()
{
    int arr[]={1,2,3,2,1,3,4,3,3,3,4,5,1};
    vector<int> ans=AllOccurance(arr,0,3,0,sizeof(arr)/sizeof(arr[0]));

    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}