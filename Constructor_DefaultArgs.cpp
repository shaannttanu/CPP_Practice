#include<iostream>
using namespace std;

class abc{
    private:
        int a,b;
    public:
        abc(int x=5){
            a=x;
            b=0;
        }
        void showdata(void);
};

void abc :: showdata(void){
    cout<<"a : "<<a<<" b: "<<b<<endl;
}

int main()
{
    abc obj;
    obj.showdata();
    return 0;
}