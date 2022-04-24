#include<iostream>
using namespace std;

int FirstOcc(int *arr,int index,int key){

    if(index==10){
        return -1;
    }
    int firstOcc=FirstOcc(arr,index+1,key);
    if(arr[index]==key){
        return index;
    }
    else{
        return firstOcc;
    }

}

int main()
{   
    int arr[]={2,7,1,7,8,9,0,2,7,1};
    cout<<FirstOcc(arr,0,100);
    return 0;
}