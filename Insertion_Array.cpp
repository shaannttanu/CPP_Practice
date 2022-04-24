#include<iostream>
#include<vector>
using namespace std;

int main()
{
    cout<<"Enter size"<<endl;
    int n,element,position;
    cin>>n;
    int arr[n+1];
    cout<<"Enter elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array elements before insertion : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Enter element to insert in the array : "<<endl;
    cin>>element;
    cout<<"Enter the position : "<<endl;
    cin>>position;
    cout<<"Array elements after insertion : "<<endl;
    for(int i=n;i>=position;i--){
        arr[i+1]=arr[i];
    }
    arr[position]=element;
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}