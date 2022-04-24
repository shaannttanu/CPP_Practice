#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
        Complex(int x,int y):a(x),b(y){}
        void show(void);
        Complex(){}
        Complex operator + (Complex &obj){  //same as Complex add(Complex &obj)
            Complex temp;
            temp.a=this->a+obj.a;
            temp.b=this->b+obj.b;
            return temp;
        }
};

void Complex :: show(void){
    cout<<a<<"+"<<b<<"i"<<endl;
}

int main()
{
    Complex obj1(1,2);
    Complex obj2(2,1);
    Complex obj;
    obj=obj1+obj2;                         //same as obj1.add(obj2)
    obj.show();
    return 0;
}