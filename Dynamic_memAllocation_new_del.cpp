#include<iostream>
using namespace std;

int main()
{
    int *p=new int(32);
    cout<<"Value at address p : "<<*p<<endl;

    float *f=new float(21.23);
    cout<<"Value at address q : "<<*f<<endl;

    char *c=new char('a');
    cout<<"Char at address c : "<<*c<<endl;

    delete p;
    delete f;
    delete c;
    cout<<"******VALUES AFTER ALLPYING 'delete ' operator******"<<endl;
    cout<<"Value at address p : "<<*p<<endl;
    cout<<"Value at address f : "<<*f<<endl;
    cout<<"Char at address c : "<<*c<<endl;

    Creating dynamic block of memory(array)

    int *arr=new int[5];
    cout<<"ENTER ARRAY VALUES : "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>*(arr+i);
    }
    cout<<"*******************"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*(arr+i)<<endl;
    }
    delete[] arr;
    for(int i=0;i<5;i++)
    {
        cout<<*(arr+i)<<endl;
    }
    return 0;
}