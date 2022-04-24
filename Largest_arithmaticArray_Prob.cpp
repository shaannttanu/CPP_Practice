#include<bits/stdc++.h>
using namespace std;
//PROBLEM FROM GOOGLE KICKSTART
int main()
{
    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int pd=arr[1]-arr[0];
    int current=2;
    int i=2;
    int mx=2;

    while(i<n){
        if(arr[i]-arr[i-1]==pd){
            current++;
        }
        else{
            pd=arr[i]-arr[i-1];
            current=2;
        }
        mx=max(mx,current);
        i++;
    }
    cout<<endl<<endl<<mx;
    return 0;
}