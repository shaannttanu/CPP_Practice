#include<iostream>
using namespace std;

/*
address of next element = current address + (i* size of datatype);
                                            i=1,2,3,4,5.......
*/

int main()
{
    cout<<"Enter size : "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int *ptr=arr;
    for(int i=0;i<n;i++){
        cout<<"element "<<i+1<<": "<<*(ptr+i)<<endl;
    }
    return 0;
}