#include<iostream>
#include<string.h>
using namespace std;

int main()
{   
    int size;
    bool flag=true;
    cout<<"Enter size of string : ";
    cin>>size;
    char str[size+1];
    cout<<"Enter string : "<<endl;
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=str[size-i-1]){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}