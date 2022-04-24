#include<iostream>
using namespace std;

class A{
    int a;
    int b;

    public:
        A(int x,int y):a(x),b(y){}  //Constructor can also be initialised this way.
        void show(void){
            cout<<"a : "<<a<<" , b : "<<b<<endl;
        }
};

int main()
{
    A obj(2,3);
    obj.show();
    return 0;
}