#include<iostream>
using namespace std;

class Base{
    public:
        int a;
        Base(){
            a=10;
        }
        virtual void show1(void){
            cout<<"Base class ---> a: "<<a<<endl;
        }
};
class Derived:public Base{
    public:
        int a;
        Derived(){
            a=15;
        }
        void show2(void){
            cout<<"Derived class ---> b: "<<a<<endl;
        }
};
int main()
{
    Base *ptr=new Derived;
    ptr->show1();
    return 0;
}