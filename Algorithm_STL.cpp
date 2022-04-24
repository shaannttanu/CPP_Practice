#include<iostream>
#include<algorithm>
// #include<functional>
using namespace std;

int increment(int num){
    return num+1;
}

int main()
{
    int arr[]={2,3,2,2,2,4,6,1,13,11};
    int len=sizeof(arr)/sizeof(arr[0]);

    // transform(arr,arr+len,arr,increment);
    // reverse(arr,arr+len);

    // int mn=*min_element(arr,arr+len);
    // int mx=*max_element(arr,arr+len);
    // cout<<"MINUMUM  : "<<mn<<endl;
    // cout<<"MAXIMUM  : "<<mx<<endl;

    // int occ=binary_search(arr,arr+len,1000);
    // int first_occurance=*find(arr,arr+len,2);
  
    
    cout<<occ<<endl;
    for(int i=0;i<len;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}