#include<iostream>
#include<unordered_map>
using namespace std;

int findSum(string str)
    {
    	int sum=0;
    	int num=0;
    	for(int i=0;i<str.size();i++){
    	    
    	    if(str[i]>='0' && str[i]<='9'){
    	        num=num*10+str[i]-'0';
    	    }
    	    else{
    	        sum+=num;
    	        num=0;
    	    }
    	}
    	return sum+num;
    	
    }

int main()
{
    cout<<findSum("1abc23");
    return 0;
}