#include<iostream>
using namespace std;

template<class t>
class ABC{
    t data;
    public:
        ABC(t x):data(x){}
        void show(void){
            cout<<this->data;
        }
};

int main()
{
    ABC <int> *obj=new ABC <int> (10);
    obj->show();
    return 0;
}