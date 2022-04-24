#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

//Q-> find all the  elements occuring only once in given array : 

int main()
{
    int arr[]={7,4,1,2,1,3,6,7,2,6};
    int len=sizeof(arr)/sizeof(arr[0]);

    unordered_map<int,int> mp;

    for(int i=0;i<len;i++){
        mp[arr[i]]++;
    }

    cout<<endl<<"ALL THE ARRAY ELEMENTS OCCURING ONLY ONCE : "<<endl;

    for(auto i=mp.begin();i!=mp.end();i++){
        if(i->second==1){
            cout<<i->first<<" ";
        }
    }
    return 0;
}