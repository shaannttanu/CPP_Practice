#include<iostream>
using namespace std;
class A{
    int a;
    public:
        A(int x){
            a=x;
            cout<<"A class constructor"<<endl;
        }
        void showA(){
            cout<<"a : "<<a<<endl;
        }
};
class B{
    int b;
    public:
        B(int y){
            b=y;
            cout<<"B class constructor"<<endl;
        }
        void showB(){
            cout<<"b : "<<b<<endl;
        }
};
class C:virtual public A,virtual public B{
    int c;
    public:
        C(int x,int y,int z):A(x),B(y){
            c=z;
            cout<<"C class constructor"<<endl;
        }
        void showC(){
            cout<<"c : "<<c<<endl;
        }
};
int main()
{
    C obj(1,2,3);
    
    return 0;
}