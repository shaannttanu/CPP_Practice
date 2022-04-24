#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

//Q-> print element occuring maximum times ,in case of a tie print lexographically smaller.
//    "john" and "johnny" both occur 4 times but john occurs first in dictionary so print john

int main()
{
    vector<string> votes{"john","johnny","jackie","johnny","john","jackie","jamie","jamie","john","johnny","jamie","johnny","john"};

    unordered_map<string,int> mp;

    for(int i=0;i<votes.size();i++){
        mp[votes[i]]++;
    }
    int maxVote=INT32_MIN;
    string name="";

    for(auto i=mp.begin();i!=mp.end();i++){

        string key=i->first;
        int value=i->second;

        if(value>maxVote){
            maxVote=value;
            name=key;
        }
        else if(value==maxVote){
            if(name>key){
                name=key;
            }
        }
    }
    cout<<name;
    return 0;
}