#include<iostream>
using namespace std;

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
        friend void add(complex obj1,complex obj2); //FRIEND FUNCTION DECLARATION
};

void add(complex obj1,complex obj2){
    cout<<"("<<obj1.a<<" + "<<obj1.b<<"i"<<")"<<" + "<<"("<<obj2.a<<" + "<<obj2.b<<"i"<<")"<<" = ";
    cout<<(obj1.a+obj2.a)<<" + "<<(obj1.b+obj2.b)<<"i"<<endl;
}

int main()
{
    complex obj1,obj2;
    obj1.getdata(); /*Funtion to take input of a,b of complex number of form (a+bi)*/
    obj2.getdata();

    add(obj1,obj2); 
    return 0;
}