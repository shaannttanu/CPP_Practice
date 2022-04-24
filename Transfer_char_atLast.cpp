#include<iostream>
#include<string>
using namespace std;

int main()
{   
    int count=0;
    string str="mississippi";
    for(int i=0;i<str.size();i++){
        if(str.at(i)=='i'){
            str.erase(i,1);
            count++;
            i--;
        }
    }
    for(int i=0;i<count;i++){
        str.append("i");
    }
    cout<<str;
    return 0;
}