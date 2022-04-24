#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> relativeSort(int *arr1,int n,int *arr2,int m){

    vector<int> ans;
    map<int,int> mp;

    for(int i=0;i<n;i++)
        mp[arr1[i]]++;

    for(int i=0;i<m;i++){

        if(mp.find(arr2[i])!=mp.end()){
            auto iter=mp.find(arr2[i]);
            int count=iter->second;
            vector<int> v(count,arr2[i]);  /*Alternate Method of insertion without using loops*/
            ans.insert(ans.end(),v.begin(),v.end());
            mp.erase(arr2[i]);
        }

    }

    for(auto x=mp.begin();x!=mp.end();x++){
        int count=x->second;
        vector<int> v(count,x->first); 
        ans.insert(ans.end(),v.begin(),v.end());
    }

    return ans;
}

int main()
{
    int a1[]={2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    int len1=sizeof(a1)/sizeof(a1[0]);
    int a2[]={2, 1, 8, 3};
    int len2=sizeof(a2)/sizeof(a2[0]);

    vector<int> ans=relativeSort(a1,len1,a2,len2);

    for(auto x:ans)
        cout<<x<<" ";

    return 0;
}