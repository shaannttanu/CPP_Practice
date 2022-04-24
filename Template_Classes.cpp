//Vector dot product : 
#include<iostream>
using namespace std;

template <class t>
class vector{
    public:
        t *arr;
        t size;
        vector(t size){
            this->size=size;
            this->arr=new t[size];
        }
        void dotprod(vector &v){
            int sum=0;
            for(int i=0;i<size;i++){
                sum+=this->arr[i]*v.arr[i];
            }
            cout<<sum<<endl;
        }
};

int main()
{
    vector <int>obj1(3);
    obj1.arr[0]=1;
    obj1.arr[1]=1;
    obj1.arr[2]=1;
    
    vector <int>obj2(3);
    obj2.arr[0]=2;
    obj2.arr[1]=2;
    obj2.arr[2]=2;

    obj1.dotprod(obj2);
    return 0;
}