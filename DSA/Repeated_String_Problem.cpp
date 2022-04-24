#include<iostream>
#include<string>
using namespace std;

//HACKER RANK PROBLEM : 
int main()
{
    string str="aba";
    int n=10; //size upto which we want to calculate number of 'a' in the string . 
    int whole_string_occurance=n/str.size();
    int extra_part=n%str.size();
    int count1=0,count2=0;

    for(int i=0;i<str.size();i++){
        if(str[i]=='a'){
            count1++;
        }
    }
    for(int i=0;i<extra_part;i++){
        if(str[i]=='a'){
            count2++;
        }
    }
    int ans=(count1*whole_string_occurance)+count2;
    cout<<ans<<endl;
    return 0;
}