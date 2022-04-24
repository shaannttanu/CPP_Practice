#include<iostream>
using namespace std;

class A{   //---> ABCSTRACT BASE CLASS : class having atleast one pure virtual function
    public:
        virtual void show(void)=0; //pure virtual function OR do-nothing function
};
class B:public A{
    public:
    void show(void){
            cout<<"DERIVED CLASS ---> B"<<endl;
        }
};
class C:public A{
    public:
    void show(void){
            cout<<"DERIVED CLASS ---> C"<<endl;
        }
};
int main()
{
    A *obj=new B;
    obj->show();
    return 0;
}