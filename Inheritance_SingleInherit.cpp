#include<iostream>
using namespace std;

class BaseClass{
    int data1;
    public: 
        int data2;
        void setdata(int , int);
        int getdata1(void);
        int getdata2(void);
        BaseClass(){
            cout<<"BASE CLASS CONSTRUCTOR EXECUTED!"<<endl;
        }
};
void BaseClass :: setdata(int val1,int val2){
    data1=val1;
    data2=val2;
}
int BaseClass :: getdata1(){
    return data1;
}
int BaseClass :: getdata2(){
    return data2;
}

class Derived : public BaseClass{
    int data;
    public:
        Derived(){
            data=5;
        }
        void showdata(void){
            cout<<"Data 1 : "<<getdata1()<<endl; //cannot use data1 directly as it is private member of base class and cannot be inherited.
            cout<<"Data 2 : "<<data2<<endl;
            cout<<"Data(of derived class) : "<<data<<endl;
        }
};
int main()
{
    Derived d;
    d.setdata(20,30);
    d.showdata();
    return 0;
}