#include<bits/stdc++.h>
using namespace std;
//This problem(Record breaker problem) is from Google kickstart
int main()
{
    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;

    int a[n+1];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    a[n]=-1;
    int ans=0;
    int mx=-1;

    for(int i=0;i<n;i++){
        if((a[i]>mx)  && (a[i]>a[i+1])){
            ans++;
        }
        mx=max(a[i],mx);
    }
    cout<<endl<<endl<<ans;
    return 0;
}