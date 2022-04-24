#include<iostream>
#include<string>
using namespace std;

void reverse(string str){
    if(str.size()==0){
        return ;
    }
    reverse(str.substr(1));
    cout<<str[0];
}

int main()
{
    string str;
    cout<<"Enter a string : "<<endl;
    getline(cin,str);
    reverse(str);
    return 0;
}