#include<bits/stdc++.h>
using namespace std;

bool Triplete(int a,int b,int c){
    int x,y;
    int maximum=max(a,max(b,c));        //built in-function to calculate maximum
        if(a==maximum){
            x=b;
            y=c;
        }
        else if(b==maximum){
            x=a;
            y=c;
        }
        else{
            x=a;
            y=b;
        }
        if(maximum*maximum==(x*x+y*y)){
            return true;
        }
        else{
            return false;
        }
}
int main()
{
    int a,b,c,m;
    cout<<"Enter a,b,c : "<<endl;
    cin>>a>>b>>c;
    if(Triplete(a,b,c)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}