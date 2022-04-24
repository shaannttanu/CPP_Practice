#include<iostream>
using namespace std;

class A{
    int a;
    public:
        A(){
            a=10;
        }
        void show(void){
            cout<<"BASE CLASS show() function executed !"<<endl
                <<"Value of a : "<<a<<endl;
        }
};
class B:public A{
    int b;
    public:
        B(){
            b=20;
        }
        void show(void){
            cout<<"DERIVED CLASS show() function executed !"<<endl
                <<"Value of b : "<<b<<endl;
        } 
};
int main()
{
    // A *ptr;          //IT IS ALLOWED IN C++ : base class pointer can point to object
                        //                       of derived class , it can only access public 
                        //                       members of base class.
    // B obj;
    // ptr=&obj;
    // (*ptr).show();

    B *ptr=new B;
    ptr->show();
    return 0;
}