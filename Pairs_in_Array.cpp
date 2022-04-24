#include<iostream>
#include<algorithm>
using namespace std;

int pairs(int *arr,int size)
{   
    int pair_count=0;
    sort(arr,arr+size);       //first sorting the array.
    for(int i=0;i<size;)
    {
        if(arr[i]==arr[i+1])  
        {
            pair_count++;
            i+=2;             
        }
        else{
            i+=1;
        }
    }
    return pair_count;
}

int main()
{
    int arr[]={20,9,1,4,5,7,1,9,21,32,21,1,9,1,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+size);
    cout<<pairs(arr,size);
    return 0;
}