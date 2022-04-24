#include<vector>
#include<iostream>
using namespace std;

void inserter(vector<int> &v,int temp){

    if(v.size()==0 || v[v.size()-1]<=temp)
        {v.push_back(temp);
        return;}

    int val=v[v.size()-1];
    v.pop_back();
    inserter(v,temp);
    v.push_back(val);
}

void sorter(vector<int> &v){

    if(v.size()==1)
        return;

    int temp=v[v.size()-1];
    v.pop_back();
    sorter(v);
    inserter(v,temp);

}

int main()
{
    vector<int> v={5,3,4,8};
    sorter(v);

    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}