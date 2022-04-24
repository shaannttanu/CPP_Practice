#include<iostream>
using namespace std;

class complex; //Forward declaration

class calculator{
    public:
        int sumreal(complex,complex);
        int sumcomp(complex,complex);
        void finalSum(complex,complex);
};

class complex{
    int a,b;
    public:
        void getdata(){
            cout<<"Enter value of a,b : "<<endl;
            cin>>a>>b;
        }
        void showdata(){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
        // friend int calculator :: sumreal(complex , complex);
        // friend int calculator :: sumcomp(complex , complex);
        // friend void calculator :: finalSum(complex , complex);
        friend class calculator;
};

int calculator :: sumreal(complex obj1,complex obj2){
    return obj1.a+obj2.a;
}
int calculator :: sumcomp(complex obj1,complex obj2){
    return obj1.b+obj2.b;
}
void calculator:: finalSum(complex obj1,complex obj2){
    cout<<sumreal(obj1,obj2)<<" + "<<sumcomp(obj1,obj2)<<"i"<<endl;
}
int main()
{
    complex obj1,obj2;
    calculator calc;
    obj1.getdata();
    obj2.getdata();
    calc.finalSum(obj1,obj2);

    return 0;
}