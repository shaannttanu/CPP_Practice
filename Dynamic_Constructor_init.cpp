#include<iostream>
using namespace std;

class Bank{
    
    private:

        int principal;
        int year;
        float rate;
        float returnVal;

    public:

        Bank(){}
        Bank(int p,int y,int r);
        Bank(int p,int y,float r);
        void show(void);

};

Bank::Bank(int p,int y,int r){
    principal=p;
    year=y;
    rate=float(r)/100;
    returnVal=principal;
    for(int i=0;i<year;i++){
        returnVal+=float(returnVal*rate);
    }
}

Bank::Bank(int p,int y,float r){
    principal=p;
    year=y;
    rate=r;
    returnVal=principal;
    for(int i=0;i<year;i++){
        returnVal+=(returnVal*rate);
    }
}

void Bank::show(void){
    cout<<"Money after "<<year<<" year(s) : "<<returnVal<<endl;
    cout<<endl;
    cout<<"Money credited by interest : "<<returnVal-principal<<endl;
}

int main()
{
    Bank obj1,obj2;
    int p,r,t;
    float R;
    // cout<<"Enter p r(int) t : "<<endl;
    // cin>>p>>r>>t;
    // obj1=Bank(p,t,r);
    // obj1.show();

    cout<<"Enter p R(float) t : "<<endl;
    cin>>p>>R>>t;
    obj2=Bank(p,t,R);
    obj2.show();
    return 0;
}