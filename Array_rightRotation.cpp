#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    vector<int> v{1,2,3,4,5};
    vector<int> ans;

    cout<<"Enter no. of rotations (<5) : ";
    int displacement;
    cin>>displacement;

    int pos=v.size()-displacement;

    for(int i=pos;i<v.size();i++){
        ans.push_back(v[i]);
    }
    for(int i=0;i<=pos-1;i++){
        ans.push_back(v[i]);
    }

    display(ans);
    return 0;
}