#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *b=&a;

    //address of OPERATOR - (&)
    cout<<"Address of a is : "<<&a<<endl;
    cout<<"Address of a is : "<<b<<endl;

    //Value at/derefrencing OPERATOR - (*)
    cout<<"Value at a is : "<<a<<endl;
    cout<<"Value at a is : "<<*b<<endl;
    
    /*Pointer to Pointer */
    int **c=&b;
    cout<<"Address of b is : "<<&b<<endl;
    cout<<"Address of b is : "<<c<<endl;

    cout<<"Value at b is : "<<b<<endl;
    cout<<"Value at b is : "<<*c<<endl;

    cout<<"Value at a is : "<<a<<endl;
    cout<<"Value at a is : "<<*b<<endl;
    cout<<"Value at a is : "<<**c<<endl;
    return 0;
}